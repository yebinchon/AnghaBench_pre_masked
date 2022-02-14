
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_comm; int p_flag; int p_pid; } ;
struct pmclog_proccreate {int dummy; } ;
struct pmc_owner {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pmc_owner*) ;
 int FUNC_1 (struct pmc_owner*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct pmc_owner*,int ,int) ;
 int VAR_1 ;

void
FUNC_5(struct pmc_owner *VAR_2, struct proc *VAR_3, int VAR_4)
{
 if (VAR_4) {
  FUNC_4(VAR_2, VAR_1, sizeof(struct pmclog_proccreate));
  FUNC_2(VAR_3->p_pid);
  FUNC_2(VAR_3->p_flag);
  FUNC_3(VAR_3->p_comm, VAR_0+1);
  FUNC_1(VAR_2);
 } else {
  FUNC_4(VAR_2, VAR_1, sizeof(struct pmclog_proccreate));
  FUNC_2(VAR_3->p_pid);
  FUNC_2(VAR_3->p_flag);
  FUNC_3(VAR_3->p_comm, VAR_0+1);
  FUNC_0(VAR_2);
 }
}
