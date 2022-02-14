
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int dt_regset_t ;
struct TYPE_5__ {int dn_reg; TYPE_2__* dn_left; TYPE_2__* dn_right; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_6__ {int dn_reg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int ,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static void
FUNC_10(dt_node_t *VAR_6, dt_irlist_t *VAR_7, dt_regset_t *VAR_8, uint_t VAR_9)
{
 uint_t VAR_10 = FUNC_7(VAR_7);
 uint_t VAR_11 = FUNC_7(VAR_7);

 dif_instr_t VAR_12;
 uint_t VAR_13;

 FUNC_3(VAR_6->dn_left, VAR_7, VAR_8);
 FUNC_3(VAR_6->dn_right, VAR_7, VAR_8);

 if (FUNC_8(VAR_6->dn_left) || FUNC_8(VAR_6->dn_right))
  VAR_13 = VAR_3;
 else
  VAR_13 = VAR_2;

 VAR_12 = FUNC_1(VAR_13, VAR_6->dn_left->dn_reg, VAR_6->dn_right->dn_reg);
 FUNC_6(VAR_7, FUNC_4(VAR_5, VAR_12));
 FUNC_9(VAR_8, VAR_6->dn_right->dn_reg);
 VAR_6->dn_reg = VAR_6->dn_left->dn_reg;

 VAR_12 = FUNC_0(VAR_9, VAR_10);
 FUNC_6(VAR_7, FUNC_4(VAR_5, VAR_12));

 VAR_12 = FUNC_2(VAR_4, VAR_6->dn_reg);
 FUNC_6(VAR_7, FUNC_4(VAR_5, VAR_12));

 VAR_12 = FUNC_0(VAR_1, VAR_11);
 FUNC_6(VAR_7, FUNC_4(VAR_5, VAR_12));

 FUNC_5(VAR_7, ((void*)0), VAR_10, VAR_6->dn_reg, 1);
 FUNC_6(VAR_7, FUNC_4(VAR_11, VAR_0));
}
