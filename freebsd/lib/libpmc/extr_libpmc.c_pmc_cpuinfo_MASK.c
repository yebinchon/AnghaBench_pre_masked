
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_cpuinfo {int dummy; } ;


 int VAR_0 ;
 struct pmc_cpuinfo VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(const struct pmc_cpuinfo **VAR_4)
{
 if (VAR_3 == -1) {
  VAR_2 = VAR_0;
  return (-1);
 }

 *VAR_4 = &VAR_1;
 return (0);
}
