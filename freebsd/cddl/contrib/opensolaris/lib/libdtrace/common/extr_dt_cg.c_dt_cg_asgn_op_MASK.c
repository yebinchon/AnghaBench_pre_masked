
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_25__ {TYPE_2__* dx_ident; int dx_dst_ctfp; int dx_dst_base; TYPE_4__* dx_members; } ;
typedef TYPE_3__ dt_xlator_t ;
typedef int dt_regset_t ;
struct TYPE_26__ {scalar_t__ dn_kind; int dn_reg; int dn_flags; struct TYPE_26__* dn_left; int dn_args; int dn_ident; struct TYPE_26__* dn_right; int dn_membname; int dn_string; struct TYPE_26__* dn_membexpr; struct TYPE_26__* dn_list; int dn_op; } ;
typedef TYPE_4__ dt_node_t ;
typedef int dt_irlist_t ;
struct TYPE_27__ {scalar_t__ di_kind; int di_id; int di_flags; TYPE_3__* di_data; } ;
typedef TYPE_5__ dt_ident_t ;
typedef int dif_instr_t ;
struct TYPE_28__ {int ctm_offset; } ;
typedef TYPE_6__ ctf_membinfo_t ;
struct TYPE_29__ {int pcb_jmpbuf; TYPE_1__* pcb_hdl; } ;
struct TYPE_24__ {int di_id; int di_flags; } ;
struct TYPE_23__ {int dt_ctferr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,TYPE_6__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,int *,int *) ;
 int FUNC_9 (TYPE_4__*,int *,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (TYPE_4__*,int *,int *,TYPE_4__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_4__*,int *,int *) ;
 TYPE_5__* FUNC_15 (int ) ;
 int FUNC_16 (int *,int ) ;
 TYPE_5__* FUNC_17 (TYPE_4__*,int ) ;
 int FUNC_18 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ,int ) ;
 TYPE_7__* VAR_17 ;

__attribute__((used)) static void
FUNC_22(dt_node_t *VAR_18, dt_irlist_t *VAR_19, dt_regset_t *VAR_20)
{
 dif_instr_t VAR_21;
 dt_ident_t *VAR_22;







 if ((VAR_22 = FUNC_17(VAR_18->dn_right, VAR_3)) != ((void*)0)) {
  ctf_membinfo_t VAR_23;
  dt_xlator_t *VAR_24 = VAR_22->di_data;
  dt_node_t *VAR_25, VAR_26, VAR_27;
  int VAR_28, VAR_29;







  FUNC_4(&VAR_26, sizeof (dt_node_t));
  VAR_26.dn_kind = VAR_11;
  VAR_26.dn_op = VAR_13;
  VAR_26.dn_left = VAR_18;
  VAR_26.dn_right = &VAR_27;

  FUNC_4(&VAR_27, sizeof (dt_node_t));
  VAR_27.dn_kind = VAR_10;
  VAR_27.dn_op = VAR_14;






  VAR_28 = FUNC_19(VAR_20);
  FUNC_11(VAR_19, VAR_28,
      FUNC_7(VAR_24->dx_dst_ctfp, VAR_24->dx_dst_base));

  VAR_21 = FUNC_0(VAR_28, VAR_28);
  FUNC_16(VAR_19, FUNC_10(VAR_6, VAR_21));







  VAR_24->dx_ident->di_flags |= VAR_4;
  VAR_24->dx_ident->di_id = VAR_18->dn_right->dn_reg;

  for (VAR_25 = VAR_24->dx_members; VAR_25 != ((void*)0); VAR_25 = VAR_25->dn_list) {




   FUNC_9(VAR_25->dn_membexpr, VAR_19, VAR_20);
   VAR_25->dn_reg = VAR_25->dn_membexpr->dn_reg;
   FUNC_14(VAR_25->dn_membexpr, VAR_25, VAR_19, VAR_20);






   if (FUNC_6(VAR_24->dx_dst_ctfp, VAR_24->dx_dst_base,
       VAR_25->dn_membname, &VAR_23) == VAR_0) {
    VAR_17->pcb_hdl->dt_ctferr =
        FUNC_5(VAR_24->dx_dst_ctfp);
    FUNC_21(VAR_17->pcb_jmpbuf, VAR_15);
   }







   if (VAR_23.ctm_offset != 0) {
    VAR_29 = FUNC_19(VAR_20);







    FUNC_11(VAR_19, VAR_29, VAR_23.ctm_offset / VAR_16);
    VAR_21 = FUNC_1(VAR_1, VAR_28, VAR_29, VAR_29);
    FUNC_16(VAR_19,
        FUNC_10(VAR_6, VAR_21));

    FUNC_18(VAR_25, &VAR_26);
    VAR_26.dn_right->dn_string = VAR_25->dn_membname;
    VAR_26.dn_reg = VAR_29;

    FUNC_12(VAR_25, VAR_19, VAR_20, &VAR_26);
    FUNC_20(VAR_20, VAR_29);

   } else {
    FUNC_18(VAR_25, &VAR_26);
    VAR_26.dn_right->dn_string = VAR_25->dn_membname;
    VAR_26.dn_reg = VAR_28;

    FUNC_12(VAR_25, VAR_19, VAR_20, &VAR_26);
   }

   FUNC_20(VAR_20, VAR_25->dn_reg);
  }

  VAR_24->dx_ident->di_flags &= ~VAR_4;
  VAR_24->dx_ident->di_id = 0;

  if (VAR_18->dn_right->dn_reg != -1)
   FUNC_20(VAR_20, VAR_18->dn_right->dn_reg);

  FUNC_3(VAR_18->dn_reg == VAR_18->dn_right->dn_reg);
  VAR_18->dn_reg = VAR_28;
 }
 if (VAR_18->dn_left->dn_kind == VAR_12) {
  VAR_22 = FUNC_15(VAR_18->dn_left->dn_ident);

  if (VAR_22->di_kind == VAR_2)
   FUNC_8(VAR_22, VAR_18->dn_left->dn_args, VAR_19, VAR_20);

  VAR_22->di_flags |= VAR_5;
  VAR_21 = FUNC_2(FUNC_13(VAR_22),
      VAR_22->di_id, VAR_18->dn_reg);
  FUNC_16(VAR_19, FUNC_10(VAR_6, VAR_21));
 } else {
  uint_t VAR_30 = VAR_18->dn_left->dn_flags & VAR_8;

  FUNC_3(VAR_18->dn_left->dn_flags & VAR_9);
  FUNC_3(VAR_18->dn_left->dn_flags & VAR_7);

  VAR_18->dn_left->dn_flags |= VAR_8;

  FUNC_9(VAR_18->dn_left, VAR_19, VAR_20);
  FUNC_12(VAR_18, VAR_19, VAR_20, VAR_18->dn_left);
  FUNC_20(VAR_20, VAR_18->dn_left->dn_reg);

  VAR_18->dn_left->dn_flags &= ~VAR_8;
  VAR_18->dn_left->dn_flags |= VAR_30;
 }
}
