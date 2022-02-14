
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* local; } ;
typedef TYPE_2__ VCHIQ_STATE_T ;
struct TYPE_4__ {int recycle; int trigger; int sync_release; int sync_trigger; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(VCHIQ_STATE_T *VAR_0)
{
 FUNC_0(&VAR_0->local->sync_trigger);
 FUNC_0(&VAR_0->local->sync_release);
 FUNC_0(&VAR_0->local->trigger);
 FUNC_0(&VAR_0->local->recycle);
}
