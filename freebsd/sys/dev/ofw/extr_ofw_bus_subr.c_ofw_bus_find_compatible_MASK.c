
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,char const*) ;

phandle_t
FUNC_3(phandle_t VAR_0, const char *VAR_1)
{
 phandle_t VAR_2, VAR_3;





 for (VAR_2 = FUNC_0(VAR_0); VAR_2 != 0; VAR_2 = FUNC_1(VAR_2)) {
  if (FUNC_2(VAR_2, VAR_1) != 0)
   return (VAR_2);

  VAR_3 = FUNC_3(VAR_2, VAR_1);
  if (VAR_3 != 0)
   return (VAR_3);
 }
 return (0);
}
