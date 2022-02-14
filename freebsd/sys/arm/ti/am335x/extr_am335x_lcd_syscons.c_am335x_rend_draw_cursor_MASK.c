
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
struct video_adapter_softc {scalar_t__ fb_addr; int ymargin; int stride; int depth; int xmargin; } ;
struct TYPE_8__ {scalar_t__ height; } ;
struct TYPE_11__ {TYPE_2__ curs_attr; TYPE_1__* sc; } ;
typedef TYPE_5__ scr_stat ;
struct TYPE_7__ {TYPE_4__* adp; } ;



__attribute__((used)) static void
FUNC_0(scr_stat* VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 video_adapter_t* VAR_5 = VAR_0->sc->adp;
 struct video_adapter_softc *VAR_6;
 int VAR_7, VAR_8;
 uint8_t *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_6 = (struct video_adapter_softc *)VAR_5;

 if (VAR_0->curs_attr.height <= 0)
  return;

 if (VAR_6->fb_addr == 0)
  return;

 if (VAR_1 >= VAR_5->va_info.vi_width * VAR_5->va_info.vi_height)
  return;


 VAR_7 = (VAR_1 / VAR_5->va_info.vi_width) * VAR_5->va_info.vi_cheight;
 VAR_8 = (VAR_1 % VAR_5->va_info.vi_width) * VAR_5->va_info.vi_cwidth;

 VAR_9 = (uint8_t *)VAR_6->fb_addr
     + (VAR_7 + VAR_6->ymargin)*(VAR_6->stride)
     + (VAR_6->depth/8) * (VAR_8 + VAR_6->xmargin);

 VAR_12 = VAR_6->depth/8;


 for (VAR_10 = 0; VAR_10 < VAR_5->va_info.vi_cheight; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_5->va_info.vi_cwidth; VAR_11++) {
   switch (VAR_6->depth) {
   case 32:
   case 24:
    VAR_9[VAR_12*VAR_11 + 2] ^= 0xff;

   case 16:
    VAR_9[VAR_12*VAR_11 + 1] ^= 0xff;
    VAR_9[VAR_12*VAR_11] ^= 0xff;
    break;
   default:
    break;
   }
  }

  VAR_9 += VAR_6->stride;
 }
}
