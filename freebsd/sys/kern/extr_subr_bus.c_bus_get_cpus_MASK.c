
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cpu_sets { ____Placeholder_cpu_sets } cpu_sets ;
typedef int * device_t ;
typedef int cpuset_t ;


 int FUNC_0 (int *,int *,int,size_t,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;

int
FUNC_2(device_t VAR_1, enum cpu_sets VAR_2, size_t VAR_3, cpuset_t *VAR_4)
{
 device_t VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4));
}
