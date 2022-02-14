
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookproc {int hp_comm; } ;
typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct hookproc* FUNC_4 (int ) ;
 int FUNC_5 (struct hookproc*) ;
 int FUNC_6 (struct hookproc*) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,char*,int ,...) ;
 int FUNC_10 (char*,int ,int,int ) ;

void
FUNC_11(pid_t VAR_1, int VAR_2)
{
 struct hookproc *VAR_3;

 FUNC_7(&VAR_0);
 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 == ((void*)0)) {
  FUNC_8(&VAR_0);
  FUNC_9(1, "Unknown process pid=%u", VAR_1);
  return;
 }
 FUNC_6(VAR_3);
 FUNC_8(&VAR_0);
 if (FUNC_1(VAR_2) && FUNC_0(VAR_2) == 0) {
  FUNC_9(1, "Hook exited gracefully (pid=%u, cmd=[%s]).",
      VAR_1, VAR_3->hp_comm);
 } else if (FUNC_2(VAR_2)) {
  FUNC_10("Hook was killed (pid=%u, signal=%d, cmd=[%s]).",
      VAR_1, FUNC_3(VAR_2), VAR_3->hp_comm);
 } else {
  FUNC_10("Hook exited ungracefully (pid=%u, exitcode=%d, cmd=[%s]).",
      VAR_1, FUNC_1(VAR_2) ? FUNC_0(VAR_2) : -1,
      VAR_3->hp_comm);
 }
 FUNC_5(VAR_3);
}
