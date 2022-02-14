
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,char*) ;

void
FUNC_4(char *VAR_4, char *VAR_5)
{
 if (!VAR_0 && FUNC_1(VAR_4, VAR_5) < 0) {
  FUNC_0(VAR_2, "warning: cannot rename %s to %s: %s\n",
      VAR_4, VAR_5, FUNC_2(VAR_1));
  return;
 }
 FUNC_3(VAR_3, "rename %s to %s\n", VAR_4, VAR_5);
}
