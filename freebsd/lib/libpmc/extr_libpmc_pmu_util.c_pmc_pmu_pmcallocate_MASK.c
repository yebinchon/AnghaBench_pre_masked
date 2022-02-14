
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_event_desc {int dummy; } ;
struct pmu_event {char const* alias; int * event; } ;
struct pmc_op_pmcallocate {int pm_caps; int pm_ev; int pm_md; } ;
typedef scalar_t__ pmu_mfr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char const*,struct pmc_op_pmcallocate*,struct pmu_event_desc*) ;
 int FUNC_3 (char const*,struct pmc_op_pmcallocate*,struct pmu_event_desc*) ;
 char* FUNC_4 (char const*) ;
 struct pmu_event* FUNC_5 (int *,char const*,int*) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (struct pmu_event_desc*,int *) ;

int
FUNC_8(const char *VAR_5, struct pmc_op_pmcallocate *VAR_6)
{
 const struct pmu_event *VAR_7;
 struct pmu_event_desc VAR_8;
 pmu_mfr_t VAR_9;
 int VAR_10 = -1;

 if ((VAR_9 = FUNC_6()) == VAR_4)
  return (VAR_0);

 FUNC_1(&VAR_6->pm_md, sizeof(VAR_6->pm_md));
 VAR_6->pm_caps |= (VAR_1 | VAR_2);
 VAR_5 = FUNC_4(VAR_5);
 if ((VAR_7 = FUNC_5(((void*)0), VAR_5, &VAR_10)) == ((void*)0))
  return (VAR_0);
 if (VAR_7->alias && (VAR_7 = FUNC_5(((void*)0), VAR_7->alias, &VAR_10)) == ((void*)0))
  return (VAR_0);
 FUNC_0(VAR_10 >= 0);
 VAR_6->pm_ev = VAR_10;

 if (VAR_7->event == ((void*)0))
  return (VAR_0);
 if (FUNC_7(&VAR_8, VAR_7->event))
  return (VAR_0);

 if (VAR_9 == VAR_3)
  return (FUNC_3(VAR_5, VAR_6, &VAR_8));
 else
  return (FUNC_2(VAR_5, VAR_6, &VAR_8));
}
