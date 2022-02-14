
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread {int in_sigsuspend; scalar_t__ unblock_sigcancel; } ;
typedef int sigset_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ) ;
 struct pthread* FUNC_4 () ;
 int FUNC_5 (struct pthread*) ;
 int FUNC_6 (struct pthread*,int) ;
 int FUNC_7 (int const*,int *) ;

int
FUNC_8(const sigset_t * VAR_2)
{
 struct pthread *VAR_3;
 sigset_t VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = FUNC_4();

 VAR_6 = VAR_3->in_sigsuspend;
 VAR_3->in_sigsuspend = 1;
 FUNC_5(VAR_3);
 VAR_5 = FUNC_3(FUNC_7(VAR_2, &VAR_4));
 FUNC_6(VAR_3, 1);
 VAR_3->in_sigsuspend = VAR_6;
 if (VAR_3->unblock_sigcancel) {
  VAR_3->unblock_sigcancel = 0;
  FUNC_1(VAR_4);
  FUNC_0(VAR_4, VAR_0);
  FUNC_2(VAR_1, &VAR_4, ((void*)0));
 }

 return (VAR_5);
}
