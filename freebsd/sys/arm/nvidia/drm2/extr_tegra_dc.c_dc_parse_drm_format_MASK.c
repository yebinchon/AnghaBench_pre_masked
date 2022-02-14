
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {int pixel_format; int * pitches; scalar_t__* offsets; int bits_per_pixel; } ;
struct tegra_fb {int rotation; int flip_x; int flip_y; TYPE_1__ drm_fb; struct tegra_bo** planes; int block_height; scalar_t__ block_linear; } ;
struct tegra_bo {scalar_t__ pbase; } ;
struct dc_window {int transpose_xy; int flip_x; int flip_y; int is_yuv; int is_yuv_planar; int * stride; scalar_t__* base; int bits_per_pixel; void* swap; void* color_mode; int block_height; int surface_kind; } ;


 void* FUNC_0 (int ) ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct tegra_fb *VAR_11, struct dc_window *VAR_12)
{
 struct tegra_bo *VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;
 bool VAR_16, VAR_17;
 int VAR_18, VAR_19;

 switch (VAR_11->drm_fb.pixel_format) {
 case 132:
  VAR_15 = FUNC_0(VAR_1);
  VAR_14 = VAR_7;
  VAR_16 = 0;
  VAR_17 = 0;
  break;

 case 131:
  VAR_15 = FUNC_0(VAR_1);
  VAR_14 = VAR_6;
  VAR_16 = 0;
  VAR_17 = 0;
  break;

 case 134:
  VAR_15 = FUNC_0(VAR_1);
  VAR_14 = VAR_5;
  VAR_16 = 0;
  VAR_17 = 0;
  break;

 case 133:
  VAR_15 = FUNC_0(VAR_1);
  VAR_14 = VAR_9;
  VAR_16 = 1;
  VAR_17 = 0;
  break;

 case 128:
  VAR_15 = FUNC_0(VAR_4);
  VAR_14 = VAR_9;
  VAR_16 = 1;
  VAR_17 = 0;
  break;

 case 130:
  VAR_15 = FUNC_0(VAR_1);
  VAR_14 = VAR_8;
  VAR_16 = 1;
  VAR_17 = 1;
  break;

 case 129:
  VAR_15 = FUNC_0(VAR_1);
  VAR_14 = VAR_10;
  VAR_16 = 1;
  VAR_17 = 1;
  break;

 default:

  return (-VAR_0);
 }


 switch (VAR_11->rotation) {
 case 0:
 case 180:
  break;

 case 90:
 case 270:
  if (!VAR_11->block_linear)
   return (-VAR_0);
  break;

 default:
  return (-VAR_0);
 }


 if (VAR_12 == ((void*)0))
  return (0);

 VAR_12->surface_kind =
     VAR_11->block_linear ? VAR_2: VAR_3;
 VAR_12->block_height = VAR_11->block_height;
 switch (VAR_11->rotation) {
 case 0:
  VAR_12->transpose_xy = 0;
  VAR_12->flip_x = 0;
  VAR_12->flip_y = 0;
  break;

 case 90:
  VAR_12->transpose_xy = 1;
  VAR_12->flip_x = 0;
  VAR_12->flip_y = 1;
  break;

 case 180:
  VAR_12->transpose_xy = 0;
  VAR_12->flip_x = 1;
  VAR_12->flip_y = 1;
  break;

 case 270:
  VAR_12->transpose_xy = 1;
  VAR_12->flip_x = 1;
  VAR_12->flip_y = 0;
  break;
 }
 VAR_12->flip_x ^= VAR_11->flip_x;
 VAR_12->flip_y ^= VAR_11->flip_y;

 VAR_12->color_mode = VAR_14;
 VAR_12->swap = VAR_15;
 VAR_12->bits_per_pixel = VAR_11->drm_fb.bits_per_pixel;
 VAR_12->is_yuv = VAR_16;
 VAR_12->is_yuv_planar = VAR_17;

 VAR_18 = FUNC_1(VAR_11->drm_fb.pixel_format);
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_13 = VAR_11->planes[VAR_19];
  VAR_12->base[VAR_19] = VAR_13->pbase + VAR_11->drm_fb.offsets[VAR_19];
  VAR_12->stride[VAR_19] = VAR_11->drm_fb.pitches[VAR_19];
 }
 return (0);
}
