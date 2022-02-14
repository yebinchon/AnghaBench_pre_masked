
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_4__ {scalar_t__ switch_in_progress; TYPE_2__* new_scp; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(scr_stat *VAR_2)
{
    if (VAR_2 == VAR_2->sc->new_scp && VAR_2->status & VAR_1) {
 VAR_2->status &= ~VAR_1;
 VAR_2->sc->switch_in_progress = 0;
 return 0;
    }
    return VAR_0;
}
