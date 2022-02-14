
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_vstate_t ;
struct TYPE_8__ {TYPE_3__** dts_ecbs; int dts_vstate; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef int dtrace_predicate_t ;
typedef int dtrace_epid_t ;
struct TYPE_9__ {int dte_epid; int * dte_predicate; TYPE_1__* dte_probe; int * dte_next; TYPE_2__* dte_state; } ;
typedef TYPE_3__ dtrace_ecb_t ;
struct TYPE_7__ {TYPE_3__* dtpr_ecb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_5(dtrace_ecb_t *VAR_1)
{
 dtrace_state_t *VAR_2 = VAR_1->dte_state;
 dtrace_vstate_t *VAR_3 = &VAR_2->dts_vstate;
 dtrace_predicate_t *VAR_4;
 dtrace_epid_t VAR_5 = VAR_1->dte_epid;

 FUNC_0(FUNC_1(&VAR_0));
 FUNC_0(VAR_1->dte_next == ((void*)0));
 FUNC_0(VAR_1->dte_probe == ((void*)0) || VAR_1->dte_probe->dtpr_ecb != VAR_1);

 if ((VAR_4 = VAR_1->dte_predicate) != ((void*)0))
  FUNC_3(VAR_4, VAR_3);

 FUNC_2(VAR_1);

 FUNC_0(VAR_2->dts_ecbs[VAR_5 - 1] == VAR_1);
 VAR_2->dts_ecbs[VAR_5 - 1] = ((void*)0);

 FUNC_4(VAR_1, sizeof (dtrace_ecb_t));
}
