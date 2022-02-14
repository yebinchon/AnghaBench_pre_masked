
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int video_info_t ;
struct TYPE_13__ {int border; TYPE_2__* sc; int ysize; int xsize; int scr; TYPE_1__* rndr; int mode; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_14__ {scalar_t__ va_window; } ;
struct TYPE_12__ {TYPE_4__* adp; TYPE_3__* cur_scp; } ;
struct TYPE_11__ {int (* init ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ,int ,void*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;

int
FUNC_7(scr_stat *VAR_2)
{
    video_info_t VAR_3;


    if (FUNC_5(VAR_2->sc->adp, VAR_2->mode, &VAR_3))
 return 1;


    if (VAR_2 != VAR_2->sc->cur_scp)
 return 0;


    FUNC_6(VAR_2->sc->adp, VAR_2->mode);
    VAR_2->rndr->init(VAR_2);

    FUNC_2(&VAR_2->scr, VAR_1, VAR_2->xsize, VAR_2->ysize,
  (void *)VAR_2->sc->adp->va_window, VAR_0);


    FUNC_4(VAR_2);

    FUNC_0(VAR_2, VAR_2->border);
    FUNC_1(VAR_2);

    return 0;
}
