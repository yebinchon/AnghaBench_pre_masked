
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint_t ;
typedef int ssize_t ;
typedef int dt_regset_t ;
struct TYPE_12__ {int dn_reg; TYPE_1__* dn_left; TYPE_8__* dn_child; int dn_type; int * dn_ctfp; } ;
typedef TYPE_2__ dt_node_t ;
typedef int dt_irlist_t ;
struct TYPE_13__ {int di_id; int di_flags; } ;
typedef TYPE_3__ dt_ident_t ;
typedef int dif_instr_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_14__ {int dn_reg; scalar_t__ dn_kind; int dn_flags; int dn_ident; } ;
struct TYPE_11__ {int dn_flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_8__*,int *,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (TYPE_2__*,int *,int *,TYPE_8__*) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_3__* FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;

__attribute__((used)) static void
FUNC_17(dt_node_t *VAR_7, dt_irlist_t *VAR_8,
    dt_regset_t *VAR_9, uint_t VAR_10)
{
 ctf_file_t *VAR_11 = VAR_7->dn_ctfp;
 dif_instr_t VAR_12;
 ctf_id_t VAR_13;
 ssize_t VAR_14 = 1;
 int VAR_15;

 if (FUNC_14(VAR_7)) {
  VAR_13 = FUNC_5(VAR_11, VAR_7->dn_type);
  FUNC_2(FUNC_3(VAR_11, VAR_13) == VAR_0);
  VAR_14 = FUNC_6(VAR_11, FUNC_4(VAR_11, VAR_13));
 }

 FUNC_7(VAR_7->dn_child, VAR_8, VAR_9);
 VAR_7->dn_reg = VAR_7->dn_child->dn_reg;

 VAR_15 = FUNC_15(VAR_9);
 FUNC_9(VAR_8, VAR_15, VAR_14);
 VAR_12 = FUNC_0(VAR_10, VAR_7->dn_reg, VAR_15, VAR_15);
 FUNC_13(VAR_8, FUNC_8(VAR_2, VAR_12));
 if (VAR_7->dn_child->dn_kind == VAR_6) {
  dt_ident_t *VAR_16 = FUNC_12(VAR_7->dn_child->dn_ident);

  VAR_16->di_flags |= VAR_1;
  VAR_12 = FUNC_1(FUNC_11(VAR_16), VAR_16->di_id, VAR_15);
  FUNC_13(VAR_8, FUNC_8(VAR_2, VAR_12));
 } else {
  uint_t VAR_17 = VAR_7->dn_child->dn_flags & VAR_4;
  int VAR_18 = VAR_7->dn_reg;

  FUNC_2(VAR_7->dn_child->dn_flags & VAR_5);
  FUNC_2(VAR_7->dn_child->dn_flags & VAR_3);

  VAR_7->dn_child->dn_flags |= VAR_4;
  FUNC_7(VAR_7->dn_child, VAR_8, VAR_9);

  VAR_7->dn_reg = VAR_15;
  FUNC_10(VAR_7, VAR_8, VAR_9, VAR_7->dn_child);
  VAR_7->dn_reg = VAR_18;

  FUNC_16(VAR_9, VAR_7->dn_child->dn_reg);
  VAR_7->dn_left->dn_flags &= ~VAR_4;
  VAR_7->dn_left->dn_flags |= VAR_17;
 }

 FUNC_16(VAR_9, VAR_15);
}
