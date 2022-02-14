
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef int bus_space_tag_t ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;

bus_space_tag_t
FUNC_2(device_t VAR_0)
{
 device_t VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
  return ((bus_space_tag_t)0);
 return (FUNC_0(VAR_1, VAR_0));
}
