
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(dt_node_t **VAR_0)
{
 dt_node_t *VAR_1, *VAR_2;

 for (VAR_1 = (VAR_0 != ((void*)0) ? *VAR_0 : ((void*)0)); VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->dn_list;
  FUNC_0(VAR_1);
 }

 if (VAR_0 != ((void*)0))
  *VAR_0 = ((void*)0);
}
