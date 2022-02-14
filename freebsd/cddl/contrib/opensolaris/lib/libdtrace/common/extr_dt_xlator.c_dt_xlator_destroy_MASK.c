
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_10__ {int dt_xlators; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_11__ {size_t dx_nmembers; struct TYPE_11__* dx_membdif; int * dx_ident; int * dx_locals; int dx_nodes; } ;
typedef TYPE_2__ dt_xlator_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(dtrace_hdl_t *VAR_0, dt_xlator_t *VAR_1)
{
 uint_t VAR_2;

 FUNC_5(&VAR_1->dx_nodes);

 if (VAR_1->dx_locals != ((void*)0))
  FUNC_3(VAR_1->dx_locals);
 else if (VAR_1->dx_ident != ((void*)0))
  FUNC_2(VAR_1->dx_ident);

 for (VAR_2 = 0; VAR_2 < VAR_1->dx_nmembers; VAR_2++)
  FUNC_0(VAR_0, VAR_1->dx_membdif[VAR_2]);

 FUNC_1(VAR_0, VAR_1->dx_membdif);
 FUNC_4(&VAR_0->dt_xlators, VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
