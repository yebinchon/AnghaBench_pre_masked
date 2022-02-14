
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int vi_width; int vi_height; int vi_cheight; int vi_cwidth; } ;
struct TYPE_10__ {TYPE_3__ va_info; } ;
typedef TYPE_4__ video_adapter_t ;
typedef int uint8_t ;
struct bcmsc_softc {scalar_t__ fb_addr; int ymargin; int stride; int depth; int xmargin; } ;
struct TYPE_8__ {scalar_t__ height; } ;
struct TYPE_11__ {TYPE_2__ curs_attr; TYPE_1__* sc; } ;
typedef TYPE_5__ scr_stat ;
struct TYPE_7__ {TYPE_4__* adp; } ;



__attribute__((used)) static void
FUNC_0(scr_stat* VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct bcmsc_softc *VAR_10;
 uint8_t *VAR_11;
 video_adapter_t *VAR_12;

 VAR_12 = VAR_0->sc->adp;
 VAR_10 = (struct bcmsc_softc *)VAR_12;

 if (VAR_0->curs_attr.height <= 0)
  return;

 if (VAR_10->fb_addr == 0)
  return;

 if (VAR_1 >= VAR_12->va_info.vi_width * VAR_12->va_info.vi_height)
  return;


 VAR_9 = (VAR_1 / VAR_12->va_info.vi_width) * VAR_12->va_info.vi_cheight;
 VAR_6 = (VAR_1 % VAR_12->va_info.vi_width) * VAR_12->va_info.vi_cwidth;

 VAR_11 = (uint8_t *)VAR_10->fb_addr
     + (VAR_9 + VAR_10->ymargin)*(VAR_10->stride)
     + (VAR_10->depth/8) * (VAR_6 + VAR_10->xmargin);

 VAR_5 = VAR_10->depth / 8;

 for (VAR_7 = 0; VAR_7 < VAR_12->va_info.vi_cheight; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_12->va_info.vi_cwidth; VAR_8++) {
   switch (VAR_10->depth) {
   case 32:
   case 24:
    VAR_11[VAR_5*VAR_8 + 2] ^= 0xff;

   case 16:
    VAR_11[VAR_5*VAR_8 + 1] ^= 0xff;
    VAR_11[VAR_5*VAR_8] ^= 0xff;
    break;
   default:
    break;
   }
  }

  VAR_11 += VAR_10->stride;
 }
}
