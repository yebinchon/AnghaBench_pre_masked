
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 int FUNC_4 (int,int*,int ) ;

void
FUNC_5(void)
{
 pid_t VAR_1;
 int VAR_2;

 while ((VAR_1 = FUNC_4(-1, &VAR_2, VAR_0)) > 0) {
  if (!VAR_2)
   continue;
  FUNC_3("warn process [pid=%d] %s %d.", VAR_1,
      ((FUNC_1(VAR_2)) ? "exited with non-zero status" :
      "exited as a result of signal"),
      ((FUNC_1(VAR_2)) ? FUNC_0(VAR_2) :
      FUNC_2(VAR_2)));
 }
}
