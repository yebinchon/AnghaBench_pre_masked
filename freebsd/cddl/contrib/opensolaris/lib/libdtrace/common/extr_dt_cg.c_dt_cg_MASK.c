
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_3__* dx_ident; } ;
typedef TYPE_4__ dt_xlator_t ;
struct TYPE_18__ {int * pcb_regs; int pcb_ir; TYPE_6__* pcb_dret; int pcb_jmpbuf; int * pcb_strtab; int * pcb_inttab; TYPE_2__* pcb_hdl; } ;
typedef TYPE_5__ dt_pcb_t ;
struct TYPE_19__ {scalar_t__ dn_kind; int dn_reg; struct TYPE_19__* dn_membexpr; TYPE_4__* dn_membxlator; } ;
typedef TYPE_6__ dt_node_t ;
typedef int dt_ident_t ;
typedef int dif_instr_t ;
struct TYPE_20__ {int pcb_hdl; } ;
struct TYPE_16__ {int di_id; int di_flags; } ;
struct TYPE_14__ {int dtc_difintregs; } ;
struct TYPE_15__ {TYPE_1__ dt_conf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,int ,char*) ;
 int FUNC_3 (TYPE_6__*,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_6__*,int *,int *,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_6__*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 TYPE_7__* VAR_8 ;

void
FUNC_20(dt_pcb_t *VAR_9, dt_node_t *VAR_10)
{
 dif_instr_t VAR_11;
 dt_xlator_t *VAR_12;
 dt_ident_t *VAR_13;

 if (VAR_9->pcb_regs == ((void*)0) && (VAR_9->pcb_regs =
     FUNC_14(VAR_9->pcb_hdl->dt_conf.dtc_difintregs)) == ((void*)0))
  FUNC_19(VAR_9->pcb_jmpbuf, VAR_7);

 FUNC_16(VAR_9->pcb_regs);
 (void) FUNC_12(VAR_9->pcb_regs);

 if (VAR_9->pcb_inttab != ((void*)0))
  FUNC_7(VAR_9->pcb_inttab);

 if ((VAR_9->pcb_inttab = FUNC_6(VAR_8->pcb_hdl)) == ((void*)0))
  FUNC_19(VAR_9->pcb_jmpbuf, VAR_7);

 if (VAR_9->pcb_strtab != ((void*)0))
  FUNC_18(VAR_9->pcb_strtab);

 if ((VAR_9->pcb_strtab = FUNC_17(VAR_0)) == ((void*)0))
  FUNC_19(VAR_9->pcb_jmpbuf, VAR_7);

 FUNC_10(&VAR_9->pcb_ir);
 FUNC_9(&VAR_9->pcb_ir);

 FUNC_1(VAR_9->pcb_dret == ((void*)0));
 VAR_9->pcb_dret = VAR_10;

 if (FUNC_11(VAR_10, VAR_1) != ((void*)0)) {
  FUNC_2(VAR_10, VAR_6, "expression cannot evaluate to result "
      "of a translated pointer\n");
 }





 if (VAR_10->dn_kind == VAR_5) {
  VAR_12 = VAR_10->dn_membxlator;
  VAR_10 = VAR_10->dn_membexpr;

  VAR_12->dx_ident->di_flags |= VAR_3;
  VAR_12->dx_ident->di_id = FUNC_12(VAR_9->pcb_regs);
 }

 FUNC_3(VAR_10, &VAR_9->pcb_ir, VAR_9->pcb_regs);

 if ((VAR_13 = FUNC_11(VAR_10, VAR_2)) != ((void*)0)) {
  int VAR_14 = FUNC_5(VAR_10, VAR_13,
      &VAR_9->pcb_ir, VAR_9->pcb_regs);
  FUNC_15(VAR_9->pcb_regs, VAR_10->dn_reg);
  VAR_10->dn_reg = VAR_14;
 }

 VAR_11 = FUNC_0(VAR_10->dn_reg);
 FUNC_15(VAR_9->pcb_regs, VAR_10->dn_reg);
 FUNC_8(&VAR_9->pcb_ir, FUNC_4(VAR_4, VAR_11));

 if (VAR_10->dn_kind == VAR_5) {
  FUNC_15(VAR_9->pcb_regs, VAR_12->dx_ident->di_id);
  VAR_12->dx_ident->di_id = 0;
  VAR_12->dx_ident->di_flags &= ~VAR_3;
 }

 FUNC_15(VAR_9->pcb_regs, 0);
 FUNC_13(VAR_9->pcb_regs);
}
