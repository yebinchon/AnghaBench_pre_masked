
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ioloc ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,char*,int) ;
 int FUNC_2 (int *,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(ioloc *VAR_0, int VAR_1, char *VAR_2, char *VAR_3, char *VAR_4[])
{
  int VAR_5;
  FUNC_1("mask left for %s:%s is %#x", VAR_3, VAR_2, VAR_1);

  for (VAR_5 = 0; VAR_4[VAR_5]; VAR_5++)
    if (FUNC_0(VAR_1, VAR_5))
      FUNC_2(VAR_0, "%s:%s needs field \"%s\"", VAR_3, VAR_2, VAR_4[VAR_5]);
}
