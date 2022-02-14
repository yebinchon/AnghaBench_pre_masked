
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dtrace_state_t ;
struct TYPE_8__ {scalar_t__ dtpr_gen; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_9__ {scalar_t__ dten_probegen; TYPE_1__* dten_vstate; } ;
typedef TYPE_3__ dtrace_enabling_t ;
typedef int dtrace_ecb_t ;
struct TYPE_7__ {int * dtvs_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(dtrace_probe_t *VAR_2, void *VAR_3)
{
 dtrace_ecb_t *VAR_4;
 dtrace_enabling_t *VAR_5 = VAR_3;
 dtrace_state_t *VAR_6 = VAR_5->dten_vstate->dtvs_state;

 FUNC_0(VAR_6 != ((void*)0));

 if (VAR_2 != ((void*)0) && VAR_2->dtpr_gen < VAR_5->dten_probegen) {





  return (VAR_1);
 }

 if ((VAR_4 = FUNC_1(VAR_6, VAR_2, VAR_5)) == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_4);
 return (VAR_1);
}
