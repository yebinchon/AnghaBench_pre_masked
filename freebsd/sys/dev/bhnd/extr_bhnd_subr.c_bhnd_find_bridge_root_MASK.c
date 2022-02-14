
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * device_t ;
typedef scalar_t__ devclass_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;

device_t
FUNC_5(device_t VAR_1, devclass_t VAR_2)
{
 devclass_t VAR_3;
 device_t VAR_4;

 FUNC_0(FUNC_2(FUNC_4(VAR_1)) == VAR_0,
    ("%s not a bhnd device", FUNC_3(VAR_1)));

 VAR_3 = FUNC_1("bhndb");


 VAR_4 = VAR_1;
 while ((VAR_4 = FUNC_4(VAR_4)) != ((void*)0)) {
  if (FUNC_2(VAR_4) == VAR_3)
   break;
 }


 if (VAR_4 == ((void*)0))
  return (((void*)0));


 while ((VAR_4 = FUNC_4(VAR_4)) != ((void*)0)) {
  device_t VAR_5;

  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 != ((void*)0) && FUNC_2(VAR_5) == VAR_2)
   return (VAR_4);
 }


 return (((void*)0));
}
