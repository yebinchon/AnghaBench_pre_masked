
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int dummy; } ;
typedef int sigset_t ;
typedef int siginfo_t ;


 int FUNC_0 (int ,int *) ;
 struct pthread* FUNC_1 () ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (struct pthread*,int) ;
 int FUNC_4 (int const*,int *) ;

int
FUNC_5(const sigset_t *VAR_0, siginfo_t *VAR_1)
{
 struct pthread *VAR_2 = FUNC_1();
 sigset_t VAR_3;
 int VAR_4;

 FUNC_2(VAR_2);
 VAR_4 = FUNC_0(FUNC_4(VAR_0, &VAR_3), VAR_1);
 FUNC_3(VAR_2, VAR_4 == -1);
 return (VAR_4);
}
