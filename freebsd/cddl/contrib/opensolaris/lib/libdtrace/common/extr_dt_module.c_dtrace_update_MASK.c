
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char kld_file_stat ;
struct dirent {char* d_name; } ;
typedef int k_stat ;
struct TYPE_7__ {int dt_oflags; int * dt_exec; int dt_modlist; int * dt_ddefs; int * dt_cdefs; int * dt_rtld; int dt_macros; } ;
typedef TYPE_1__ dtrace_hdl_t ;
typedef int dt_module_t ;
struct TYPE_8__ {int di_id; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_6__* FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int,char*) ;
 int * FUNC_20 (int ) ;
 struct dirent* FUNC_21 (int *) ;

void
FUNC_22(dtrace_hdl_t *VAR_2)
{
 dt_module_t *VAR_3;
 DIR *VAR_4;




 for (VAR_3 = FUNC_3(&VAR_2->dt_modlist);
     VAR_3 != ((void*)0); VAR_3 = FUNC_3(VAR_3))
  FUNC_6(VAR_2, VAR_3);
 FUNC_1(VAR_2->dt_macros, "egid")->di_id = FUNC_8();
 FUNC_1(VAR_2->dt_macros, "euid")->di_id = FUNC_9();
 FUNC_1(VAR_2->dt_macros, "gid")->di_id = FUNC_10();
 FUNC_1(VAR_2->dt_macros, "pid")->di_id = FUNC_12();
 FUNC_1(VAR_2->dt_macros, "pgid")->di_id = FUNC_11(0);
 FUNC_1(VAR_2->dt_macros, "ppid")->di_id = FUNC_13();



 FUNC_1(VAR_2->dt_macros, "sid")->di_id = FUNC_15(0);



 FUNC_1(VAR_2->dt_macros, "uid")->di_id = FUNC_17();







 VAR_2->dt_exec = FUNC_5(VAR_2, "genunix");
 VAR_2->dt_rtld = FUNC_5(VAR_2, "krtld");
 if (VAR_2->dt_rtld == ((void*)0))
  VAR_2->dt_rtld = FUNC_5(VAR_2, "unix");
 if (VAR_2->dt_exec != ((void*)0) &&
     VAR_2->dt_cdefs == ((void*)0) && VAR_2->dt_ddefs == ((void*)0)) {
  FUNC_2(&VAR_2->dt_modlist, VAR_2->dt_exec);
  FUNC_4(&VAR_2->dt_modlist, VAR_2->dt_exec);
 }
}
