
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(phandle_t VAR_1, phandle_t VAR_2)
{
 phandle_t VAR_3;

 if (VAR_1 == VAR_2)
  return (0);
 for (VAR_3 = FUNC_0(VAR_1); VAR_3 != 0 && VAR_3 != -1;
     VAR_3 = FUNC_1(VAR_3))
  if (FUNC_2(VAR_3, VAR_2) == 0)
   return (0);
 return (VAR_0);
}
