
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; } ;
struct pmclog_threadexit {int dummy; } ;
struct pmc_owner {int dummy; } ;


 int FUNC_0 (struct pmc_owner*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pmc_owner*,int ,int) ;
 int VAR_0 ;

void
FUNC_3(struct pmc_owner *VAR_1, struct thread *VAR_2)
{

 FUNC_2(VAR_1, VAR_0, sizeof(struct pmclog_threadexit));
 FUNC_1(VAR_2->td_tid);
 FUNC_0(VAR_1);
}
