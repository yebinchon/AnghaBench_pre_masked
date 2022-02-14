
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sc; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_7__ {int flags; scalar_t__ switch_in_progress; scalar_t__ blink_in_progress; TYPE_1__* cur_scp; scalar_t__ font_loading_in_progress; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_4(scr_stat *VAR_11)
{


    if (VAR_10 || VAR_11->sc->font_loading_in_progress)
 return;

    if (VAR_5 || VAR_6 || VAR_9) {
 FUNC_1();
    } else if (VAR_11 != VAR_11->sc->cur_scp) {
 return;
    }

    if (!VAR_7)
 VAR_11->sc->flags &= ~VAR_2;






    if (VAR_11 != VAR_11->sc->cur_scp || VAR_11->sc->blink_in_progress
 || VAR_11->sc->switch_in_progress)
 return;





    if (!FUNC_0(VAR_11) && !(VAR_11->sc->flags & VAR_1))
 FUNC_2(VAR_11, VAR_3);
}
