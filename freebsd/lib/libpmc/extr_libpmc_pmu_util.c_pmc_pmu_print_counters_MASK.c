
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_events_map {struct pmu_event* table; } ;
struct pmu_event_desc {int dummy; } ;
struct pmu_event {char* name; scalar_t__ event; scalar_t__ desc; } ;


 char* FUNC_0 (char*) ;
 struct pmu_events_map* FUNC_1 (int *) ;
 int FUNC_2 (struct pmu_event_desc*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

void
FUNC_6(const char *VAR_0)
{
 const struct pmu_events_map *VAR_1;
 const struct pmu_event *VAR_2;
 struct pmu_event_desc VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0("PMUDEBUG");
 VAR_5 = 0;

 if (VAR_4 != ((void*)0) && FUNC_5(VAR_4, "true") == 0)
  VAR_5 = 1;
 if ((VAR_1 = FUNC_1(((void*)0))) == ((void*)0))
  return;
 for (VAR_2 = VAR_1->table; VAR_2->name || VAR_2->desc || VAR_2->event; VAR_2++) {
  if (VAR_2->name == ((void*)0))
   continue;
  if (VAR_0 != ((void*)0) && FUNC_4(VAR_2->name, VAR_0) == ((void*)0))
   continue;
  FUNC_3("\t%s\n", VAR_2->name);
  if (VAR_5)
   FUNC_2(&VAR_3, VAR_2->event);
 }
}
