
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static phandle_t
FUNC_3(phandle_t VAR_0)
{
 phandle_t VAR_1;
 phandle_t VAR_2;

 for (VAR_1 = FUNC_0(VAR_0); VAR_1 != 0; VAR_1 = FUNC_1(VAR_1)) {
  if (FUNC_2(VAR_1, "ti,am335x-lcd"))
   return (VAR_1);
  if ((VAR_2 = FUNC_3(VAR_1)))
   return (VAR_2);
 }

 return (0);
}
