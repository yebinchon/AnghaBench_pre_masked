
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {uintptr_t dtad_uarg; TYPE_2__* dtsd_ecbdesc; struct TYPE_7__* dtsd_strdata; int * dtsd_fmtdata; struct TYPE_7__* dtad_next; int dtad_difo; struct TYPE_7__* dtsd_action; struct TYPE_7__* dtsd_action_last; } ;
typedef TYPE_1__ dtrace_stmtdesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_8__ {TYPE_1__* dted_action; } ;
typedef TYPE_2__ dtrace_ecbdesc_t ;
typedef TYPE_1__ dtrace_actdesc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(dtrace_hdl_t *VAR_0, dtrace_stmtdesc_t *VAR_1)
{
 dtrace_ecbdesc_t *VAR_2 = VAR_1->dtsd_ecbdesc;





 if (VAR_1->dtsd_action != ((void*)0)) {
  dtrace_actdesc_t *VAR_3 = VAR_1->dtsd_action_last;
  dtrace_actdesc_t *VAR_4, *VAR_5;

  FUNC_0(VAR_3 != ((void*)0));

  for (VAR_4 = VAR_2->dted_action; VAR_4 != ((void*)0); VAR_4 = VAR_4->dtad_next) {
   if (VAR_4 == VAR_1->dtsd_action)
    break;

   if (VAR_4->dtad_next == VAR_1->dtsd_action)
    break;
  }

  FUNC_0(VAR_4 != ((void*)0));

  if (VAR_4 == VAR_2->dted_action)
   VAR_2->dted_action = VAR_3->dtad_next;
  else
   VAR_4->dtad_next = VAR_3->dtad_next;





  VAR_3->dtad_next = ((void*)0);

  for (VAR_4 = VAR_1->dtsd_action; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
   FUNC_0(VAR_4->dtad_uarg == (uintptr_t)VAR_1);
   FUNC_1(VAR_0, VAR_4->dtad_difo);
   VAR_5 = VAR_4->dtad_next;
   FUNC_3(VAR_0, VAR_4);
  }
 }

 if (VAR_1->dtsd_fmtdata != ((void*)0))
  FUNC_4(VAR_1->dtsd_fmtdata);
 FUNC_3(VAR_0, VAR_1->dtsd_strdata);

 FUNC_2(VAR_0, VAR_1->dtsd_ecbdesc);
 FUNC_3(VAR_0, VAR_1);
}
