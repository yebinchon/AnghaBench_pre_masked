
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_events_map {TYPE_1__* table; } ;
struct TYPE_2__ {char const* name; } ;


 int FUNC_0 (char const*) ;
 struct pmu_events_map* FUNC_1 (char const*) ;

const char *
FUNC_2(const char *VAR_0, int VAR_1)
{
 const struct pmu_events_map *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0)) == ((void*)0))
  return (((void*)0));
 FUNC_0(VAR_2->table[VAR_1].name);
 return (VAR_2->table[VAR_1].name);
}
