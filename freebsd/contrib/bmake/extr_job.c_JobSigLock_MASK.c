
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(sigset_t *VAR_3)
{
 if (FUNC_2(VAR_0, &VAR_1, VAR_3) != 0) {
  FUNC_0("JobSigLock: sigprocmask: %s", FUNC_3(VAR_2));
  FUNC_1(VAR_3);
 }
}
