
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, size_t VAR_2, int VAR_3)
{
 char VAR_4[128];

 if (VAR_3 == VAR_0)
  return;

 if (VAR_1[0] == '\0' || FUNC_1(VAR_1, "*") == 0)
  FUNC_0(VAR_1, VAR_2, "%d", VAR_3);
 else {
  FUNC_0(VAR_4, sizeof(VAR_4), ":%d", VAR_3);
  FUNC_2(VAR_1, VAR_4, VAR_2);
 }
}
