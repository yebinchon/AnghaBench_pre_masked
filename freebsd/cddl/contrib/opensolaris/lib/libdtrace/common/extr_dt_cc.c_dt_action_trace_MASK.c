
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int * dtsd_strdata; } ;
typedef TYPE_2__ dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_21__ {int dtad_kind; int dtad_difo; } ;
typedef TYPE_3__ dtrace_actdesc_t ;
struct TYPE_22__ {int dn_type; int dn_ctfp; TYPE_1__* dn_ident; TYPE_9__* dn_args; } ;
typedef TYPE_4__ dt_node_t ;
struct TYPE_23__ {char* dm_name; scalar_t__ dm_pid; } ;
typedef TYPE_5__ dt_module_t ;
typedef int boolean_t ;
struct TYPE_25__ {scalar_t__ dn_kind; } ;
struct TYPE_24__ {int pcb_jmpbuf; TYPE_4__* pcb_dret; } ;
struct TYPE_19__ {scalar_t__ di_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_9__*,int ,char*,char const*,...) ;
 int * FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_9__*) ;
 int FUNC_5 (int *,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_9__*) ;
 int * FUNC_8 (TYPE_9__*,int ) ;
 TYPE_3__* FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,size_t,char*,char*,int,...) ;
 TYPE_6__* VAR_12 ;

__attribute__((used)) static void
FUNC_12(dtrace_hdl_t *VAR_13, dt_node_t *VAR_14, dtrace_stmtdesc_t *VAR_15)
{
 int VAR_16;

 dtrace_actdesc_t *VAR_17 = FUNC_9(VAR_13, VAR_15);
 boolean_t VAR_18 = (VAR_14->dn_ident->di_id == VAR_2);
 const char *VAR_19 = VAR_18 ? "trace" : "print";

 if (FUNC_7(VAR_14->dn_args)) {
  FUNC_1(VAR_14->dn_args, VAR_18 ? VAR_10 : VAR_7,
      "%s( ) may not be applied to a void expression\n", VAR_19);
 }

 if (FUNC_8(VAR_14->dn_args, VAR_3) != ((void*)0)) {
  FUNC_1(VAR_14->dn_args, VAR_18 ? VAR_9 : VAR_6,
      "%s( ) may not be applied to a translated pointer\n", VAR_19);
 }

 if (VAR_14->dn_args->dn_kind == VAR_4) {
  FUNC_1(VAR_14->dn_args, VAR_18 ? VAR_8 : VAR_5,
      "%s( ) may not be applied to an aggregation%s\n", VAR_19,
      VAR_18 ? "" : " -- did you mean printa()?");
 }

 FUNC_4(VAR_12, VAR_14->dn_args);
 if (VAR_14->dn_ident->di_id == VAR_1) {
  dt_node_t *VAR_20;
  size_t VAR_21;
  dt_module_t *VAR_22;

  VAR_20 = VAR_12->pcb_dret;
  VAR_22 = FUNC_6(VAR_13, VAR_20->dn_ctfp);

  VAR_21 = FUNC_11(((void*)0), 0, "%s`%ld", VAR_22->dm_name, VAR_20->dn_type) + 1;
  if (VAR_22->dm_pid != 0) {
   VAR_16 = FUNC_5(VAR_13, VAR_22, VAR_20->dn_ctfp);
   FUNC_0(VAR_16 >= 0);
   VAR_21 = FUNC_11(((void*)0), 0, "%s`%d`%ld", VAR_22->dm_name,
       VAR_16, VAR_20->dn_type) + 1;
  } else {
   VAR_21 = FUNC_11(((void*)0), 0, "%s`%ld", VAR_22->dm_name,
       VAR_20->dn_type) + 1;
  }
  VAR_15->dtsd_strdata = FUNC_2(VAR_13, VAR_21);
  if (VAR_15->dtsd_strdata == ((void*)0))
   FUNC_10(VAR_12->pcb_jmpbuf, VAR_11);
  (void) FUNC_11(VAR_15->dtsd_strdata, VAR_21, "%s`%ld", VAR_22->dm_name,
      VAR_20->dn_type);
  if (VAR_22->dm_pid != 0) {
   (void) FUNC_11(VAR_15->dtsd_strdata, VAR_21, "%s`%d`%ld",
       VAR_22->dm_name, VAR_16, VAR_20->dn_type);
  } else {
   (void) FUNC_11(VAR_15->dtsd_strdata, VAR_21, "%s`%ld",
       VAR_22->dm_name, VAR_20->dn_type);
  }
 }

 VAR_17->dtad_difo = FUNC_3(VAR_12);
 VAR_17->dtad_kind = VAR_0;
}
