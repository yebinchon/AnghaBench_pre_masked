
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int* VAR_3 ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 if (FUNC_3(VAR_3) < 0) {
  FUNC_1("pipe(notify_pipe) failed %s", FUNC_5(VAR_2));
 } else if ((FUNC_2(VAR_3[0], VAR_1, VAR_0) == -1) ||
     (FUNC_2(VAR_3[1], VAR_1, VAR_0) == -1)) {
  FUNC_1("fcntl(notify_pipe, F_SETFD) failed %s", FUNC_5(VAR_2));
  FUNC_0(VAR_3[0]);
  FUNC_0(VAR_3[1]);
 } else {
  FUNC_4(VAR_3[0]);
  FUNC_4(VAR_3[1]);
  return;
 }
 VAR_3[0] = -1;
 VAR_3[1] = -1;
}
