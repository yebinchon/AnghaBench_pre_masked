
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_5__ {struct TYPE_5__* dn_list; struct TYPE_5__* dn_pdescs; } ;
typedef TYPE_1__ dt_node_t ;


 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(dtrace_hdl_t *VAR_0, dt_node_t *VAR_1)
{
 dt_node_t *VAR_2;

 for (VAR_2 = VAR_1->dn_pdescs; VAR_2 != ((void*)0); VAR_2 = VAR_2->dn_list)
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
