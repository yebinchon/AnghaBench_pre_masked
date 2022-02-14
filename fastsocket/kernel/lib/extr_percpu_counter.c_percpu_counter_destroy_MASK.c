
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_counter {int * counters; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct percpu_counter *VAR_1)
{
 if (!VAR_1->counters)
  return;






 FUNC_0(VAR_1->counters);
 VAR_1->counters = ((void*)0);
}
