
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,char*,...) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,int ,int*) ;
 int VAR_8 ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(void)
{
 int VAR_9[2];

 if (FUNC_7(VAR_0, VAR_1, 0, VAR_9) == -1) {
  FUNC_3("socketpair: %s", FUNC_8(VAR_5));
  return (-1);
 }
 if ((VAR_7 = FUNC_5()) == -1) {
  FUNC_3("fork: %s", FUNC_8(VAR_5));
  return (-1);
 } else if (VAR_7 == 0) {
  if ((FUNC_2(VAR_9[1], VAR_2) == -1) ||
      (FUNC_2(VAR_9[1], VAR_3) == -1)) {
   FUNC_6(VAR_8, "dup2: %s\n", FUNC_8(VAR_5));
   FUNC_0(1);
  }
  FUNC_1(VAR_9[0]);
  FUNC_1(VAR_9[1]);
  FUNC_4(VAR_4, VAR_4,
      (char *)((void*)0));
  FUNC_6(VAR_8, "exec: %s: %s\n", VAR_4,
      FUNC_8(VAR_5));
  FUNC_0(1);
 }
 FUNC_1(VAR_9[1]);
 VAR_6 = VAR_9[0];
 return (0);
}
