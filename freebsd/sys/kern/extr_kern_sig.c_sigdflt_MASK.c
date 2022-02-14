
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigacts {int ps_siginfo; int * ps_sigact; int ps_sigignore; int ps_sigcatch; int ps_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct sigacts *VAR_4, int VAR_5)
{

 FUNC_3(&VAR_4->ps_mtx, VAR_0);
 FUNC_1(VAR_4->ps_sigcatch, VAR_5);
 if ((FUNC_4(VAR_5) & VAR_2) != 0 && VAR_5 != VAR_1)
  FUNC_0(VAR_4->ps_sigignore, VAR_5);
 VAR_4->ps_sigact[FUNC_2(VAR_5)] = VAR_3;
 FUNC_1(VAR_4->ps_siginfo, VAR_5);
}
