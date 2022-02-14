
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dn_link; } ;
typedef TYPE_1__ dt_node_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(dt_node_t **VAR_0)
{
 dt_node_t *VAR_1, *VAR_2;

 for (VAR_1 = (VAR_0 != ((void*)0) ? *VAR_0 : ((void*)0)); VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->dn_link;
  FUNC_0(VAR_1);
 }

 for (VAR_1 = (VAR_0 != ((void*)0) ? *VAR_0 : ((void*)0)); VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->dn_link;
  FUNC_1(VAR_1);
 }

 if (VAR_0 != ((void*)0))
  *VAR_0 = ((void*)0);
}
