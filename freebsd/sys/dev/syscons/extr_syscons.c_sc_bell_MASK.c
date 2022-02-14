
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_5__ {int flags; int blink_in_progress; TYPE_2__* cur_scp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,int) ;

void
FUNC_2(scr_stat *VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_2 || VAR_4 || VAR_5 || !VAR_3)
 return;

    if (VAR_6 != VAR_6->sc->cur_scp && (VAR_6->sc->flags & VAR_0))
 return;

    if (VAR_6->sc->flags & VAR_1) {
 if (VAR_6->sc->blink_in_progress)
     return;
 VAR_6->sc->blink_in_progress = 3;
 if (VAR_6 != VAR_6->sc->cur_scp)
     VAR_6->sc->blink_in_progress += 2;
 FUNC_0(VAR_6->sc->cur_scp);
    } else if (VAR_8 != 0 && VAR_7 != 0) {
 if (VAR_6 != VAR_6->sc->cur_scp)
     VAR_7 *= 2;
 FUNC_1(1193182 / VAR_7, VAR_8);
    }
}
