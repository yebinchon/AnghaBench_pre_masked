
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ dts_nretained; } ;
typedef TYPE_2__ dtrace_state_t ;
struct TYPE_9__ {TYPE_1__* dten_vstate; struct TYPE_9__* dten_next; } ;
typedef TYPE_3__ dtrace_enabling_t ;
struct TYPE_7__ {TYPE_2__* dtvs_state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(dtrace_state_t *VAR_2)
{
 dtrace_enabling_t *VAR_3, *VAR_4;

 FUNC_0(FUNC_1(&VAR_0));





 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
  VAR_4 = VAR_3->dten_next;





  FUNC_0(VAR_3->dten_vstate->dtvs_state != ((void*)0));

  if (VAR_3->dten_vstate->dtvs_state == VAR_2) {
   FUNC_0(VAR_2->dts_nretained > 0);
   FUNC_2(VAR_3);
  }
 }

 FUNC_0(VAR_2->dts_nretained == 0);
}
