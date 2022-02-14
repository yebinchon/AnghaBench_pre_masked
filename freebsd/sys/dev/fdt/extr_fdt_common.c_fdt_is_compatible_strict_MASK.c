
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;

int
FUNC_3(phandle_t VAR_1, const char *VAR_2)
{
 char VAR_3[VAR_0];

 if (FUNC_1(VAR_1, "compatible") <= 0)
  return (0);

 if (FUNC_0(VAR_1, "compatible", VAR_3, VAR_0) < 0)
  return (0);

 if (FUNC_2(VAR_3, VAR_2, VAR_0) == 0)

  return (1);

 return (0);
}
