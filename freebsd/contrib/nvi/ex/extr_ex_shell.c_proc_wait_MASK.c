
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int SCR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char const) ;
 scalar_t__ VAR_4 ;
 char* FUNC_8 (int *,char const*,int*) ;
 int FUNC_9 (int *,int ,char*,...) ;
 int FUNC_10 (scalar_t__) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (int ,int*,int ) ;

int
FUNC_13(SCR *VAR_5, long int VAR_6, const char *VAR_7, int VAR_8, int VAR_9)
{
 size_t VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13;


 for (;;) {
  VAR_4 = 0;
  if (FUNC_12((pid_t)VAR_6, &VAR_12, 0) != -1)
   break;
  if (VAR_4 != VAR_0) {
   FUNC_9(VAR_5, VAR_2, "waitpid");
   return (1);
  }
 }






 if (FUNC_5(VAR_12) && (!VAR_9 || FUNC_6(VAR_12) != VAR_3)) {
  for (; FUNC_7(*VAR_7); ++VAR_7);
  VAR_13 = FUNC_8(VAR_5, VAR_7, &VAR_11);
  VAR_10 = FUNC_11(VAR_13);
  FUNC_9(VAR_5, VAR_1, "%.*s%s: received signal: %s%s",
      (int)FUNC_1(VAR_10, 20), VAR_13, VAR_10 > 20 ? " ..." : "",
      FUNC_10(FUNC_6(VAR_12)),
      FUNC_2(VAR_12) ? "; core dumped" : "");
  if (VAR_11)
   FUNC_0(VAR_5, VAR_13, 0);
  return (1);
 }

 if (FUNC_4(VAR_12) && FUNC_3(VAR_12)) {
  if (!VAR_8) {
   for (; FUNC_7(*VAR_7); ++VAR_7);
   VAR_13 = FUNC_8(VAR_5, VAR_7, &VAR_11);
   VAR_10 = FUNC_11(VAR_13);
   FUNC_9(VAR_5, VAR_1, "%.*s%s: exited with status %d",
       (int)FUNC_1(VAR_10, 20), VAR_13, VAR_10 > 20 ? " ..." : "",
       FUNC_3(VAR_12));
   if (VAR_11)
    FUNC_0(VAR_5, VAR_13, 0);
  }
  return (1);
 }
 return (0);
}
