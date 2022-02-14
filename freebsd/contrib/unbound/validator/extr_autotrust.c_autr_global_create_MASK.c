
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autr_global_data {int probe; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

struct autr_global_data* FUNC_2(void)
{
 struct autr_global_data* VAR_1;
 VAR_1 = (struct autr_global_data*)FUNC_0(sizeof(*VAR_1));
 if(!VAR_1)
  return ((void*)0);
 FUNC_1(&VAR_1->probe, &VAR_0);
 return VAR_1;
}
