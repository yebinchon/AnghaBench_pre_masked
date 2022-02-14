
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef scalar_t__ devclass_t ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static device_t
FUNC_3(device_t VAR_0)
{
 device_t VAR_1, VAR_2;
 devclass_t VAR_3;

 VAR_3 = FUNC_0("bhnd");
 VAR_1 = VAR_0;
 while ((VAR_2 = FUNC_2(VAR_1)) != ((void*)0)) {
  if (FUNC_1(VAR_2) == VAR_3)
   return (VAR_1);

  VAR_1 = VAR_2;
 }


 return (((void*)0));
}
