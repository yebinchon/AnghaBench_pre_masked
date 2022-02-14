
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* dn_acts; struct TYPE_7__* dn_pred; struct TYPE_7__* dn_pdescs; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

dt_node_t *
FUNC_1(dt_node_t *VAR_1, dt_node_t *VAR_2, dt_node_t *VAR_3)
{
 dt_node_t *VAR_4 = FUNC_0(VAR_0);

 VAR_4->dn_pdescs = VAR_1;
 VAR_4->dn_pred = VAR_2;
 VAR_4->dn_acts = VAR_3;

 return (VAR_4);
}
