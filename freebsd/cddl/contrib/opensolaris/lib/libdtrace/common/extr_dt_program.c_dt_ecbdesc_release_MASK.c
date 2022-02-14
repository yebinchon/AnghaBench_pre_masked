
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_5__ {int dtpdd_difo; } ;
struct TYPE_6__ {scalar_t__ dted_refcnt; int * dted_action; TYPE_1__ dted_pred; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

void
FUNC_3(dtrace_hdl_t *VAR_0, dtrace_ecbdesc_t *VAR_1)
{
 if (--VAR_1->dted_refcnt > 0)
  return;

 FUNC_1(VAR_0, VAR_1->dted_pred.dtpdd_difo);
 FUNC_0(VAR_1->dted_action == ((void*)0));
 FUNC_2(VAR_0, VAR_1);
}
