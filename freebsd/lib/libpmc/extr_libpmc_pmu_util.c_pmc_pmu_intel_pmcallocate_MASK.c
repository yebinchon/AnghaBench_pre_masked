
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_event_desc {int ped_umask; int ped_event; scalar_t__ ped_inv; scalar_t__ ped_any; scalar_t__ ped_edge; int ped_offcore_rsp; int ped_cmask; } ;
struct pmc_md_iap_op_pmcallocate {int pm_iap_config; int pm_iap_rsp; } ;
struct TYPE_2__ {struct pmc_md_iap_op_pmcallocate pm_iap; } ;
struct pmc_op_pmcallocate {int pm_caps; int pm_class; TYPE_1__ pm_md; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char const* FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_12, struct pmc_op_pmcallocate *VAR_13,
 struct pmu_event_desc *VAR_14)
{
 struct pmc_md_iap_op_pmcallocate *VAR_15;
 int VAR_16;

 VAR_16 = 0;
 VAR_15 = &VAR_13->pm_md.pm_iap;
 if (FUNC_3(VAR_12, "UNC_") == VAR_12 ||
     FUNC_3(VAR_12, "uncore") != ((void*)0)) {
  VAR_13->pm_class = VAR_11;
  VAR_13->pm_caps |= VAR_6;
 } else if ((VAR_14->ped_umask == -1) ||
     (VAR_14->ped_event == 0x0 && VAR_14->ped_umask == 0x3)) {
  VAR_13->pm_class = VAR_9;
 } else {
  VAR_13->pm_class = VAR_10;
  VAR_13->pm_caps |= VAR_6;
 }
 VAR_15->pm_iap_config |= FUNC_1(VAR_14->ped_event);
 if (VAR_14->ped_umask > 0)
  VAR_15->pm_iap_config |= FUNC_2(VAR_14->ped_umask);
 VAR_15->pm_iap_config |= FUNC_0(VAR_14->ped_cmask);
 VAR_15->pm_iap_rsp = VAR_14->ped_offcore_rsp;

 if ((VAR_13->pm_caps & (VAR_8|VAR_7)) == 0 ||
  (VAR_13->pm_caps & (VAR_8|VAR_7)) ==
  (VAR_8|VAR_7))
  VAR_15->pm_iap_config |= (VAR_4 | VAR_3);
 else if (VAR_13->pm_caps & VAR_8)
  VAR_15->pm_iap_config |= VAR_4;
 else if (VAR_13->pm_caps & VAR_7)
  VAR_15->pm_iap_config |= VAR_3;
 if (VAR_14->ped_edge)
  VAR_15->pm_iap_config |= VAR_1;
 if (VAR_14->ped_any)
  VAR_15->pm_iap_config |= VAR_0;
 if (VAR_14->ped_inv)
  VAR_15->pm_iap_config |= VAR_1;
 if (VAR_13->pm_caps & VAR_5)
  VAR_15->pm_iap_config |= VAR_2;
 return (0);
}
