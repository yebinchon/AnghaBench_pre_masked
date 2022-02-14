
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 sigset_t VAR_4;

 FUNC_2(&VAR_4);
 FUNC_1(&VAR_4, VAR_0);

 if(FUNC_3(VAR_1, &VAR_4, &VAR_2))
  FUNC_0("sigprocmask(SIG_BLOCK): %s", FUNC_4(VAR_3));
}
