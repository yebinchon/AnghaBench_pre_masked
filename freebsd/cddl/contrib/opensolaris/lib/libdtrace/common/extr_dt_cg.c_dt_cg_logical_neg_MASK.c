
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint_t ;
typedef int dt_regset_t ;
struct TYPE_4__ {int dn_reg; TYPE_2__* dn_child; } ;
typedef TYPE_1__ dt_node_t ;
typedef int dt_irlist_t ;
typedef int dif_instr_t ;
struct TYPE_5__ {int dn_reg; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *,int ,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(dt_node_t *VAR_5, dt_irlist_t *VAR_6, dt_regset_t *VAR_7)
{
 uint_t VAR_8 = FUNC_7(VAR_6);
 uint_t VAR_9 = FUNC_7(VAR_6);

 dif_instr_t VAR_10;

 FUNC_3(VAR_5->dn_child, VAR_6, VAR_7);
 VAR_5->dn_reg = VAR_5->dn_child->dn_reg;

 VAR_10 = FUNC_2(VAR_5->dn_reg);
 FUNC_6(VAR_6, FUNC_4(VAR_4, VAR_10));

 VAR_10 = FUNC_0(VAR_2, VAR_8);
 FUNC_6(VAR_6, FUNC_4(VAR_4, VAR_10));

 VAR_10 = FUNC_1(VAR_3, VAR_5->dn_reg);
 FUNC_6(VAR_6, FUNC_4(VAR_4, VAR_10));

 VAR_10 = FUNC_0(VAR_1, VAR_9);
 FUNC_6(VAR_6, FUNC_4(VAR_4, VAR_10));

 FUNC_5(VAR_6, ((void*)0), VAR_8, VAR_5->dn_reg, 1);
 FUNC_6(VAR_6, FUNC_4(VAR_9, VAR_0));
}
