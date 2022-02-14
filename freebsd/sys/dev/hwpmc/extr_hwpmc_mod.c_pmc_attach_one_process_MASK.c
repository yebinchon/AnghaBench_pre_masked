
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc {int p_flag; int p_pid; int p_textvp; int p_comm; } ;
struct pmc_process {TYPE_1__* pp_pmcs; } ;
struct pmc {int pm_flags; TYPE_2__* pm_owner; } ;
struct TYPE_4__ {int po_flags; } ;
struct TYPE_3__ {struct pmc* pp_pmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,char*,struct pmc*,int,struct proc*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct pmc*) ;
 int FUNC_3 (struct pmc*) ;
 int VAR_10 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (char*,int ) ;
 char* VAR_14 ;
 struct pmc_process* FUNC_7 (struct proc*,int ) ;
 int FUNC_8 (int ,char**,char**) ;
 int FUNC_9 (struct pmc*,struct pmc_process*) ;
 int FUNC_10 (TYPE_2__*,struct proc*) ;
 int VAR_15 ;
 int FUNC_11 (struct pmc*,int ,char*) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct proc *VAR_16, struct pmc *VAR_17)
{
 int VAR_18, VAR_19;
 char *VAR_20, *VAR_21;
 struct pmc_process *VAR_22;

 FUNC_12(&VAR_15, VAR_13);

 FUNC_0(VAR_10,VAR_0,2, "attach-one pm=%p ri=%d proc=%p (%d, %s)", VAR_17,
     FUNC_3(VAR_17), VAR_16, VAR_16->p_pid, VAR_16->p_comm);
 VAR_18 = FUNC_3(VAR_17);


 FUNC_4(VAR_16);
 VAR_16->p_flag |= VAR_11;
 FUNC_5(VAR_16);

 if ((VAR_22 = FUNC_7(VAR_16, VAR_5)) == ((void*)0)) {
  VAR_19 = VAR_3;
  goto fail;
 }

 if (VAR_22->pp_pmcs[VAR_18].pp_pmc == VAR_17) {
  VAR_19 = VAR_2;
  goto fail;
 }

 if (VAR_22->pp_pmcs[VAR_18].pp_pmc != ((void*)0)) {
  VAR_19 = VAR_1;
  goto fail;
 }

 FUNC_9(VAR_17, VAR_22);

 if (FUNC_1(FUNC_2(VAR_17)) &&
     (VAR_17->pm_flags & VAR_6) == 0)
  VAR_17->pm_flags |= VAR_8;

 VAR_17->pm_flags |= VAR_7;


 if (VAR_17->pm_owner->po_flags & VAR_9) {
  if (VAR_16->p_flag & VAR_12) {
   VAR_20 = VAR_14;
   VAR_21 = ((void*)0);
  } else {
   FUNC_8(VAR_16->p_textvp, &VAR_20, &VAR_21);
   FUNC_11(VAR_17, VAR_16->p_pid, VAR_20);
  }
  FUNC_6(VAR_21, VAR_4);
  if (FUNC_1(FUNC_2(VAR_17)))
   FUNC_10(VAR_17->pm_owner, VAR_16);
 }

 return (0);
 fail:
 FUNC_4(VAR_16);
 VAR_16->p_flag &= ~VAR_11;
 FUNC_5(VAR_16);
 return (VAR_19);
}
