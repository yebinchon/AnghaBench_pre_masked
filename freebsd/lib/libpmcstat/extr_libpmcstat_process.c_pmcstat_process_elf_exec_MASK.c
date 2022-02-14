
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef scalar_t__ uintfptr_t ;
struct pmcstat_stats {int ps_exec_errors; } ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_image {scalar_t__ pi_type; scalar_t__ pi_entry; int pi_dynlinkerpath; scalar_t__ pi_isdynamic; scalar_t__ pi_vaddr; } ;
struct pmcstat_args {int dummy; } ;
struct pmc_plugins {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct pmcstat_image* FUNC_1 (int ,int ,struct pmcstat_args*,struct pmc_plugins*) ;
 int FUNC_2 (struct pmcstat_image*,struct pmcstat_args*) ;
 int FUNC_3 (struct pmcstat_process*,struct pmcstat_image*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(struct pmcstat_process *VAR_3,
    struct pmcstat_image *VAR_4, uintfptr_t VAR_5,
    struct pmcstat_args *VAR_6, struct pmc_plugins *VAR_7,
    struct pmcstat_stats *VAR_8)
{
 uintmax_t VAR_9;
 struct pmcstat_image *VAR_10;

 FUNC_0(VAR_4->pi_type == VAR_0 ||
     VAR_4->pi_type == VAR_1);


 FUNC_3(VAR_3, VAR_4, VAR_4->pi_vaddr);
 if (VAR_4->pi_isdynamic) {
  VAR_10 = FUNC_1(VAR_4->pi_dynlinkerpath,
      0, VAR_6, VAR_7);
  if (VAR_10 == ((void*)0)) {
   FUNC_5("WARNING: Cannot find image for \"%s\".",
       FUNC_4(VAR_4->pi_dynlinkerpath));
   VAR_8->ps_exec_errors++;
   return;
  }

  if (VAR_10->pi_type == VAR_2)
   FUNC_2(VAR_10, VAR_6);

  if (VAR_10->pi_type != VAR_0 &&
      VAR_10->pi_type != VAR_1) {
   FUNC_5("WARNING: rtld not an ELF object \"%s\".",
       FUNC_4(VAR_4->pi_dynlinkerpath));
   return;
  }

  VAR_9 = VAR_5 - VAR_10->pi_entry;
  FUNC_3(VAR_3, VAR_10, VAR_9);
 }
}
