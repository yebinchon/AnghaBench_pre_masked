
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ub_thread_type ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int ) ;

void FUNC_4(ub_thread_type VAR_1)
{
 int VAR_2 = 0;
 if(FUNC_3((pid_t)VAR_1, &VAR_2, 0) == -1)
  FUNC_0("waitpid(%d): %s", (int)VAR_1, FUNC_2(VAR_0));
 if(VAR_2 != 0)
  FUNC_1("process %d abnormal exit with status %d",
   (int)VAR_1, VAR_2);
}
