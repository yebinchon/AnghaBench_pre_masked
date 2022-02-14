
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_softc {int tpc_timeout; int ctl_lock; int tpc_tokens; int tpc_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int ,struct ctl_softc*) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int VAR_2 ;

void
FUNC_4(struct ctl_softc *VAR_3)
{

 FUNC_3(&VAR_3->tpc_lock, "CTL TPC mutex", ((void*)0), VAR_0);
 FUNC_0(&VAR_3->tpc_tokens);
 FUNC_1(&VAR_3->tpc_timeout, &VAR_3->ctl_lock, 0);
 FUNC_2(&VAR_3->tpc_timeout, VAR_1, VAR_2, VAR_3);
}
