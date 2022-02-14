
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td_sched {int ts_cpu; scalar_t__ ts_slice; void* ts_ftick; void* ts_ltick; } ;


 int VAR_0 ;
 struct td_sched* FUNC_0 (int *) ;
 int VAR_1 ;
 void* VAR_2 ;

void
FUNC_1(void)
{
 struct td_sched *VAR_3;




 VAR_3 = FUNC_0(&VAR_1);
 VAR_3->ts_ltick = VAR_2;
 VAR_3->ts_ftick = VAR_2;
 VAR_3->ts_slice = 0;
 VAR_3->ts_cpu = VAR_0;
}
