
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_process {int dummy; } ;
struct pmcstat_args {int pa_mergepmc; size_t pa_pplugin; size_t pa_plugin; } ;
struct pmc_plugins {int (* pl_init ) () ;} ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 struct pmcstat_process* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7(struct pmcstat_process **VAR_5,
    struct pmcstat_args *VAR_6, struct pmc_plugins *VAR_7,
    int *VAR_8, int *VAR_9)
{
 struct pmcstat_process *VAR_10;
 int VAR_11;


 if (FUNC_4("LD_TRACE_LOADED_OBJECTS_FMT1","%o \"%p\" %x\n",1) != 0)
  FUNC_1(VAR_0, "ERROR: Cannot setenv");


 FUNC_3();
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  FUNC_0(&VAR_3[VAR_11]);
  FUNC_0(&VAR_4[VAR_11]);
 }






 if ((VAR_10 = FUNC_2((pid_t) -1,
     VAR_1)) == ((void*)0))
  FUNC_1(VAR_0, "ERROR: Cannot initialize logging");

 *VAR_5 = VAR_10;


 *VAR_8 = 0;


 *VAR_9 = VAR_6->pa_mergepmc;





 if (VAR_7[VAR_6->pa_pplugin].pl_init != ((void*)0))
  VAR_7[VAR_6->pa_pplugin].pl_init();
 if (VAR_7[VAR_6->pa_plugin].pl_init != ((void*)0))
  VAR_7[VAR_6->pa_plugin].pl_init();
}
