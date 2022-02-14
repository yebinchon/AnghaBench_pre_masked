
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_4__ {int vi_width; int vi_cheight; int vi_cwidth; } ;
struct TYPE_5__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
struct video_adapter_softc {int bpp; scalar_t__ fb_addr; int* font; int ymargin; int stride; int xmargin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_4, vm_offset_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct video_adapter_softc *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 uint8_t *VAR_16;
 u_char *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;

 VAR_8 = (struct video_adapter_softc *)VAR_4;
 VAR_11 = VAR_8->bpp;

 if (VAR_8->fb_addr == 0)
  return (0);
 VAR_10 = (VAR_5 / VAR_4->va_info.vi_width) * VAR_4->va_info.vi_cheight;
 VAR_9 = (VAR_5 % VAR_4->va_info.vi_width) * VAR_4->va_info.vi_cwidth;
 VAR_17 = VAR_8->font + VAR_6 * VAR_1;
 VAR_16 = (uint8_t *)VAR_8->fb_addr
     + (VAR_10 + VAR_8->ymargin) * (VAR_8->stride)
     + VAR_11 * (VAR_9 + VAR_8->xmargin);

 if (VAR_11 == 2) {
  VAR_19 = VAR_2[(VAR_7 >> 4) & 0x0f];
  VAR_18 = VAR_2[VAR_7 & 0x0f];
 } else if (VAR_11 == 3) {
  VAR_19 = VAR_3[(VAR_7 >> 4) & 0x0f];
  VAR_18 = VAR_3[VAR_7 & 0x0f];
 } else {
  return (VAR_0);
 }

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  for (VAR_14 = 0, VAR_15 = 7; VAR_14 < 8; VAR_14++, VAR_15--) {
   if ((VAR_17[VAR_13] & (1 << VAR_15)) == 0)
    VAR_20 = VAR_19;
   else
    VAR_20 = VAR_18;

   for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 ++)
    VAR_16[VAR_11 * VAR_14 + VAR_12] =
        (VAR_20 >> (VAR_12 << 3)) & 0xff;
  }

  VAR_16 += (VAR_8->stride);
 }

        return (0);
}
