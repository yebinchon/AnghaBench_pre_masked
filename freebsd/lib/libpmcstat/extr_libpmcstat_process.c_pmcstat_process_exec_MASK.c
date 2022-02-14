
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintfptr_t ;
struct pmcstat_stats {int ps_exec_indeterminable; int ps_exec_aout; int ps_exec_elf; int ps_exec_errors; } ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_image {int pi_type; } ;
struct pmcstat_args {int dummy; } ;
struct pmc_plugins {int dummy; } ;
typedef int pmcstat_interned_string ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct pmcstat_image*,struct pmcstat_args*) ;
 struct pmcstat_image* FUNC_3 (int ,int ,struct pmcstat_args*,struct pmc_plugins*) ;
 int FUNC_4 (struct pmcstat_process*,struct pmcstat_image*,int ) ;
 int FUNC_5 (struct pmcstat_process*,struct pmcstat_image*,int ,struct pmcstat_args*,struct pmc_plugins*,struct pmcstat_stats*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct pmcstat_process *VAR_2,
    pmcstat_interned_string VAR_3, uintfptr_t VAR_4,
    struct pmcstat_args *VAR_5, struct pmc_plugins *VAR_6,
    struct pmcstat_stats *VAR_7)
{
 struct pmcstat_image *VAR_8;

 if ((VAR_8 = FUNC_3(VAR_3, 0,
     VAR_5, VAR_6)) == ((void*)0)) {
  VAR_7->ps_exec_errors++;
  return;
 }

 if (VAR_8->pi_type == VAR_1)
  FUNC_2(VAR_8, VAR_5);

 FUNC_0(VAR_8->pi_type != VAR_1);

 switch (VAR_8->pi_type) {
 case 130:
 case 129:
  VAR_7->ps_exec_elf++;
  FUNC_5(VAR_2, VAR_8, VAR_4,
      VAR_5, VAR_6, VAR_7);
  break;

 case 131:
  VAR_7->ps_exec_aout++;
  FUNC_4(VAR_2, VAR_8, VAR_4);
  break;

 case 128:
  VAR_7->ps_exec_indeterminable++;
  break;

 default:
  FUNC_1(VAR_0,
      "ERROR: Unsupported executable type for \"%s\"",
      FUNC_6(VAR_3));
 }
}
