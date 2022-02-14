
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dt_gen; TYPE_2__* dt_globals; } ;
typedef TYPE_3__ dtrace_hdl_t ;
typedef int dt_version_t ;
struct TYPE_13__ {scalar_t__ dn_kind; TYPE_1__* dn_list; int dn_string; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_14__ {scalar_t__ di_gen; int di_vers; } ;
typedef TYPE_5__ dt_ident_t ;
struct TYPE_15__ {int pcb_jmpbuf; int * pcb_pragmas; int pcb_globals; TYPE_3__* pcb_hdl; } ;
struct TYPE_11__ {int * dh_defer; } ;
struct TYPE_10__ {scalar_t__ dn_kind; char* dn_string; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (char*,int *,int ,int ) ;
 TYPE_5__* FUNC_1 (int *,char const*,int ,int ,int ,int ,int ,int *,void*,scalar_t__) ;
 int VAR_8 ;
 TYPE_5__* FUNC_2 (int *,char const*) ;
 int VAR_9 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,char const*) ;
 TYPE_6__* VAR_10 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_11, dt_node_t *VAR_12)
{
 dtrace_hdl_t *VAR_13 = VAR_10->pcb_hdl;
 dt_version_t VAR_14;
 const char *VAR_15;
 dt_ident_t *VAR_16;

 if (VAR_12 == ((void*)0) || VAR_12->dn_kind != VAR_2 ||
     VAR_12->dn_list == ((void*)0) || VAR_12->dn_list->dn_kind != VAR_1) {
  FUNC_5(VAR_4, "malformed #pragma %s "
      "\"version\" <ident>\n", VAR_11);
 }

 if (FUNC_3(VAR_12->dn_string, &VAR_14) == -1) {
  FUNC_5(VAR_3, "invalid version string "
      "specified by #pragma %s\n", VAR_11);
 }

 VAR_15 = VAR_12->dn_list->dn_string;
 VAR_16 = FUNC_2(&VAR_10->pcb_globals, VAR_15);

 if (VAR_16 != ((void*)0)) {
  if (VAR_16->di_gen != VAR_13->dt_gen) {
   FUNC_5(VAR_5, "#pragma %s cannot modify "
       "entity defined outside program scope\n", VAR_11);
  }
  VAR_16->di_vers = VAR_14;
  return;
 }

 if (VAR_10->pcb_pragmas == ((void*)0) && (VAR_10->pcb_pragmas =
     FUNC_0("pragma", ((void*)0), 0, 0)) == ((void*)0))
  FUNC_4(VAR_10->pcb_jmpbuf, VAR_6);

 VAR_16 = FUNC_1(VAR_10->pcb_pragmas, VAR_15, VAR_0, 0, 0,
     VAR_7, VAR_14, &VAR_8, (void *)VAR_11, VAR_13->dt_gen);

 if (VAR_16 == ((void*)0))
  FUNC_4(VAR_10->pcb_jmpbuf, VAR_6);

 if (VAR_13->dt_globals->dh_defer == ((void*)0))
  VAR_13->dt_globals->dh_defer = &VAR_9;
}
