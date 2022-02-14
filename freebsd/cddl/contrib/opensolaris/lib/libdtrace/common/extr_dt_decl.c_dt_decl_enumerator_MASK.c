
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ intmax_t ;
struct TYPE_22__ {int dt_gen; int dt_globals; TYPE_3__* dt_ddefs; } ;
typedef TYPE_4__ dtrace_hdl_t ;
struct TYPE_23__ {int ds_enumval; scalar_t__ ds_ctfp; int ds_type; TYPE_2__* ds_decl; } ;
typedef TYPE_5__ dt_scope_t ;
struct TYPE_24__ {scalar_t__ dn_kind; struct TYPE_24__* dn_link; scalar_t__ dn_value; int dn_string; } ;
typedef TYPE_6__ dt_node_t ;
struct TYPE_25__ {TYPE_6__* din_root; TYPE_6__* din_list; } ;
typedef TYPE_7__ dt_idnode_t ;
struct TYPE_26__ {scalar_t__ di_ctfp; int di_type; TYPE_7__* di_iarg; } ;
typedef TYPE_8__ dt_ident_t ;
struct TYPE_19__ {TYPE_5__* ds_next; } ;
struct TYPE_27__ {TYPE_6__* pcb_list; int pcb_jmpbuf; int pcb_globals; TYPE_4__* pcb_hdl; TYPE_1__ pcb_dstack; } ;
struct TYPE_21__ {scalar_t__ dm_ctfp; } ;
struct TYPE_20__ {scalar_t__ dd_kind; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_7__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,char*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char*,int) ;
 TYPE_8__* FUNC_9 (int ,char*,int ,int,int ,int ,int ,int *,int *,int ) ;
 int VAR_18 ;
 int * FUNC_10 (int *,char*) ;
 TYPE_6__* FUNC_11 (TYPE_6__*,int) ;
 int FUNC_12 (TYPE_6__*) ;
 TYPE_6__* FUNC_13 (int) ;
 int FUNC_14 (TYPE_6__*,scalar_t__,int ,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ) ;
 TYPE_7__* FUNC_17 (int) ;
 int * FUNC_18 (char*,char) ;
 int FUNC_19 (char*,char*) ;
 scalar_t__ FUNC_20 (char*) ;
 int FUNC_21 (int ,char*,char*,...) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 char* VAR_21 ;
 TYPE_9__* VAR_22 ;

void
FUNC_22(char *VAR_23, dt_node_t *VAR_24)
{
 dt_scope_t *VAR_25 = VAR_22->pcb_dstack.ds_next;
 dtrace_hdl_t *VAR_26 = VAR_22->pcb_hdl;

 dt_idnode_t *VAR_27;
 dt_ident_t *VAR_28;
 char *VAR_29;
 int VAR_30;

 VAR_29 = FUNC_0(FUNC_20(VAR_23) + 1);
 (void) FUNC_19(VAR_29, VAR_23);
 FUNC_15(VAR_23);

 if (VAR_25 == ((void*)0))
  FUNC_16(VAR_22->pcb_jmpbuf, VAR_14);

 FUNC_1(VAR_25->ds_decl->dd_kind == VAR_2);
 VAR_30 = VAR_25->ds_enumval + 1;

 if (FUNC_18(VAR_29, '`') != ((void*)0)) {
  FUNC_21(VAR_11, "D scoping operator may not be used in "
      "an enumerator name (%s)\n", VAR_29);
 }






 if (VAR_24 != ((void*)0)) {
  if (VAR_24->dn_kind != VAR_6 || FUNC_4(
      VAR_25->ds_ctfp, VAR_25->ds_type, VAR_24->dn_string, &VAR_30) != 0) {
   VAR_24 = FUNC_11(VAR_24, VAR_5);

   if (VAR_24->dn_kind != VAR_7) {
    FUNC_21(VAR_8, "enumerator '%s' must "
        "be assigned to an integral constant "
        "expression\n", VAR_29);
   }

   if ((intmax_t)VAR_24->dn_value > VAR_15 ||
       (intmax_t)VAR_24->dn_value < VAR_16) {
    FUNC_21(VAR_9, "enumerator '%s' value "
        "overflows INT_MAX (%d)\n", VAR_29, VAR_15);
   }

   VAR_30 = (int)VAR_24->dn_value;
  }
  FUNC_12(VAR_24);
 }

 if (FUNC_3(VAR_25->ds_ctfp, VAR_25->ds_type,
     VAR_29, VAR_30) == VAR_1 || FUNC_7(VAR_25->ds_ctfp) == VAR_1) {
  FUNC_21(VAR_12, "failed to define enumerator '%s': %s\n",
      VAR_29, FUNC_5(FUNC_6(VAR_25->ds_ctfp)));
 }

 VAR_25->ds_enumval = VAR_30;
 if (FUNC_10(&VAR_22->pcb_globals, VAR_29) != ((void*)0)) {
  if (VAR_25->ds_ctfp == VAR_26->dt_ddefs->dm_ctfp) {
   FUNC_21(VAR_10,
       "identifier redeclared: %s\n", VAR_29);
  } else
   return;
 }

 FUNC_8("add global enumerator %s = %d\n", VAR_29, VAR_30);

 VAR_28 = FUNC_9(VAR_26->dt_globals, VAR_29, VAR_3,
     VAR_4 | VAR_5, 0, VAR_17, 0,
     &VAR_18, ((void*)0), VAR_26->dt_gen);

 if (VAR_28 == ((void*)0))
  FUNC_16(VAR_22->pcb_jmpbuf, VAR_13);

 VAR_20 = 0;
 VAR_21[0] = '\0';
 VAR_19 = 0;

 VAR_24 = FUNC_13(VAR_30);
 FUNC_14(VAR_24, VAR_25->ds_ctfp, VAR_25->ds_type, VAR_0);

 if ((VAR_27 = FUNC_17(sizeof (dt_idnode_t))) == ((void*)0))
  FUNC_16(VAR_22->pcb_jmpbuf, VAR_13);





 FUNC_1(VAR_22->pcb_list == VAR_24);
 VAR_22->pcb_list = VAR_24->dn_link;
 VAR_24->dn_link = ((void*)0);

 FUNC_2(VAR_27, sizeof (dt_idnode_t));
 VAR_27->din_list = VAR_24;
 VAR_27->din_root = VAR_24;

 VAR_28->di_iarg = VAR_27;
 VAR_28->di_ctfp = VAR_25->ds_ctfp;
 VAR_28->di_type = VAR_25->ds_type;
}
