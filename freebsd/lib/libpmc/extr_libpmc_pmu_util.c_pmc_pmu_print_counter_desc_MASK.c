
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_events_map {struct pmu_event* table; } ;
struct pmu_event {char* name; char* desc; scalar_t__ event; } ;


 struct pmu_events_map* FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 int * FUNC_2 (char*,char const*) ;

void
FUNC_3(const char *VAR_0)
{
 const struct pmu_events_map *VAR_1;
 const struct pmu_event *VAR_2;

 if ((VAR_1 = FUNC_0(((void*)0))) == ((void*)0))
  return;
 for (VAR_2 = VAR_1->table; VAR_2->name || VAR_2->desc || VAR_2->event; VAR_2++) {
  if (VAR_2->name == ((void*)0))
   continue;
  if (FUNC_2(VAR_2->name, VAR_0) != ((void*)0) &&
      VAR_2->desc != ((void*)0))
   FUNC_1("%s:\t%s\n", VAR_2->name, VAR_2->desc);
 }
}
