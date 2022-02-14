
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pm_amd_config; } ;
struct TYPE_4__ {TYPE_1__ pm_amd; } ;
struct pmc_op_pmcallocate {int pm_caps; TYPE_2__ pm_md; } ;
typedef enum pmc_event { ____Placeholder_pmc_event } pmc_event ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(enum pmc_event VAR_2, char *VAR_3,
    struct pmc_op_pmcallocate *VAR_4)
{
 if (VAR_2 != VAR_1)
  return (-1);


 if (VAR_3 && *VAR_3 != '\0')
  return (-1);

 VAR_4->pm_md.pm_amd.pm_amd_config = 0;
 VAR_4->pm_caps |= VAR_0;

 return (0);
}
