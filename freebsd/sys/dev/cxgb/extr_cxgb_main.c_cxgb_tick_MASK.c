
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int cxgb_tick_ch; int tick_task; int tq; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void (*) (void*),TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 adapter_t *VAR_3 = (adapter_t *)VAR_2;

 if (VAR_3->flags & VAR_0)
  return;

 FUNC_1(VAR_3->tq, &VAR_3->tick_task);
 FUNC_0(&VAR_3->cxgb_tick_ch, VAR_1, FUNC_2, VAR_3);
}
