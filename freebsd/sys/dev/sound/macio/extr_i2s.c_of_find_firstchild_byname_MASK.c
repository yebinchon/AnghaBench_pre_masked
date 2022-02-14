
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int name ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static phandle_t
FUNC_5(phandle_t VAR_0, const char *VAR_1)
{
 char VAR_2[32];
 phandle_t VAR_3;

 for (VAR_3 = FUNC_0(VAR_0); VAR_3 != -1; VAR_3 = FUNC_2(VAR_3)) {
  FUNC_3(VAR_2, sizeof(VAR_2));
  FUNC_1(VAR_3, "name", VAR_2, sizeof(VAR_2));

  if (FUNC_4(VAR_2, VAR_1) == 0)
   return (VAR_3);
 }

 return (-1);
}
