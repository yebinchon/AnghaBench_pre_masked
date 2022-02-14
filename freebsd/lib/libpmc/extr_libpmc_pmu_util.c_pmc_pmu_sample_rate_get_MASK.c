
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pmu_event_desc {int ped_period; } ;
struct pmu_event {char const* alias; int * event; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 struct pmu_event* FUNC_1 (int *,char const*,int *) ;
 scalar_t__ FUNC_2 (struct pmu_event_desc*,int *) ;

uint64_t
FUNC_3(const char *VAR_1)
{
 const struct pmu_event *VAR_2;
 struct pmu_event_desc VAR_3;

 VAR_1 = FUNC_0(VAR_1);
 if ((VAR_2 = FUNC_1(((void*)0), VAR_1, ((void*)0))) == ((void*)0))
  return (VAR_0);
 if (VAR_2->alias && (VAR_2 = FUNC_1(((void*)0), VAR_2->alias, ((void*)0))) == ((void*)0))
  return (VAR_0);
 if (VAR_2->event == ((void*)0))
  return (VAR_0);
 if (FUNC_2(&VAR_3, VAR_2->event))
  return (VAR_0);
 return (VAR_3.ped_period);
}
