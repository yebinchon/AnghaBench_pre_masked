
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_0, int VAR_1)
{
 char *VAR_2 = VAR_0;
 int VAR_3;

 if (FUNC_1(VAR_2, VAR_1) < 0)
  FUNC_2(VAR_2, VAR_1, "?hostname?");

 VAR_2[VAR_1 - 1] = 0;
 if ((VAR_3 = FUNC_3(VAR_2)) >= VAR_1)
  return;
 VAR_2[VAR_3] = '.';
 VAR_2 += VAR_3 + 1;
 VAR_1 -= VAR_3 + 1;

 if (FUNC_0(VAR_2, VAR_1) < 0)
  FUNC_2(VAR_2, VAR_1, "?domainname?");
 if (FUNC_3(VAR_2) == 0)
  VAR_2[-1] = 0;
}
