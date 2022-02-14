
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int uint_t ;
struct TYPE_17__ {int dtdt_flags; scalar_t__ dtdt_size; int dtdt_kind; } ;
typedef TYPE_2__ dtrace_diftype_t ;
typedef int dt_regset_t ;
struct TYPE_18__ {int dn_reg; struct TYPE_18__* dn_list; } ;
typedef TYPE_3__ dt_node_t ;
typedef int dt_irlist_t ;
struct TYPE_19__ {TYPE_11__* dis_args; } ;
typedef TYPE_4__ dt_idsig_t ;
struct TYPE_20__ {TYPE_4__* di_data; } ;
typedef TYPE_5__ dt_ident_t ;
typedef int dif_instr_t ;
struct TYPE_16__ {int dtc_diftupregs; } ;
struct TYPE_22__ {TYPE_1__ dt_conf; } ;
struct TYPE_21__ {int pcb_jmpbuf; TYPE_7__* pcb_hdl; } ;
struct TYPE_15__ {int dn_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,TYPE_11__*,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_7__*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ,int ) ;
 TYPE_6__* VAR_7 ;

__attribute__((used)) static void
FUNC_10(dt_ident_t *VAR_8, dt_node_t *VAR_9,
    dt_irlist_t *VAR_10, dt_regset_t *VAR_11)
{
 const dt_idsig_t *VAR_12 = VAR_8->di_data;
 dt_node_t *VAR_13;
 int VAR_14 = 0;

 for (VAR_13 = VAR_9; VAR_13 != ((void*)0); VAR_13 = VAR_13->dn_list)
  FUNC_1(VAR_13, VAR_10, VAR_11);

 FUNC_5(VAR_10, FUNC_2(VAR_5, VAR_0));

 for (VAR_13 = VAR_9; VAR_13 != ((void*)0); VAR_13 = VAR_13->dn_list, VAR_14++) {
  dtrace_diftype_t VAR_15;
  dif_instr_t VAR_16;
  uint_t VAR_17;
  int VAR_18;

  FUNC_6(VAR_7->pcb_hdl, VAR_13, &VAR_15);

  VAR_12->dis_args[VAR_14].dn_reg = VAR_13->dn_reg;
  FUNC_4(VAR_13, &VAR_12->dis_args[VAR_14], VAR_10, VAR_11);
  VAR_12->dis_args[VAR_14].dn_reg = -1;

  if (VAR_15.dtdt_flags & VAR_4) {
   VAR_17 = VAR_1;
   if (VAR_15.dtdt_size != 0) {
    VAR_18 = FUNC_7(VAR_11);
    FUNC_3(VAR_10, VAR_18, VAR_15.dtdt_size);
   } else {
    VAR_18 = VAR_3;
   }
  } else {
   VAR_17 = VAR_2;
   VAR_18 = VAR_3;
  }

  VAR_16 = FUNC_0(VAR_17, VAR_15.dtdt_kind, VAR_18, VAR_13->dn_reg);
  FUNC_5(VAR_10, FUNC_2(VAR_5, VAR_16));
  FUNC_8(VAR_11, VAR_13->dn_reg);

  if (VAR_18 != VAR_3)
   FUNC_8(VAR_11, VAR_18);
 }

 if (VAR_14 > VAR_7->pcb_hdl->dt_conf.dtc_diftupregs)
  FUNC_9(VAR_7->pcb_jmpbuf, VAR_6);
}
