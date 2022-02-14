
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_pmcinfo {int dummy; } ;
struct pmc_op_getpmcinfo {int pm_cpu; } ;
struct pmc_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct pmc_op_getpmcinfo*) ;
 struct pmc_op_getpmcinfo* FUNC_1 (int,int) ;
 int FUNC_2 (struct pmc_op_getpmcinfo*) ;
 int FUNC_3 (int) ;

int
FUNC_4(int VAR_1, struct pmc_pmcinfo **VAR_2)
{
 int VAR_3, VAR_4;
 struct pmc_op_getpmcinfo *VAR_5;

 if ((VAR_4 = FUNC_3(VAR_1)) < 0)
  return (-1);

 VAR_3 = sizeof(struct pmc_op_getpmcinfo) +
     VAR_4 * sizeof(struct pmc_info);

 if ((VAR_5 = FUNC_1(1, VAR_3)) == ((void*)0))
  return (-1);

 VAR_5->pm_cpu = VAR_1;

 if (FUNC_0(VAR_0, VAR_5) < 0) {
  FUNC_2(VAR_5);
  return (-1);
 }


 *VAR_2 = (struct pmc_pmcinfo *) VAR_5;
 return (0);
}
