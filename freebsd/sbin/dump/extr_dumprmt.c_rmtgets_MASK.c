
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 char FUNC_2 () ;

void
FUNC_3(char *VAR_0, int VAR_1)
{
 char *VAR_2 = VAR_0;

 while (VAR_1 > 1) {
  *VAR_2 = FUNC_2();
  if (*VAR_2 == '\n') {
   VAR_2[1] = '\0';
   return;
  }
  VAR_2++;
  VAR_1--;
 }
 *VAR_2 = '\0';
 FUNC_0("Protocol to remote tape server botched.\n");
 FUNC_0("(rmtgets got \"%s\").\n", VAR_0);
 FUNC_1(0);
}
