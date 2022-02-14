
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_5__ {int vi_width; int vi_cheight; int vi_cwidth; } ;
struct TYPE_6__ {TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;
struct bcmsc_softc {scalar_t__ fb_addr; int* font; int ymargin; int stride; int depth; int xmargin; int fbswap; } ;
struct TYPE_7__ {int b; int g; int r; int a; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_2, vm_offset_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 struct bcmsc_softc *VAR_12;
 u_char *VAR_13;
 uint8_t *VAR_14, VAR_15, VAR_16, VAR_17;
 uint16_t VAR_18;

 VAR_12 = (struct bcmsc_softc *)VAR_2;

 if (VAR_12->fb_addr == 0)
  return (0);

 VAR_11 = (VAR_3 / VAR_2->va_info.vi_width) * VAR_2->va_info.vi_cheight;
 VAR_7 = (VAR_3 % VAR_2->va_info.vi_width) * VAR_2->va_info.vi_cwidth;
 VAR_13 = VAR_12->font + VAR_4*VAR_0;
 VAR_14 = (uint8_t *)VAR_12->fb_addr
     + (VAR_11 + VAR_12->ymargin)*(VAR_12->stride)
     + (VAR_12->depth/8) * (VAR_7 + VAR_12->xmargin);

 VAR_15 = VAR_5 & 0xf ;
 VAR_16 = (VAR_5 >> 4) & 0xf;

 VAR_6 = VAR_12->depth / 8;
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  for (VAR_9 = 0, VAR_10 = 7; VAR_9 < 8; VAR_9++, VAR_10--) {
   if ((VAR_13[VAR_8] & (1 << VAR_10)) == 0)
    VAR_17 = VAR_16;
   else
    VAR_17 = VAR_15;

   switch (VAR_12->depth) {
   case 32:
   case 24:
    if (VAR_12->fbswap) {
     VAR_14[VAR_6 * VAR_9 + 0] =
         VAR_1[VAR_17].b;
     VAR_14[VAR_6 * VAR_9 + 1] =
         VAR_1[VAR_17].g;
     VAR_14[VAR_6 * VAR_9 + 2] =
         VAR_1[VAR_17].r;
    } else {
     VAR_14[VAR_6 * VAR_9 + 0] =
         VAR_1[VAR_17].r;
     VAR_14[VAR_6 * VAR_9 + 1] =
         VAR_1[VAR_17].g;
     VAR_14[VAR_6 * VAR_9 + 2] =
         VAR_1[VAR_17].b;
    }
    if (VAR_12->depth == 32)
     VAR_14[VAR_6 * VAR_9 + 3] =
         VAR_1[VAR_17].a;
    break;
   case 16:
    VAR_18 = (VAR_1[VAR_17].r >> 3) << 11;
    VAR_18 |= (VAR_1[VAR_17].g >> 2) << 5;
    VAR_18 |= (VAR_1[VAR_17].b >> 3);
    VAR_14[VAR_6 * VAR_9] = VAR_18 & 0xff;
    VAR_14[VAR_6 * VAR_9 + 1] = (VAR_18 >> 8) & 0xff;
   default:

    break;
   }
  }

  VAR_14 += (VAR_12->stride);
 }

        return (0);
}
