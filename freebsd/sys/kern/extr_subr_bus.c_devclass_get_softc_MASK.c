
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;
typedef int devclass_t ;


 int FUNC_0 (int ,int) ;
 void* FUNC_1 (int ) ;

void *
FUNC_2(devclass_t VAR_0, int VAR_1)
{
 device_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return (((void*)0));

 return (FUNC_1(VAR_2));
}
