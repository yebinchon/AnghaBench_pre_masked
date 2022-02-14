
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
struct video_adapter_softc {scalar_t__ fb_addr; int* font; int ymargin; int stride; int depth; int xmargin; } ;
struct TYPE_7__ {int r; int g; int b; int a; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_2, vm_offset_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 struct video_adapter_softc *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10, VAR_11;
 uint8_t *VAR_12;
 u_char *VAR_13;
 uint8_t VAR_14, VAR_15, VAR_16;
 uint16_t VAR_17;

 VAR_6 = (struct video_adapter_softc *)VAR_2;

 if (VAR_6->fb_addr == 0)
  return (0);

 VAR_7 = (VAR_3 / VAR_2->va_info.vi_width) * VAR_2->va_info.vi_cheight;
 VAR_8 = (VAR_3 % VAR_2->va_info.vi_width) * VAR_2->va_info.vi_cwidth;
 VAR_13 = VAR_6->font + VAR_4*VAR_0;
 VAR_12 = (uint8_t *)VAR_6->fb_addr
     + (VAR_7 + VAR_6->ymargin)*(VAR_6->stride)
     + (VAR_6->depth/8) * (VAR_8 + VAR_6->xmargin);

 VAR_14 = VAR_5 & 0xf ;
 VAR_15 = (VAR_5 >> 4) & 0xf;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  for (VAR_10 = 0, VAR_11 = 7; VAR_10 < 8; VAR_10++, VAR_11--) {
   if ((VAR_13[VAR_9] & (1 << VAR_11)) == 0)
    VAR_16 = VAR_15;
   else
    VAR_16 = VAR_14;

   switch (VAR_6->depth) {
   case 32:
    VAR_12[4*VAR_10+0] = VAR_1[VAR_16].r;
    VAR_12[4*VAR_10+1] = VAR_1[VAR_16].g;
    VAR_12[4*VAR_10+2] = VAR_1[VAR_16].b;
    VAR_12[4*VAR_10+3] = VAR_1[VAR_16].a;
    break;
   case 24:
    VAR_12[3*VAR_10] = VAR_1[VAR_16].r;
    VAR_12[3*VAR_10+1] = VAR_1[VAR_16].g;
    VAR_12[3*VAR_10+2] = VAR_1[VAR_16].b;
    break;
   case 16:
    VAR_17 = (VAR_1[VAR_16].r >> 3) << 11;
    VAR_17 |= (VAR_1[VAR_16].g >> 2) << 5;
    VAR_17 |= (VAR_1[VAR_16].b >> 3);
    VAR_12[2*VAR_10] = VAR_17 & 0xff;
    VAR_12[2*VAR_10 + 1] = (VAR_17 >> 8) & 0xff;
   default:

    break;
   }
  }

  VAR_12 += (VAR_6->stride);
 }

        return (0);
}
