
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int lib ;
struct TYPE_19__ {char* dt_filetag; int dt_lib_dep_sorted; int dt_lib_dep; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_20__ {scalar_t__ dn_kind; char* dn_string; struct TYPE_20__* dn_list; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_module_t ;
struct TYPE_21__ {int dtld_loaded; int dtld_dependencies; } ;
typedef TYPE_3__ dt_lib_depend_t ;
struct TYPE_22__ {int * dkm_module; } ;
typedef TYPE_4__ dt_kmodule_t ;
struct TYPE_23__ {int pcb_cflags; TYPE_1__* pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_4__* FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,char*) ;
 TYPE_3__* FUNC_5 (int *,char*) ;
 int * FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*,char*,int) ;
 int * FUNC_9 (TYPE_1__*,char*) ;
 char const* FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 char* FUNC_13 (char**,char*) ;
 scalar_t__ FUNC_14 (char*,char*,size_t*,int *,int ) ;
 int FUNC_15 (int ,char*,...) ;
 TYPE_5__* VAR_8 ;

__attribute__((used)) static void
FUNC_16(const char *VAR_9, dt_node_t *VAR_10)
{
 dtrace_hdl_t *VAR_11 = VAR_8->pcb_hdl;
 dt_node_t *VAR_12 = VAR_10 ? VAR_10->dn_list : ((void*)0);
 int VAR_13;
 dt_lib_depend_t *VAR_14;
 char VAR_15[VAR_7];
 size_t VAR_16;
 char *VAR_17, *VAR_18, *VAR_19;

 if (VAR_10 == ((void*)0) || VAR_12 == ((void*)0) ||
     VAR_10->dn_kind != VAR_3 || VAR_12->dn_kind != VAR_3) {
  FUNC_15(VAR_6, "malformed #pragma %s "
      "<class> <name>\n", VAR_9);
 }

 if (FUNC_12(VAR_10->dn_string, "provider") == 0) {





  VAR_17 = ((void*)0);
  if (FUNC_14("debug.dtrace.providers", ((void*)0), &VAR_16, ((void*)0), 0) ||
      ((VAR_17 = FUNC_1(VAR_11, VAR_16)) == ((void*)0)) ||
      FUNC_14("debug.dtrace.providers", VAR_17, &VAR_16, ((void*)0), 0))
   VAR_13 = FUNC_9(VAR_11, VAR_12->dn_string) != ((void*)0);
  else {
   VAR_13 = VAR_0;
   for (VAR_18 = VAR_17; (VAR_19 = FUNC_13(&VAR_18, " ")) != ((void*)0); )
    if (FUNC_12(VAR_19, VAR_12->dn_string) == 0) {
     VAR_13 = VAR_1;
     break;
    }
   if (VAR_13 == VAR_0)
    VAR_13 = FUNC_9(VAR_11,
        VAR_12->dn_string) != ((void*)0);
  }
  if (VAR_17 != ((void*)0))
   FUNC_2(VAR_11, VAR_17);
 } else if (FUNC_12(VAR_10->dn_string, "module") == 0) {
  dt_module_t *VAR_20 = FUNC_7(VAR_11, VAR_12->dn_string);
  VAR_13 = VAR_20 != ((void*)0) && FUNC_6(VAR_11, VAR_20) != ((void*)0);
 } else if (FUNC_12(VAR_10->dn_string, "library") == 0) {
  if (VAR_8->pcb_cflags & VAR_2) {
   FUNC_0(VAR_11->dt_filetag != ((void*)0));

   FUNC_8(VAR_11, VAR_12->dn_string, VAR_15,
       sizeof (VAR_15));

   VAR_14 = FUNC_5(&VAR_11->dt_lib_dep,
       VAR_11->dt_filetag);
   FUNC_0(VAR_14 != ((void*)0));

   if ((FUNC_4(VAR_11, &VAR_14->dtld_dependencies,
       VAR_15)) != 0) {
    FUNC_15(VAR_4,
        "failed to add dependency %s:%s\n", VAR_15,
        FUNC_10(VAR_11, FUNC_11(VAR_11)));
   }
  } else {






   if (VAR_11->dt_filetag == ((void*)0))
    FUNC_15(VAR_4, "main program may "
        "not explicitly depend on a library");

   VAR_14 = FUNC_5(&VAR_11->dt_lib_dep,
       VAR_11->dt_filetag);
   FUNC_0(VAR_14 != ((void*)0));

   FUNC_8(VAR_11, VAR_12->dn_string, VAR_15,
       sizeof (VAR_15));
   VAR_14 = FUNC_5(&VAR_11->dt_lib_dep_sorted,
       VAR_15);
   FUNC_0(VAR_14 != ((void*)0));

   if (!VAR_14->dtld_loaded)
    FUNC_15(VAR_4, "program requires "
        "library \"%s\" which failed to load",
        VAR_15);
  }

  VAR_13 = VAR_1;
 } else {
  FUNC_15(VAR_5, "invalid class %s "
      "specified by #pragma %s\n", VAR_10->dn_string, VAR_9);
 }

 if (!VAR_13) {
  FUNC_15(VAR_4, "program requires %s %s\n",
      VAR_10->dn_string, VAR_12->dn_string);
 }
}
