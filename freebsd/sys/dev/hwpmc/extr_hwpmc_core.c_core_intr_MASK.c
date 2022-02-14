
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct trapframe {int dummy; } ;
struct TYPE_8__ {int pm_iap_evsel; } ;
struct TYPE_9__ {TYPE_3__ pm_iap; } ;
struct TYPE_7__ {int pm_reloadcount; } ;
struct pmc {scalar_t__ pm_state; TYPE_4__ pm_md; TYPE_2__ pm_sc; } ;
struct core_cpu {TYPE_1__* pc_corepmcs; } ;
typedef int pmc_value_t ;
struct TYPE_10__ {int pm_intr_ignored; int pm_intr_processed; } ;
struct TYPE_6__ {struct pmc* phw_pmc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,char*,size_t,void*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct pmc*) ;
 int FUNC_3 (struct trapframe*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct core_cpu** VAR_10 ;
 int FUNC_4 (int ,int) ;
 size_t VAR_11 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,struct pmc*,struct trapframe*) ;
 TYPE_5__ VAR_12 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_11(struct trapframe *VAR_13)
{
 pmc_value_t VAR_14;
 struct pmc *VAR_15;
 struct core_cpu *VAR_16;
 int VAR_17, VAR_18, VAR_19;
 uint64_t VAR_20;

 FUNC_0(VAR_5,VAR_4, 1, "cpu=%d tf=0x%p um=%d", VAR_11, (void *) VAR_13,
     FUNC_3(VAR_13));

 VAR_18 = 0;
 VAR_16 = VAR_10[VAR_11];

 for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++) {

  if ((VAR_15 = VAR_16->pc_corepmcs[VAR_19].phw_pmc) == ((void*)0) ||
      !FUNC_1(FUNC_2(VAR_15)))
   continue;

  if (!FUNC_5(VAR_19))
   continue;

  VAR_18 = 1;

  if (VAR_15->pm_state != VAR_7)
   continue;

  VAR_17 = FUNC_8(VAR_6, VAR_15, VAR_13);

  VAR_14 = VAR_15->pm_sc.pm_reloadcount;
  VAR_14 = FUNC_6(VAR_14);





  VAR_20 = FUNC_9(VAR_1 + VAR_19) & ~VAR_2;
  FUNC_10(VAR_1 + VAR_19, VAR_20);
  FUNC_10(VAR_9 + VAR_3 + VAR_19, VAR_14);

  if (VAR_17)
   continue;

  FUNC_10(VAR_1 + VAR_19, VAR_20 | (VAR_15->pm_md.pm_iap.pm_iap_evsel |
           VAR_0));
 }

 if (VAR_18)
  FUNC_7();

 if (VAR_18)
  FUNC_4(VAR_12.pm_intr_processed, 1);
 else
  FUNC_4(VAR_12.pm_intr_ignored, 1);

 return (VAR_18);
}
