
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ kbd_mode; scalar_t__ mode; int status; int border; int ypos; int xpos; int ysize; int xsize; int scr; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_18__ {scalar_t__ kbd_open_level; int kbd; TYPE_2__* old_scp; int palette; TYPE_4__* adp; int palette2; TYPE_2__* new_scp; TYPE_2__* cur_scp; } ;
typedef TYPE_3__ sc_softc_t ;
typedef int caddr_t ;
struct TYPE_16__ {scalar_t__ vi_mem_model; } ;
struct TYPE_19__ {TYPE_1__ va_info; scalar_t__ va_window; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ,int ,int ,void*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_13(sc_softc_t *VAR_7)
{
    scr_stat *VAR_8;


    FUNC_5(VAR_7->old_scp, VAR_7->old_scp->xpos, VAR_7->old_scp->ypos);
    if (!FUNC_0(VAR_7->old_scp))
 FUNC_6(VAR_7->old_scp);
    if (VAR_7->old_scp->kbd_mode == VAR_2)
 FUNC_4(VAR_7->old_scp);


    VAR_8 = VAR_7->cur_scp = VAR_7->new_scp;
    if (VAR_7->old_scp->mode != VAR_8->mode || FUNC_1(VAR_7->old_scp))
 FUNC_10(VAR_8);

    else
 FUNC_9(&VAR_8->scr, VAR_5, VAR_8->xsize, VAR_8->ysize,
      (void *)VAR_7->adp->va_window, VAR_0);

    VAR_8->status |= VAR_4;
    FUNC_5(VAR_8, VAR_8->xpos, VAR_8->ypos);
    if (!FUNC_0(VAR_8))
 FUNC_8(VAR_8);

    if (FUNC_0(VAR_7->old_scp)) {





 FUNC_12(VAR_7->adp, VAR_7->palette);
    }

    FUNC_7(VAR_8, VAR_8->border);


    if (VAR_7->kbd_open_level == 0 && VAR_7->old_scp->kbd_mode != VAR_8->kbd_mode)
 (void)FUNC_2(VAR_7->kbd, VAR_1, (caddr_t)&VAR_8->kbd_mode);
    FUNC_11(VAR_8, VAR_8->status, VAR_3);

    FUNC_3(VAR_8);
}
