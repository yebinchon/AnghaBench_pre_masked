
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_short ;
typedef int u_char ;
struct mousedata {int* md_border; int* md_interior; } ;
struct TYPE_6__ {int font_size; int yoff; int xsize; int xoff; int scr; TYPE_1__* sc; scalar_t__ font; struct mousedata* mouse_data; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_7__ {int va_flags; int va_crtc_addr; } ;
struct TYPE_5__ {int mouse_char; TYPE_3__* adp; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int,int) ;
 int FUNC_6 (TYPE_3__*,int ,int,int,int*,int,int) ;

__attribute__((used)) static void
FUNC_7(scr_stat *VAR_3, int VAR_4, int VAR_5)
{

    if (FUNC_0(VAR_3->sc->adp->va_flags)) {
 const struct mousedata *VAR_6;
 uint32_t VAR_7, VAR_8;
 u_char VAR_9[128];
 u_short VAR_10[32];
 u_char VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_6 = VAR_3->mouse_data;


 VAR_12 = (VAR_5/VAR_3->font_size - VAR_3->yoff)*VAR_3->xsize + VAR_4/8 - VAR_3->xoff;
 FUNC_1(VAR_3->font + FUNC_4(&VAR_3->scr, VAR_12)*VAR_3->font_size,
       &VAR_9[0], VAR_3->font_size);
 FUNC_1(VAR_3->font + FUNC_4(&VAR_3->scr, VAR_12 + 1)*VAR_3->font_size,
       &VAR_9[32], VAR_3->font_size);
 FUNC_1(VAR_3->font
   + FUNC_4(&VAR_3->scr, VAR_12 + VAR_3->xsize)*VAR_3->font_size,
       &VAR_9[64], VAR_3->font_size);
 FUNC_1(VAR_3->font
   + FUNC_4(&VAR_3->scr, VAR_12 + VAR_3->xsize + 1)*VAR_3->font_size,
       &VAR_9[96], VAR_3->font_size);
 for (VAR_16 = 0; VAR_16 < VAR_3->font_size; ++VAR_16) {
  VAR_10[VAR_16] = VAR_9[VAR_16]<<8 | VAR_9[VAR_16+32];
  VAR_10[VAR_16 + VAR_3->font_size] = VAR_9[VAR_16+64]<<8 | VAR_9[VAR_16+96];
 }


 VAR_13 = VAR_4%8;
 VAR_14 = VAR_5%VAR_3->font_size;
 for (VAR_16 = 0; VAR_16 < 16; ++VAR_16) {
  VAR_7 = VAR_6->md_border[VAR_16] << 8;
  VAR_8 = VAR_6->md_interior[VAR_16] << 8;
  VAR_7 >>= VAR_13;
  VAR_8 >>= VAR_13;
  if (VAR_3->sc->adp->va_flags & VAR_1) {

   VAR_7 = (VAR_7 & 0xff0000) |
     (VAR_7 & 0x007f80) << 1 |
     (VAR_7 & 0x00003f) << 2;
   VAR_8 = (VAR_8 & 0xff0000) |
       (VAR_8 & 0x007f80) << 1 |
       (VAR_8 & 0x00003f) << 2;
  }
  VAR_7 >>= 8;
  VAR_8 >>= 8;
  VAR_10[VAR_16 + VAR_14] = (VAR_10[VAR_16 + VAR_14] & ~VAR_7) |
          VAR_8;
 }
 for (VAR_16 = 0; VAR_16 < VAR_3->font_size; ++VAR_16) {
  VAR_9[VAR_16] = (VAR_10[VAR_16] & 0xff00) >> 8;
  VAR_9[VAR_16 + 32] = VAR_10[VAR_16] & 0xff;
  VAR_9[VAR_16 + 64] = (VAR_10[VAR_16 + VAR_3->font_size] & 0xff00) >> 8;
  VAR_9[VAR_16 + 96] = VAR_10[VAR_16 + VAR_3->font_size] & 0xff;
 }



 VAR_15 = VAR_3->sc->adp->va_crtc_addr;
 while (!VAR_2 &&
     !(FUNC_2(VAR_15 + 6) & 0x08))
             ;

 VAR_11 = VAR_3->sc->mouse_char;
 FUNC_6(VAR_3->sc->adp, 0, 32, 8, VAR_9, VAR_11, 4);

 FUNC_5(&VAR_3->scr, VAR_12, VAR_11, FUNC_3(&VAR_3->scr, VAR_12));

 FUNC_5(&VAR_3->scr, VAR_12 + VAR_3->xsize, VAR_11 + 2,
      FUNC_3(&VAR_3->scr, VAR_12 + VAR_3->xsize));
 if (VAR_4 < (VAR_3->xsize - 1)*8) {
  FUNC_5(&VAR_3->scr, VAR_12 + 1, VAR_11 + 1,
       FUNC_3(&VAR_3->scr, VAR_12 + 1));
  FUNC_5(&VAR_3->scr, VAR_12 + VAR_3->xsize + 1, VAR_11 + 3,
       FUNC_3(&VAR_3->scr, VAR_12 + VAR_3->xsize + 1));
 }
    } else

    {

 static const int VAR_17[16] = {
  6, 6, 6, 6, 2, 2, 2, 6, 14, 14, 14, 14, 10, 10, 10, 14
 };
 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_18 = (VAR_5/VAR_3->font_size - VAR_3->yoff)*VAR_3->xsize + VAR_4/8 - VAR_3->xoff;
 VAR_20 = FUNC_3(&VAR_3->scr, VAR_18);
 if (VAR_3->sc->adp->va_flags & VAR_0)
  VAR_19 = (VAR_17[(VAR_20 & 0xf000) >> 12] << 12)
   | ((VAR_20 & 0x0f00) | 0x0800);
 else
  VAR_19 = ((VAR_20 & 0xf000) >> 4) | ((VAR_20 & 0x0f00) << 4);
 FUNC_5(&VAR_3->scr, VAR_18, FUNC_4(&VAR_3->scr, VAR_18), VAR_19);
    }
}
