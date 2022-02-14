
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_events_map {struct pmu_event* table; } ;
struct pmu_event {int * name; scalar_t__ event; scalar_t__ desc; } ;


 struct pmu_events_map* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;

__attribute__((used)) static const struct pmu_event *
FUNC_2(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
 const struct pmu_events_map *VAR_3;
 const struct pmu_event *VAR_4;
 int VAR_5;

 if ((VAR_3 = FUNC_0(VAR_0)) == ((void*)0))
  return (((void*)0));
 for (VAR_5 = 0, VAR_4 = VAR_3->table; VAR_4->name || VAR_4->desc || VAR_4->event; VAR_4++, VAR_5++) {
  if (VAR_4->name == ((void*)0))
   continue;
  if (FUNC_1(VAR_4->name, VAR_1) == 0) {
   if (VAR_2)
    *VAR_2 = VAR_5;
   return (VAR_4);
  }
 }
 return (((void*)0));
}
