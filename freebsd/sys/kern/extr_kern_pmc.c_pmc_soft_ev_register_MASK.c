
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pm_ev_code; int pm_ev_name; } ;
struct pmc_soft {TYPE_1__ ps_ev; scalar_t__ ps_running; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct pmc_soft** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct pmc_soft *VAR_5)
{
 static int VAR_6 = 0;
 int VAR_7;

 VAR_5->ps_running = 0;
 VAR_5->ps_ev.pm_ev_code = 0;
 FUNC_2(VAR_5->ps_ev.pm_ev_name);

 FUNC_0(&VAR_4);

 if (VAR_3 >= VAR_1) {




  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   if (VAR_2[VAR_7] == ((void*)0))
    break;
  if (VAR_7 == VAR_1) {
   FUNC_1(&VAR_4);
   if (!VAR_6) {
    FUNC_3("hwpmc: too many soft events, "
        "increase kern.hwpmc.softevents tunable\n");
    VAR_6 = 1;
   }
   return;
  }

  VAR_5->ps_ev.pm_ev_code = VAR_0 + VAR_7;
  VAR_2[VAR_7] = VAR_5;
 } else {
  VAR_5->ps_ev.pm_ev_code = VAR_0 + VAR_3;
  VAR_2[VAR_3++] = VAR_5;
 }

 FUNC_1(&VAR_4);
}
