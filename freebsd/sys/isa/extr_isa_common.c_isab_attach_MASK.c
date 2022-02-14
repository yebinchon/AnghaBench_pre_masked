
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int ) ;

int
FUNC_2(device_t VAR_1)
{
 device_t VAR_2;

 VAR_2 = FUNC_1(VAR_1, "isa", 0);
 if (VAR_2 != ((void*)0))
  return (FUNC_0(VAR_1));
 return (VAR_0);
}
