
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_ev {int ev_cpu; int * ev_spec; int ev_saved; int ev_pmcid; int * ev_name; int ev_mode; int ev_flags; int ev_cumulative; int ev_count; } ;
struct pmcstat_args {int pa_events; } ;
typedef int cpuset_t ;


 int FUNC_0 (int,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct pmcstat_ev*,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 struct pmcstat_ev* FUNC_3 (int) ;
 int FUNC_4 (struct pmcstat_ev*,int ,int) ;
 void* FUNC_5 (int *) ;

void
FUNC_6(struct pmcstat_ev *VAR_3, const cpuset_t *VAR_4,
    struct pmcstat_args *VAR_5)
{
 int VAR_6;
 struct pmcstat_ev *VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (!FUNC_0(VAR_6, VAR_4))
   continue;

  if ((VAR_7 = FUNC_3(sizeof(*VAR_7))) == ((void*)0))
   FUNC_2(VAR_1, "ERROR: Out of memory");
  (void) FUNC_4(VAR_7, 0, sizeof(*VAR_7));

  VAR_7->ev_count = VAR_3->ev_count;
  VAR_7->ev_cpu = VAR_6;
  VAR_7->ev_cumulative = VAR_3->ev_cumulative;
  VAR_7->ev_flags = VAR_3->ev_flags;
  VAR_7->ev_mode = VAR_3->ev_mode;
  VAR_7->ev_name = FUNC_5(VAR_3->ev_name);
  if (VAR_7->ev_name == ((void*)0))
   FUNC_2(VAR_1, "ERROR: Out of memory");
  VAR_7->ev_pmcid = VAR_3->ev_pmcid;
  VAR_7->ev_saved = VAR_3->ev_saved;
  VAR_7->ev_spec = FUNC_5(VAR_3->ev_spec);
  if (VAR_7->ev_spec == ((void*)0))
   FUNC_2(VAR_1, "ERROR: Out of memory");

  FUNC_1(&VAR_5->pa_events, VAR_7, VAR_2);
 }
}
