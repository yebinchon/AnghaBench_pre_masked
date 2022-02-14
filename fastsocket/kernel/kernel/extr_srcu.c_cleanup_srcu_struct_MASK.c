
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int * per_cpu_ref; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct srcu_struct*) ;

void FUNC_3(struct srcu_struct *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 if (VAR_1 != 0)
  return;
 FUNC_1(VAR_0->per_cpu_ref);
 VAR_0->per_cpu_ref = ((void*)0);
}
