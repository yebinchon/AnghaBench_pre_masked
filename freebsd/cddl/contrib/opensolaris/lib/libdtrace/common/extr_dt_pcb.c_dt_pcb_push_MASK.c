
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dt_gen; TYPE_2__* dt_pcb; int dt_globals; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_9__ {struct TYPE_9__* pcb_prev; TYPE_1__* pcb_hdl; int pcb_ir; int pcb_globals; int pcb_dstack; } ;
typedef TYPE_2__ dt_pcb_t ;
struct TYPE_10__ {scalar_t__ pcb_yystate; TYPE_1__* pcb_hdl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_3__* VAR_1 ;

void
FUNC_6(dtrace_hdl_t *VAR_2, dt_pcb_t *VAR_3)
{
 if (VAR_1 != ((void*)0)) {
  FUNC_0(VAR_1->pcb_hdl == VAR_2);
  FUNC_0(VAR_1->pcb_yystate == VAR_0);
 }

 FUNC_1(VAR_3, sizeof (dt_pcb_t));

 FUNC_4(&VAR_3->pcb_dstack);
 FUNC_2(&VAR_3->pcb_globals, VAR_2->dt_globals);
 FUNC_3(&VAR_3->pcb_ir);

 VAR_3->pcb_hdl = VAR_2;
 VAR_3->pcb_prev = VAR_2->dt_pcb;

 VAR_2->dt_pcb = VAR_3;
 VAR_2->dt_gen++;

 FUNC_5(VAR_3);
}
