
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,unsigned int) ;
 int FUNC_5 (char*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_6(unsigned int VAR_0, int VAR_1)
{

 if (FUNC_1(VAR_1) && FUNC_0(VAR_1) == 0) {
  FUNC_4(1, "Worker process exited gracefully (pid=%u).",
      VAR_0);
 } else if (FUNC_2(VAR_1)) {
  FUNC_5("Worker process killed (pid=%u, signal=%d).",
      VAR_0, FUNC_3(VAR_1));
 } else {
  FUNC_5("Worker process exited ungracefully (pid=%u, exitcode=%d).",
      VAR_0, FUNC_1(VAR_1) ? FUNC_0(VAR_1) : -1);
 }
}
