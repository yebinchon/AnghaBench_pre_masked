
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int dt_regset_t ;
struct TYPE_4__ {TYPE_2__* dn_left; int dn_reg; TYPE_2__* dn_right; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_5__ {int dn_reg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(dt_node_t *VAR_4, dt_irlist_t *VAR_5, dt_regset_t *VAR_6)
{
 uint_t VAR_7 = FUNC_7(VAR_5);
 uint_t VAR_8 = FUNC_7(VAR_5);

 dif_instr_t VAR_9;

 FUNC_3(VAR_4->dn_left, VAR_5, VAR_6);
 VAR_9 = FUNC_2(VAR_4->dn_left->dn_reg);
 FUNC_6(VAR_5, FUNC_4(VAR_3, VAR_9));

 VAR_9 = FUNC_0(VAR_1, VAR_7);
 FUNC_6(VAR_5, FUNC_4(VAR_3, VAR_9));
 FUNC_5(VAR_5, VAR_4->dn_left->dn_reg, 1);

 FUNC_6(VAR_5, FUNC_4(VAR_7, VAR_0));
 FUNC_3(VAR_4->dn_right, VAR_5, VAR_6);

 VAR_9 = FUNC_2(VAR_4->dn_right->dn_reg);
 FUNC_6(VAR_5, FUNC_4(VAR_3, VAR_9));

 VAR_9 = FUNC_0(VAR_1, VAR_8);
 FUNC_6(VAR_5, FUNC_4(VAR_3, VAR_9));
 FUNC_5(VAR_5, VAR_4->dn_right->dn_reg, 1);

 VAR_9 = FUNC_1(VAR_2, VAR_4->dn_left->dn_reg,
     VAR_4->dn_right->dn_reg, VAR_4->dn_left->dn_reg);

 FUNC_6(VAR_5, FUNC_4(VAR_8, VAR_9));

 FUNC_8(VAR_6, VAR_4->dn_right->dn_reg);
 VAR_4->dn_reg = VAR_4->dn_left->dn_reg;
}
