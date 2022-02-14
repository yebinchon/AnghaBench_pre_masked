
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dts_necbs; TYPE_2__** dts_ecbs; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_epid_t ;
struct TYPE_6__ {int dte_epid; } ;
typedef TYPE_2__ dtrace_ecb_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static dtrace_ecb_t *
FUNC_2(dtrace_state_t *VAR_1, dtrace_epid_t VAR_2)
{
 dtrace_ecb_t *VAR_3;

 FUNC_0(FUNC_1(&VAR_0));

 if (VAR_2 == 0 || VAR_2 > VAR_1->dts_necbs)
  return (((void*)0));

 FUNC_0(VAR_1->dts_necbs > 0 && VAR_1->dts_ecbs != ((void*)0));
 FUNC_0((VAR_3 = VAR_1->dts_ecbs[VAR_2 - 1]) == ((void*)0) || VAR_3->dte_epid == VAR_2);

 return (VAR_1->dts_ecbs[VAR_2 - 1]);
}
