
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cpu_sets { ____Placeholder_cpu_sets } cpu_sets ;
typedef int device_t ;
typedef int cpuset_t ;


 int VAR_0 ;

 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(device_t VAR_2, device_t VAR_3, enum cpu_sets VAR_4, size_t VAR_5,
    cpuset_t *VAR_6)
{

 switch (VAR_4) {
 case 128:

  if (VAR_5 != sizeof(cpuset_t))
   return (VAR_0);
  *VAR_6 = VAR_1;
  return (0);
 default:
  return (VAR_0);
 }
}
