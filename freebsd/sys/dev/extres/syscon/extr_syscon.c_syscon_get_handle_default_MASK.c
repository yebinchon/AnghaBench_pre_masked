
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscon {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct syscon**) ;
 int * FUNC_1 (int *) ;

int
FUNC_2(device_t VAR_1, struct syscon **VAR_2)
{
 device_t VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 return (FUNC_0(VAR_3, VAR_2));
}
