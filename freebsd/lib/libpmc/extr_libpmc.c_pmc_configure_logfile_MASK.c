
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_op_configurelog {int pm_logfd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct pmc_op_configurelog*) ;

int
FUNC_1(int VAR_1)
{
 struct pmc_op_configurelog VAR_2;

 VAR_2.pm_logfd = VAR_1;
 if (FUNC_0(VAR_0, &VAR_2) < 0)
  return (-1);
 return (0);
}
