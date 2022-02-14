
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;



dt_node_t *
FUNC_0(dt_node_t *VAR_0, dt_node_t *VAR_1)
{
 dt_node_t *VAR_2;

 if (VAR_0 == ((void*)0))
  return (VAR_1);
 else if (VAR_1 == ((void*)0))
  return (VAR_0);

 for (VAR_2 = VAR_0; VAR_2->dn_list != ((void*)0); VAR_2 = VAR_2->dn_list)
  continue;

 VAR_2->dn_list = VAR_1;
 return (VAR_0);
}
