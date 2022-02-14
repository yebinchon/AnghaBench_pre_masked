
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int vi_cwidth; int vi_cheight; int vi_width; int vi_height; } ;
typedef TYPE_2__ video_info_t ;
typedef int u_char ;
struct winsize {int ws_col; int ws_row; } ;
struct tty {int dummy; } ;
struct TYPE_17__ {int ysize; int status; int mode; int xsize; int xpixel; int ypixel; int font_size; int font_width; TYPE_1__* sc; int * font; scalar_t__ yoff; scalar_t__ xoff; int * history; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_18__ {int va_name; } ;
struct TYPE_15__ {int fonts_loaded; TYPE_3__* cur_scp; TYPE_4__* adp; int * font_16; int * font_14; int * font_8; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int * FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct tty*,struct winsize*) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int,TYPE_2__*) ;

int
FUNC_12(scr_stat *VAR_12, struct tty *VAR_13, int VAR_14, int VAR_15, int VAR_16,
   int VAR_17, int VAR_18)
{
    video_info_t VAR_19;
    struct winsize VAR_20;
    u_char *VAR_21;
    int VAR_22;
    int VAR_23;
    int VAR_24;

    if (FUNC_11(VAR_12->sc->adp, VAR_14, &VAR_19))
 return VAR_1;


    if (VAR_18 <= 0)
 VAR_18 = VAR_19.vi_cwidth;
    if (VAR_17 <= 0)
 VAR_17 = VAR_19.vi_cheight;
    if (VAR_17 < 14)
 VAR_17 = 8;
    else if (VAR_17 >= 16)
 VAR_17 = 16;
    else
 VAR_17 = 14;

    switch (VAR_17) {
    case 8:
 if ((VAR_12->sc->fonts_loaded & VAR_5) == 0)
     return (VAR_0);
 VAR_21 = VAR_12->sc->font_8;
 break;
    case 14:
 if ((VAR_12->sc->fonts_loaded & VAR_3) == 0)
     return (VAR_0);
 VAR_21 = VAR_12->sc->font_14;
 break;
    case 16:
 if ((VAR_12->sc->fonts_loaded & VAR_4) == 0)
     return (VAR_0);
 VAR_21 = VAR_12->sc->font_16;
 break;
    }



    if ((VAR_15 <= 0) || (VAR_15 > VAR_19.vi_width))
 VAR_15 = VAR_19.vi_width;
    if ((VAR_16 <= 0) || (VAR_16 > VAR_19.vi_height))
 VAR_16 = VAR_19.vi_height;


    VAR_24 = FUNC_8();
    if ((VAR_23 = FUNC_3(VAR_12))) {
 FUNC_9(VAR_24);
 return VAR_23;
    }

    if (FUNC_6(VAR_12, VAR_12->sc->adp->va_name, 0) == ((void*)0)) {
 FUNC_9(VAR_24);
 return VAR_1;
    }



    if (VAR_12->history != ((void*)0))
 FUNC_4(VAR_12);

    VAR_22 = VAR_12->ysize;




    VAR_12->status |= VAR_11 | VAR_7;
    VAR_12->status &= ~(VAR_6 | VAR_9 | VAR_8);
    VAR_12->mode = VAR_14;
    VAR_12->xsize = VAR_15;
    VAR_12->ysize = VAR_16;
    VAR_12->xoff = 0;
    VAR_12->yoff = 0;
    VAR_12->xpixel = VAR_12->xsize*8;
    VAR_12->ypixel = VAR_12->ysize*VAR_17;
    VAR_12->font = VAR_21;
    VAR_12->font_size = VAR_17;
    VAR_12->font_width = VAR_18;


    FUNC_2(VAR_12, VAR_10, VAR_10);
    FUNC_5(VAR_12, ((void*)0));

    FUNC_0(VAR_12, VAR_2);


    FUNC_1(VAR_12, 0, VAR_22, VAR_2);

    FUNC_9(VAR_24);

    if (VAR_12 == VAR_12->sc->cur_scp)
 FUNC_7(VAR_12);
    VAR_12->status &= ~VAR_11;

    if (VAR_13 == ((void*)0))
 return 0;
    VAR_20.ws_col = VAR_12->xsize;
    VAR_20.ws_row = VAR_12->ysize;
    FUNC_10(VAR_13, &VAR_20);
    return 0;
}
