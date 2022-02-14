
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char const*) ;

int
FUNC_4(phandle_t VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0];
 int VAR_4, VAR_5;

 if ((VAR_4 = FUNC_1(VAR_1, "compatible")) <= 0)
  return (0);

 FUNC_2(VAR_3, VAR_0);

 if (FUNC_0(VAR_1, "compatible", VAR_3, VAR_0) < 0)
  return (0);

 VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_2);

 return (VAR_5);
}
