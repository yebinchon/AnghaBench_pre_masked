
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static long
FUNC_7(const char *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 int VAR_3 = FUNC_4(VAR_0);
 char VAR_4[16]="", VAR_5[16]="";

 if (VAR_3>15)
  return -1;
 for (VAR_1 = 0; VAR_1<VAR_3 && (FUNC_1(VAR_0[VAR_1]) || VAR_0[VAR_1]=='.') ; VAR_1++)
  if (VAR_0[VAR_1]=='.') {
   if (VAR_2)
    return -1;
   else
    VAR_2++;
  }

 if (!VAR_1)
  return -1;
 FUNC_5(VAR_4, VAR_0, VAR_1);
 if (VAR_1<VAR_3)
  FUNC_3(VAR_5, VAR_0+VAR_1);
 else
  FUNC_3(VAR_5, "ms");

 if (!FUNC_2(VAR_5, "us"))
  return FUNC_0(VAR_4);
 if (!FUNC_2(VAR_5, "ms"))
  return (FUNC_6(VAR_4, ((void*)0)) * 1000);
 if (!FUNC_2(VAR_5, "s"))
  return (FUNC_6(VAR_4, ((void*)0))*1000000);

 return -1;
}
