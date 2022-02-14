
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint_t ;
typedef int dt_regset_t ;
struct TYPE_6__ {scalar_t__ dn_op; int dn_reg; struct TYPE_6__* dn_right; struct TYPE_6__* dn_left; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(dt_node_t *VAR_7, dt_irlist_t *VAR_8,
    dt_regset_t *VAR_9, uint_t VAR_10)
{
 int VAR_11 = (VAR_7->dn_op == VAR_3 || VAR_7->dn_op == VAR_5 ||
     VAR_7->dn_op == VAR_4 || VAR_7->dn_op == VAR_6);

 int VAR_12 = FUNC_6(VAR_7->dn_left);
 int VAR_13 = FUNC_6(VAR_7->dn_right);

 dif_instr_t VAR_14;

 if (VAR_12 && VAR_13) {
  FUNC_1(VAR_7->dn_op == VAR_5);
  VAR_11 = 0;
 }

 FUNC_2(VAR_7->dn_left, VAR_8, VAR_9);
 if (VAR_11 && VAR_13)
  FUNC_4(VAR_7, VAR_8, VAR_9, VAR_0, VAR_7->dn_left->dn_reg);

 FUNC_2(VAR_7->dn_right, VAR_8, VAR_9);
 if (VAR_11 && VAR_12)
  FUNC_4(VAR_7, VAR_8, VAR_9, VAR_0, VAR_7->dn_right->dn_reg);

 VAR_14 = FUNC_0(VAR_10, VAR_7->dn_left->dn_reg,
     VAR_7->dn_right->dn_reg, VAR_7->dn_left->dn_reg);

 FUNC_5(VAR_8, FUNC_3(VAR_2, VAR_14));
 FUNC_7(VAR_9, VAR_7->dn_right->dn_reg);
 VAR_7->dn_reg = VAR_7->dn_left->dn_reg;

 if (VAR_12 && VAR_13)
  FUNC_4(VAR_7->dn_right,
      VAR_8, VAR_9, VAR_1, VAR_7->dn_reg);
}
