
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ts_slice; } ;
struct TYPE_4__ {int * td_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__ VAR_4 ;

void
FUNC_2(void)
{




 VAR_4 = &VAR_2;
 FUNC_1(&VAR_4)->ts_slice = VAR_3;
 FUNC_0(&VAR_2, "sched lock", ((void*)0), VAR_1 | VAR_0);
}
