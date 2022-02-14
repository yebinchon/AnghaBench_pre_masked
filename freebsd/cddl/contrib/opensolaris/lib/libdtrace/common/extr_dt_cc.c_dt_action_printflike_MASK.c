
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


typedef int n ;
struct TYPE_20__ {int dtsd_fmtdata; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_21__ {int dtdo_len; int dtdo_rtype; int * dtdo_buf; } ;
typedef TYPE_2__ dtrace_difo_t ;
typedef scalar_t__ dtrace_actkind_t ;
struct TYPE_22__ {scalar_t__ dtad_kind; TYPE_2__* dtad_difo; } ;
typedef TYPE_3__ dtrace_actdesc_t ;
struct TYPE_23__ {struct TYPE_23__* dn_list; TYPE_9__* dn_ident; TYPE_11__* dn_args; int dn_line; } ;
typedef TYPE_4__ dt_node_t ;
typedef int dif_instr_t ;
struct TYPE_25__ {int di_name; } ;
struct TYPE_24__ {int pcb_jmpbuf; } ;
struct TYPE_19__ {scalar_t__ dn_kind; char* dn_string; TYPE_4__* dn_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,char*,int ,char*) ;
 int * FUNC_4 (int *,int) ;
 TYPE_2__* FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_7 (int *,int *) ;
 int VAR_10 ;
 char* FUNC_8 (TYPE_11__*,char*,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int ,int ,TYPE_9__*,int,int ,TYPE_4__*) ;
 TYPE_3__* FUNC_11 (int *,TYPE_1__*) ;
 TYPE_2__* FUNC_12 (int *,int) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int VAR_11 ;
 TYPE_5__* VAR_12 ;

__attribute__((used)) static void
FUNC_15(dtrace_hdl_t *VAR_13, dt_node_t *VAR_14, dtrace_stmtdesc_t *VAR_15,
    dtrace_actkind_t VAR_16)
{
 dt_node_t *VAR_17, *VAR_18;
 dtrace_actdesc_t *VAR_19 = ((void*)0);
 char VAR_20[VAR_6], *VAR_21;

 FUNC_2(FUNC_1(VAR_16));

 if (VAR_14->dn_args->dn_kind != VAR_4) {
  FUNC_3(VAR_14, VAR_8,
      "%s( ) argument #1 is incompatible with prototype:\n"
      "\tprototype: string constant\n\t argument: %s\n",
      VAR_14->dn_ident->di_name,
      FUNC_8(VAR_14->dn_args, VAR_20, sizeof (VAR_20)));
 }

 VAR_18 = VAR_14->dn_args->dn_list;
 VAR_11 = VAR_14->dn_line;
 VAR_21 = VAR_14->dn_args->dn_string;
 if (VAR_16 == VAR_2) {
  if (FUNC_14(VAR_21, VAR_3) == 0) {






   FUNC_3(VAR_14, VAR_7,
       "%s( ) argument #1 cannot be \"%s\"\n",
       VAR_14->dn_ident->di_name, VAR_3);
  }

  if (VAR_21[0] == '\0')
   VAR_21 = VAR_3;
 }

 VAR_15->dtsd_fmtdata = FUNC_9(VAR_13, VAR_21);

 FUNC_10(VAR_15->dtsd_fmtdata, VAR_5,
     VAR_14->dn_ident, 1, VAR_1, VAR_18);

 if (VAR_18 == ((void*)0)) {
  dif_instr_t *VAR_22;
  dtrace_difo_t *VAR_23;

  if ((VAR_22 = FUNC_4(VAR_13, sizeof (dif_instr_t))) == ((void*)0) ||
      (VAR_23 = FUNC_12(VAR_13, sizeof (dtrace_difo_t))) == ((void*)0)) {
   FUNC_7(VAR_13, VAR_22);
   FUNC_13(VAR_12->pcb_jmpbuf, VAR_9);
  }

  VAR_22[0] = FUNC_0(VAR_0);

  VAR_23->dtdo_buf = VAR_22;
  VAR_23->dtdo_len = 1;
  VAR_23->dtdo_rtype = VAR_10;

  VAR_19 = FUNC_11(VAR_13, VAR_15);
  VAR_19->dtad_difo = VAR_23;
  VAR_19->dtad_kind = VAR_16;
  return;
 }

 for (VAR_17 = VAR_18; VAR_17 != ((void*)0); VAR_17 = VAR_17->dn_list) {
  VAR_19 = FUNC_11(VAR_13, VAR_15);
  FUNC_6(VAR_12, VAR_17);
  VAR_19->dtad_difo = FUNC_5(VAR_12);
  VAR_19->dtad_kind = VAR_16;
 }
}
