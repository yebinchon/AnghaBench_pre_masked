
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_event_descr {int pm_ev_name; } ;
struct pmc_class_descr {size_t pm_evc_event_table_size; struct pmc_event_descr* pm_evc_event_table; } ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static const struct pmc_event_descr *
FUNC_1(const char *VAR_0,
    const struct pmc_class_descr *VAR_1)
{
 size_t VAR_2;
 const struct pmc_event_descr *VAR_3;

 VAR_3 = VAR_1->pm_evc_event_table;
 for (VAR_2 = 0; VAR_2 < VAR_1->pm_evc_event_table_size; VAR_2++, VAR_3++)
  if (FUNC_0(VAR_0, VAR_3->pm_ev_name))
   return (VAR_3);

 return (((void*)0));
}
