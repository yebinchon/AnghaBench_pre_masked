
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int y; int x; } ;
typedef TYPE_2__ video_display_start_t ;
struct TYPE_13__ {int * transparent; int blue; int green; int red; int count; int index; } ;
typedef TYPE_3__ video_color_palette_t ;
struct TYPE_11__ {int vi_depth; int vi_width; int vi_height; } ;
struct TYPE_14__ {int va_buffer_size; TYPE_1__ va_info; int va_type; } ;
typedef TYPE_4__ video_adapter_t ;
typedef int u_long ;
typedef int u_int ;
struct fbtype {int fb_depth; int fb_cmsize; int fb_size; int fb_width; int fb_height; int fb_type; } ;
struct fbcmap {int blue; int green; int red; int count; int index; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int ,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_6(video_adapter_t *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
    switch (VAR_2) {
    case 132:
 *(u_int *)VAR_3 = 0;
 return 0;

    case 128:
 return VAR_0;

    case 131:
 return (FUNC_3(VAR_1,
      ((video_display_start_t *)VAR_3)->x,
        ((video_display_start_t *)VAR_3)->y)
  ? VAR_0 : 0);

    case 130:
 return (FUNC_4(VAR_1, *(u_int *)VAR_3) ? VAR_0 : 0);

    case 133:
 return FUNC_2(VAR_1, ((video_color_palette_t *)VAR_3)->index,
      ((video_color_palette_t *)VAR_3)->count,
      ((video_color_palette_t *)VAR_3)->red,
      ((video_color_palette_t *)VAR_3)->green,
      ((video_color_palette_t *)VAR_3)->blue,
      ((video_color_palette_t *)VAR_3)->transparent);

    case 129:
 return FUNC_5(VAR_1, ((video_color_palette_t *)VAR_3)->index,
      ((video_color_palette_t *)VAR_3)->count,
      ((video_color_palette_t *)VAR_3)->red,
      ((video_color_palette_t *)VAR_3)->green,
      ((video_color_palette_t *)VAR_3)->blue,
      ((video_color_palette_t *)VAR_3)->transparent);

    case 135:
 ((struct fbtype *)VAR_3)->fb_type = FUNC_1(VAR_1->va_type);
 ((struct fbtype *)VAR_3)->fb_height = VAR_1->va_info.vi_height;
 ((struct fbtype *)VAR_3)->fb_width = VAR_1->va_info.vi_width;
 ((struct fbtype *)VAR_3)->fb_depth = VAR_1->va_info.vi_depth;
 if ((VAR_1->va_info.vi_depth <= 1) || (VAR_1->va_info.vi_depth > 8))
     ((struct fbtype *)VAR_3)->fb_cmsize = 0;
 else
     ((struct fbtype *)VAR_3)->fb_cmsize = 1 << VAR_1->va_info.vi_depth;
 ((struct fbtype *)VAR_3)->fb_size = VAR_1->va_buffer_size;
 return 0;

    case 136:
 return FUNC_2(VAR_1, ((struct fbcmap *)VAR_3)->index,
      ((struct fbcmap *)VAR_3)->count,
      ((struct fbcmap *)VAR_3)->red,
      ((struct fbcmap *)VAR_3)->green,
      ((struct fbcmap *)VAR_3)->blue, ((void*)0));

    case 134:
 return FUNC_5(VAR_1, ((struct fbcmap *)VAR_3)->index,
      ((struct fbcmap *)VAR_3)->count,
      ((struct fbcmap *)VAR_3)->red,
      ((struct fbcmap *)VAR_3)->green,
      ((struct fbcmap *)VAR_3)->blue, ((void*)0));

    default:
 return FUNC_0(VAR_1, VAR_2, VAR_3);
    }
}
