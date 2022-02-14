
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dn_kind; scalar_t__ dn_value; struct TYPE_7__* dn_right; struct TYPE_7__* dn_left; struct TYPE_7__* dn_expr; int dn_op; } ;
typedef TYPE_1__ dt_node_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

dt_node_t *
FUNC_1(dt_node_t *VAR_3, dt_node_t *VAR_4, dt_node_t *VAR_5)
{
 dt_node_t *VAR_6;

 if (VAR_3->dn_kind == VAR_0)
  return (VAR_3->dn_value != 0 ? VAR_4 : VAR_5);

 VAR_6 = FUNC_0(VAR_1);
 VAR_6->dn_op = VAR_2;
 VAR_6->dn_expr = VAR_3;
 VAR_6->dn_left = VAR_4;
 VAR_6->dn_right = VAR_5;

 return (VAR_6);
}
