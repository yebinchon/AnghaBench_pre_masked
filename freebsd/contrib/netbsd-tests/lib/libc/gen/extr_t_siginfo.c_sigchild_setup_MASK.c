
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; int rlim_cur; } ;
typedef int sigset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct rlimit*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct rlimit*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
 sigset_t VAR_4;
 struct rlimit VAR_5;

 (void)FUNC_0(VAR_0, &VAR_5);
 VAR_5.rlim_cur = VAR_5.rlim_max;
 (void)FUNC_2(VAR_0, &VAR_5);

 FUNC_1(VAR_3);
 FUNC_4(&VAR_4);
 FUNC_3(&VAR_4, VAR_1);
 FUNC_5(VAR_2, &VAR_4, ((void*)0));
}
