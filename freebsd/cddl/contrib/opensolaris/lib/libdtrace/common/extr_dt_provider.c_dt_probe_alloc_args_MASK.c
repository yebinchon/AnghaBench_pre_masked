
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pv_nodes; int pv_hdl; } ;
typedef TYPE_1__ dt_provider_t ;
struct TYPE_7__ {struct TYPE_7__* dn_list; struct TYPE_7__* dn_link; } ;
typedef TYPE_2__ dt_node_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;

__attribute__((used)) static dt_node_t *
FUNC_1(dt_provider_t *VAR_1, int VAR_2)
{
 dt_node_t *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_4 = VAR_5) {
  if ((VAR_5 = FUNC_0(VAR_1->pv_hdl, VAR_0)) == ((void*)0))
   return (((void*)0));

  VAR_5->dn_link = VAR_1->pv_nodes;
  VAR_1->pv_nodes = VAR_5;

  if (VAR_3 == ((void*)0))
   VAR_3 = VAR_5;
  else
   VAR_4->dn_list = VAR_5;
 }

 return (VAR_3);
}
