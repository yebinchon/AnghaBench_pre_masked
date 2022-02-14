
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,char const*,unsigned int) ;
 int FUNC_5 (char*,char const*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_0, unsigned int VAR_1, int VAR_2)
{

 if (FUNC_1(VAR_2) && FUNC_0(VAR_2) == 0) {
  FUNC_4(1, "%s process exited gracefully (pid=%u).",
      VAR_0, VAR_1);
 } else if (FUNC_2(VAR_2)) {
  FUNC_5("%s process killed (pid=%u, signal=%d).",
      VAR_0, VAR_1, FUNC_3(VAR_2));
 } else {
  FUNC_5("%s process exited ungracefully (pid=%u, exitcode=%d).",
      VAR_0, VAR_1, FUNC_1(VAR_2) ? FUNC_0(VAR_2) : -1);
 }
}
