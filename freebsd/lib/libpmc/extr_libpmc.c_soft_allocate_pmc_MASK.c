
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_pmcallocate {int pm_caps; } ;
typedef enum pmc_event { ____Placeholder_pmc_event } pmc_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(enum pmc_event VAR_4, char *VAR_5,
    struct pmc_op_pmcallocate *VAR_6)
{
 (void)VAR_5;
 (void)VAR_6;

 if ((int)VAR_4 < VAR_2 || (int)VAR_4 > VAR_3)
  return (-1);

 VAR_6->pm_caps |= (VAR_0 | VAR_1);
 return (0);
}
