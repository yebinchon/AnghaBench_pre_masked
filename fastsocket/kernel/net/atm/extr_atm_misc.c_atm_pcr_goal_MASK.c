
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atm_trafprm {int pcr; int min_pcr; int max_pcr; } ;


 int VAR_0 ;

int FUNC_0(const struct atm_trafprm *VAR_1)
{
 if (VAR_1->pcr && VAR_1->pcr != VAR_0)
  return -VAR_1->pcr;
 if (VAR_1->min_pcr && !VAR_1->pcr)
  return VAR_1->min_pcr;
 if (VAR_1->max_pcr != VAR_0)
  return -VAR_1->max_pcr;
 return 0;
}
