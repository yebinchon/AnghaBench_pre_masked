
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint_t ;
typedef scalar_t__ pid_t ;
struct TYPE_11__ {scalar_t__ dtc_ctfmodel; } ;
struct TYPE_12__ {size_t dt_modbuckets; int dt_macros; TYPE_1__ dt_conf; int dt_nmods; TYPE_3__** dt_mods; int dt_modlist; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_13__ {char* dm_name; scalar_t__ dm_pid; int * dm_ops; struct TYPE_13__* dm_next; } ;
typedef TYPE_3__ dt_module_t ;
struct TYPE_14__ {scalar_t__ di_id; } ;
typedef TYPE_4__ dt_ident_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*,char*) ;
 TYPE_4__* FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_4 (char const*,int *) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 long FUNC_9 (char*,char**,int) ;

dt_module_t *
FUNC_10(dtrace_hdl_t *VAR_4, const char *VAR_5)
{
 long VAR_6;
 char *VAR_7;
 dt_ident_t *VAR_8;
 uint_t VAR_9 = FUNC_4(VAR_5, ((void*)0)) % VAR_4->dt_modbuckets;
 dt_module_t *VAR_10;

 for (VAR_10 = VAR_4->dt_mods[VAR_9]; VAR_10 != ((void*)0); VAR_10 = VAR_10->dm_next) {
  if (FUNC_6(VAR_10->dm_name, VAR_5) == 0)
   return (VAR_10);
 }

 if ((VAR_10 = FUNC_5(sizeof (dt_module_t))) == ((void*)0))
  return (((void*)0));

 FUNC_0(VAR_10, sizeof (dt_module_t));
 (void) FUNC_7(VAR_10->dm_name, VAR_5, sizeof (VAR_10->dm_name));
 FUNC_3(&VAR_4->dt_modlist, VAR_10);
 VAR_10->dm_next = VAR_4->dt_mods[VAR_9];
 VAR_4->dt_mods[VAR_9] = VAR_10;
 VAR_4->dt_nmods++;

 if (VAR_4->dt_conf.dtc_ctfmodel == VAR_0)
  VAR_10->dm_ops = &VAR_2;
 else
  VAR_10->dm_ops = &VAR_1;
 if (FUNC_8(VAR_10->dm_name, "pid", 3) == 0) {
  VAR_3 = 0;
  if (VAR_10->dm_name[3] == '\0') {
   VAR_8 = FUNC_2(VAR_4->dt_macros, "target");
   if (VAR_8 != ((void*)0) && VAR_8->di_id != 0)
    VAR_10->dm_pid = VAR_8->di_id;
  } else {
   VAR_6 = FUNC_9(VAR_10->dm_name + 3, &VAR_7, 10);
   if (VAR_3 == 0 && *VAR_7 == '\0')
    VAR_10->dm_pid = (pid_t)VAR_6;
   else
    FUNC_1("encountered malformed pid "
        "module: %s\n", VAR_10->dm_name);
  }
 }

 return (VAR_10);
}
