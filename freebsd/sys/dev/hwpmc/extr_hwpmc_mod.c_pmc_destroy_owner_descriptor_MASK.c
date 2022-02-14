
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmc_owner {int po_mtx; TYPE_1__* po_owner; } ;
struct TYPE_2__ {int p_comm; int p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc_owner*,TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pmc_owner*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct pmc_owner *VAR_3)
{

 FUNC_0(VAR_1,VAR_2,1, "destroy-owner po=%p proc=%p (%d, %s)",
     VAR_3, VAR_3->po_owner, VAR_3->po_owner->p_pid, VAR_3->po_owner->p_comm);

 FUNC_2(&VAR_3->po_mtx);
 FUNC_1(VAR_3, VAR_0);
}
