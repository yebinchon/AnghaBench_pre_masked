
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
typedef int dt_regset_t ;
struct TYPE_7__ {int dn_reg; TYPE_6__* dn_left; TYPE_6__* dn_right; TYPE_6__* dn_expr; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_8__ {void* di_instr; } ;
typedef TYPE_2__ dt_irnode_t ;
typedef int dt_irlist_t ;
typedef void* dif_instr_t ;
struct TYPE_9__ {int dn_reg; } ;


 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 void* VAR_0 ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_6__*,int *,int *) ;
 TYPE_2__* FUNC_4 (int ,void*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(dt_node_t *VAR_5, dt_irlist_t *VAR_6, dt_regset_t *VAR_7)
{
 uint_t VAR_8 = FUNC_6(VAR_6);
 uint_t VAR_9 = FUNC_6(VAR_6);

 dif_instr_t VAR_10;
 dt_irnode_t *VAR_11;

 FUNC_3(VAR_5->dn_expr, VAR_6, VAR_7);
 VAR_10 = FUNC_2(VAR_5->dn_expr->dn_reg);
 FUNC_5(VAR_6, FUNC_4(VAR_4, VAR_10));
 FUNC_7(VAR_7, VAR_5->dn_expr->dn_reg);

 VAR_10 = FUNC_0(VAR_2, VAR_8);
 FUNC_5(VAR_6, FUNC_4(VAR_4, VAR_10));

 FUNC_3(VAR_5->dn_left, VAR_6, VAR_7);
 VAR_10 = FUNC_1(VAR_5->dn_left->dn_reg, VAR_3);
 VAR_11 = FUNC_4(VAR_4, VAR_10);
 FUNC_5(VAR_6, VAR_11);
 FUNC_7(VAR_7, VAR_5->dn_left->dn_reg);

 VAR_10 = FUNC_0(VAR_1, VAR_9);
 FUNC_5(VAR_6, FUNC_4(VAR_4, VAR_10));

 FUNC_5(VAR_6, FUNC_4(VAR_8, VAR_0));
 FUNC_3(VAR_5->dn_right, VAR_6, VAR_7);
 VAR_5->dn_reg = VAR_5->dn_right->dn_reg;






 VAR_11->di_instr = FUNC_1(VAR_5->dn_left->dn_reg, VAR_5->dn_reg);
 FUNC_5(VAR_6, FUNC_4(VAR_9, VAR_0));
}
