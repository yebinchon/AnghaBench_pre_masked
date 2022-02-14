
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vi_width; int vi_height; int vi_depth; int vi_planes; } ;
struct TYPE_8__ {int va_line_width; int va_window_size; TYPE_1__ va_info; scalar_t__ va_window; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
struct TYPE_9__ {int zlen; int width; int height; int bpsl; int* zdata; int palette; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int) ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_4(video_adapter_t *VAR_2)
{
 uint8_t *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 uint8_t VAR_18[VAR_0];

 if (VAR_1.zlen < 1)
  return (1);

 FUNC_2(VAR_2, VAR_1.palette);

 VAR_3 = (uint8_t *)VAR_2->va_window;
 VAR_4 = VAR_2->va_info.vi_width;
 VAR_5 = VAR_2->va_info.vi_height;
 VAR_6 = VAR_2->va_line_width;
 VAR_7 = VAR_2->va_info.vi_depth;
 VAR_8 = VAR_2->va_info.vi_planes;
 VAR_9 = VAR_2->va_window_size;

 for (VAR_10 = 0; VAR_10 < VAR_5*VAR_6; VAR_10 += VAR_9) {
  FUNC_3(VAR_2, VAR_10);
  FUNC_1(VAR_3, VAR_9);
 }

 VAR_16 = (VAR_4 - VAR_1.width) / 2;
 VAR_17 = (VAR_5 - VAR_1.height) / 2;
 VAR_10 = 0;
 VAR_14 = VAR_17 * VAR_6 + VAR_16;
 while (VAR_14 > VAR_9) {
  VAR_14 -= VAR_9;
  VAR_10 += VAR_9;
 }
 FUNC_3(VAR_2, VAR_10);

 for (VAR_15 = VAR_12 = 0; VAR_15 < VAR_1.height; ++VAR_15, ++VAR_17, VAR_14 += VAR_6) {
  for (VAR_13 = 0; VAR_13 < VAR_1.bpsl && VAR_12 < VAR_1.zlen; ++VAR_12) {
   if ((VAR_1.zdata[VAR_12] & 0xc0) == 0xc0) {
    VAR_11 = VAR_1.zdata[VAR_12++] & 0x3f;
    if (VAR_12 >= VAR_1.zlen)
     return (1);
   } else {
    VAR_11 = 1;
   }
   if (VAR_13 + VAR_11 > VAR_1.bpsl)
    return (1);
   while (VAR_11--)
    VAR_18[VAR_13++] = VAR_1.zdata[VAR_12];
  }

  if (VAR_14 > VAR_9) {
   VAR_10 += VAR_9;
   VAR_14 -= VAR_9;
   FUNC_3(VAR_2, VAR_10);
  }

  if (VAR_14 + VAR_1.width > VAR_9) {

   VAR_13 = VAR_9 - VAR_14;
   FUNC_0(VAR_18, VAR_3 + VAR_14, VAR_13);
   VAR_10 += VAR_9;
   VAR_14 -= VAR_9;
   FUNC_3(VAR_2, VAR_10);
   FUNC_0(VAR_18 + VAR_13, VAR_3, VAR_1.width - VAR_13);
  } else {
   FUNC_0(VAR_18, VAR_3 + VAR_14, VAR_1.width);
  }
 }

 return (0);
}
