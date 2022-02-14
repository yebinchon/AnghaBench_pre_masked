
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pmc_process {TYPE_1__* pp_pmcs; } ;
struct pmc_owner {int dummy; } ;
struct pmc {int pm_flags; struct pmc_owner* pm_owner; } ;
typedef int pmc_id_t ;
struct TYPE_6__ {int td_proc; } ;
struct TYPE_5__ {size_t pmd_npmc; } ;
struct TYPE_4__ {struct pmc* pp_pmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,char*,int ) ;
 int FUNC_1 (int ,int ,int,char*,int ,struct pmc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_2 (int ) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 struct pmc_owner* FUNC_3 (int ) ;
 struct pmc* FUNC_4 (struct pmc_owner*,int ) ;
 struct pmc_process* FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(pmc_id_t VAR_9, struct pmc **VAR_10)
{

 struct pmc *VAR_11, *VAR_12;
 struct pmc_owner *VAR_13;
 struct pmc_process *VAR_14;

 FUNC_0(VAR_3,VAR_2,1, "find-pmc id=%d", VAR_9);
 if (FUNC_2(VAR_9) >= VAR_8->pmd_npmc)
  return (VAR_0);

 if ((VAR_13 = FUNC_3(VAR_7->td_proc)) == ((void*)0)) {





  if ((VAR_14 = FUNC_5(VAR_7->td_proc,
      VAR_4)) == ((void*)0)) {
   return VAR_1;
  } else {
   VAR_12 = VAR_14->pp_pmcs[FUNC_2(VAR_9)].pp_pmc;
   if (VAR_12 == ((void*)0))
    return VAR_1;
   if ((VAR_12->pm_flags & (VAR_5|
       VAR_6)) != (VAR_5|
       VAR_6))
    return VAR_1;
   VAR_13 = VAR_12->pm_owner;
  }
 }

 if ((VAR_11 = FUNC_4(VAR_13, VAR_9)) == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_3,VAR_2,2, "find-pmc id=%d -> pmc=%p", VAR_9, VAR_11);

 *VAR_10 = VAR_11;
 return 0;
}
