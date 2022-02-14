
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; TYPE_3__* sc; } ;
typedef TYPE_1__ scr_stat ;
struct TYPE_5__ {scalar_t__ switch_in_progress; TYPE_1__* old_scp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_1(scr_stat *VAR_2, int VAR_3, int *VAR_4)
{
    if (VAR_2 == VAR_2->sc->old_scp && VAR_2->status & VAR_1) {
 VAR_2->status &= ~VAR_1;
 if (VAR_3)
     *VAR_4 = FUNC_0(VAR_2->sc, *VAR_4);
 else
     VAR_2->sc->switch_in_progress = 0;
 return 0;
    }
    return VAR_0;
}
