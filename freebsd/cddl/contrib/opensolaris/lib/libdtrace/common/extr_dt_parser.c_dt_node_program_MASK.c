
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

dt_node_t *
FUNC_1(dt_node_t *VAR_1)
{
 dt_node_t *VAR_2 = FUNC_0(VAR_0);
 VAR_2->dn_list = VAR_1;
 return (VAR_2);
}
