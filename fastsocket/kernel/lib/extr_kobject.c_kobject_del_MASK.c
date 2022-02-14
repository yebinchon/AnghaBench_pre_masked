
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int * parent; scalar_t__ state_in_sysfs; } ;


 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kobject*) ;

void FUNC_3(struct kobject *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0);
 VAR_0->state_in_sysfs = 0;
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->parent);
 VAR_0->parent = ((void*)0);
}
