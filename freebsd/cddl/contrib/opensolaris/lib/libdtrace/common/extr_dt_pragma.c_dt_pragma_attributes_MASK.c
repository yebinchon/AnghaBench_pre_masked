
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ dt_gen; TYPE_3__* dt_globals; } ;
typedef TYPE_4__ dtrace_hdl_t ;
typedef int dtrace_attribute_t ;
struct TYPE_14__ {int dtpa_args; int dtpa_name; int dtpa_func; int dtpa_mod; int dtpa_provider; } ;
struct TYPE_15__ {TYPE_1__ dtvd_attr; } ;
struct TYPE_18__ {TYPE_2__ pv_desc; } ;
typedef TYPE_5__ dt_provider_t ;
struct TYPE_19__ {scalar_t__ dn_kind; char* dn_string; struct TYPE_19__* dn_list; } ;
typedef TYPE_6__ dt_node_t ;
struct TYPE_20__ {scalar_t__ di_gen; int di_attr; } ;
typedef TYPE_7__ dt_ident_t ;
struct TYPE_21__ {int pcb_jmpbuf; int * pcb_pragmas; int pcb_globals; TYPE_4__* pcb_hdl; } ;
struct TYPE_16__ {int * dh_defer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (char*,int *,int ,int ) ;
 TYPE_7__* FUNC_1 (int *,char const*,int ,int ,int ,int ,int ,int *,void*,scalar_t__) ;
 int VAR_6 ;
 TYPE_7__* FUNC_2 (int *,char const*) ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (TYPE_4__*,char const*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (int ,char*,char const*,...) ;
 TYPE_8__* VAR_8 ;

__attribute__((used)) static void
FUNC_8(const char *VAR_9, dt_node_t *VAR_10)
{
 dtrace_hdl_t *VAR_11 = VAR_8->pcb_hdl;
 dtrace_attribute_t VAR_12, *VAR_13;
 dt_provider_t *VAR_14;
 const char *VAR_15, *VAR_16;
 dt_ident_t *VAR_17;

 if (VAR_10 == ((void*)0) || VAR_10->dn_kind != VAR_1 ||
     VAR_10->dn_list == ((void*)0) || VAR_10->dn_list->dn_kind != VAR_1) {
  FUNC_7(VAR_3, "malformed #pragma %s "
      "<attributes> <ident>\n", VAR_9);
 }

 if (FUNC_4(VAR_10->dn_string, &VAR_12) == -1) {
  FUNC_7(VAR_2, "invalid attributes "
      "specified by #pragma %s\n", VAR_9);
 }

 VAR_10 = VAR_10->dn_list;
 VAR_15 = VAR_10->dn_string;

 if (FUNC_6(VAR_15, "provider") == 0) {
  VAR_10 = VAR_10->dn_list;
  VAR_15 = VAR_10->dn_string;

  VAR_10 = VAR_10->dn_list;
  VAR_16 = VAR_10->dn_string;

  if ((VAR_14 = FUNC_3(VAR_11, VAR_15)) != ((void*)0)) {
   if (FUNC_6(VAR_16, "provider") == 0) {
    VAR_13 = &VAR_14->pv_desc.dtvd_attr.dtpa_provider;
   } else if (FUNC_6(VAR_16, "module") == 0) {
    VAR_13 = &VAR_14->pv_desc.dtvd_attr.dtpa_mod;
   } else if (FUNC_6(VAR_16, "function") == 0) {
    VAR_13 = &VAR_14->pv_desc.dtvd_attr.dtpa_func;
   } else if (FUNC_6(VAR_16, "name") == 0) {
    VAR_13 = &VAR_14->pv_desc.dtvd_attr.dtpa_name;
   } else if (FUNC_6(VAR_16, "args") == 0) {
    VAR_13 = &VAR_14->pv_desc.dtvd_attr.dtpa_args;
   } else {
    FUNC_7(VAR_2, "invalid component "
        "\"%s\" in attribute #pragma "
        "for provider %s\n", VAR_15, VAR_16);
   }

   *VAR_13 = VAR_12;
   return;
  }

 } else if ((VAR_17 = FUNC_2(
     &VAR_8->pcb_globals, VAR_15)) != ((void*)0)) {

  if (VAR_17->di_gen != VAR_11->dt_gen) {
   FUNC_7(VAR_4, "#pragma %s cannot modify "
       "entity defined outside program scope\n", VAR_9);
  }

  VAR_17->di_attr = VAR_12;
  return;
 }

 if (VAR_8->pcb_pragmas == ((void*)0) && (VAR_8->pcb_pragmas =
     FUNC_0("pragma", ((void*)0), 0, 0)) == ((void*)0))
  FUNC_5(VAR_8->pcb_jmpbuf, VAR_5);

 VAR_17 = FUNC_1(VAR_8->pcb_pragmas, VAR_15, VAR_0, 0, 0,
     VAR_12, 0, &VAR_6, (void *)VAR_9, VAR_11->dt_gen);

 if (VAR_17 == ((void*)0))
  FUNC_5(VAR_8->pcb_jmpbuf, VAR_5);

 if (VAR_11->dt_globals->dh_defer == ((void*)0))
  VAR_11->dt_globals->dh_defer = &VAR_7;
}
