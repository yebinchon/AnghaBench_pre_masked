
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,char const*) ;

phandle_t
FUNC_4(phandle_t VAR_0, const char *VAR_1, int VAR_2)
{
 phandle_t VAR_3;





 for (VAR_3 = FUNC_0(VAR_0); VAR_3 != 0; VAR_3 = FUNC_1(VAR_3))
  if (FUNC_3(VAR_3, VAR_1)) {
   if (VAR_2)
    if (!FUNC_2(VAR_3, VAR_1))
     continue;
   return (VAR_3);
  }
 return (0);
}
