
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct proc {int p_comm; int p_pid; } ;
struct pmc_ownerhash {int dummy; } ;
struct pmc_owner {int po_mtx; int po_logbuffers; struct proc* po_owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct pmc_ownerhash*,struct pmc_owner*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,char*,struct proc*,int ,int ,struct pmc_owner*) ;
 size_t FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (int *) ;
 struct pmc_owner* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,char*,int ) ;
 struct pmc_ownerhash* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct pmc_owner *
FUNC_6(struct proc *VAR_9)
{
 uint32_t VAR_10;
 struct pmc_owner *VAR_11;
 struct pmc_ownerhash *VAR_12;

 VAR_10 = FUNC_2(VAR_9, VAR_7);
 VAR_12 = &VAR_6[VAR_10];


 VAR_11 = FUNC_4(sizeof(struct pmc_owner), VAR_2, VAR_3|VAR_4);
 VAR_11->po_owner = VAR_9;
 FUNC_0(VAR_12, VAR_11, VAR_8);

 FUNC_3(&VAR_11->po_logbuffers);
 FUNC_5(&VAR_11->po_mtx, "pmc-owner-mtx", "pmc-per-proc", VAR_1);

 FUNC_1(VAR_5,VAR_0,1, "allocate-owner proc=%p (%d, %s) pmc-owner=%p",
     VAR_9, VAR_9->p_pid, VAR_9->p_comm, VAR_11);

 return VAR_11;
}
