
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* dtsd_action_last; TYPE_3__* dtsd_action; TYPE_2__* dtsd_ecbdesc; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_9__ {TYPE_3__* dted_action; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;
struct TYPE_10__ {uintptr_t dtad_uarg; struct TYPE_10__* dtad_next; } ;
typedef TYPE_3__ dtrace_actdesc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (int *,int) ;

dtrace_actdesc_t *
FUNC_3(dtrace_hdl_t *VAR_0, dtrace_stmtdesc_t *VAR_1)
{
 dtrace_actdesc_t *VAR_2;
 dtrace_ecbdesc_t *VAR_3 = VAR_1->dtsd_ecbdesc;

 if ((VAR_2 = FUNC_2(VAR_0, sizeof (dtrace_actdesc_t))) == ((void*)0))
  return (((void*)0));

 if (VAR_1->dtsd_action_last != ((void*)0)) {
  FUNC_0(VAR_1->dtsd_action != ((void*)0));
  FUNC_0(VAR_1->dtsd_action_last->dtad_next == ((void*)0));
  VAR_1->dtsd_action_last->dtad_next = VAR_2;
 } else {
  dtrace_actdesc_t *VAR_4 = VAR_3->dted_action;

  FUNC_0(VAR_1->dtsd_action == ((void*)0));
  VAR_1->dtsd_action = VAR_2;

  while (VAR_4 != ((void*)0) && VAR_4->dtad_next != ((void*)0))
   VAR_4 = VAR_4->dtad_next;

  if (VAR_4 == ((void*)0))
   VAR_3->dted_action = VAR_2;
  else
   VAR_4->dtad_next = VAR_2;
 }

 VAR_1->dtsd_action_last = VAR_2;
 FUNC_1(VAR_2, sizeof (dtrace_actdesc_t));
 VAR_2->dtad_uarg = (uintptr_t)VAR_1;

 return (VAR_2);
}
