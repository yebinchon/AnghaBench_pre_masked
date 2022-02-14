
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int vi_width; int vi_height; } ;
typedef TYPE_2__ video_info_t ;
struct winsize {int ws_row; int ws_col; } ;
struct tty {int dummy; } ;
struct TYPE_14__ {int status; int mode; int xpixel; int ypixel; int ysize; int xsize; TYPE_1__* sc; scalar_t__ font_size; int * font; scalar_t__ yoff; scalar_t__ xoff; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_15__ {int va_name; } ;
struct TYPE_12__ {TYPE_3__* cur_scp; TYPE_4__* adp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 int * FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct tty*,struct winsize*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,int,TYPE_2__*) ;

int
FUNC_9(scr_stat *VAR_6, struct tty *VAR_7, int VAR_8)
{



    video_info_t VAR_9;
    struct winsize VAR_10;
    int VAR_11;
    int VAR_12;

    if (FUNC_8(VAR_6->sc->adp, VAR_8, &VAR_9))
 return VAR_0;


    VAR_12 = FUNC_5();
    if ((VAR_11 = FUNC_0(VAR_6))) {
 FUNC_6(VAR_12);
 return VAR_11;
    }

    if (FUNC_3(VAR_6, VAR_6->sc->adp->va_name, VAR_1) == ((void*)0)) {
 FUNC_6(VAR_12);
 return VAR_0;
    }


    VAR_6->status |= (VAR_5 | VAR_1 | VAR_2);
    VAR_6->status &= ~(VAR_4 | VAR_3);
    VAR_6->mode = VAR_8;




    VAR_6->xoff = 0;
    VAR_6->yoff = 0;
    VAR_6->xpixel = VAR_9.vi_width;
    VAR_6->ypixel = VAR_9.vi_height;
    VAR_6->font = ((void*)0);
    VAR_6->font_size = 0;


    FUNC_2(VAR_6, VAR_6->xpixel / 2, VAR_6->ypixel / 2);

    FUNC_1(VAR_6, ((void*)0));
    FUNC_6(VAR_12);

    if (VAR_6 == VAR_6->sc->cur_scp)
 FUNC_4(VAR_6);

    VAR_6->status &= ~VAR_5;

    if (VAR_7 == ((void*)0))
 return 0;
    VAR_10.ws_col = VAR_6->xsize;
    VAR_10.ws_row = VAR_6->ysize;
    FUNC_7(VAR_7, &VAR_10);
    return 0;

}
