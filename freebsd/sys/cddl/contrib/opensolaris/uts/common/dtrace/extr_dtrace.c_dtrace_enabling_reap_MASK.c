
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hrtime_t ;
struct TYPE_8__ {scalar_t__ dts_speculates; int * dts_aggbuffer; int * dts_buffer; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_9__ {int dtpv_defunct; } ;
typedef TYPE_2__ dtrace_provider_t ;
struct TYPE_10__ {TYPE_4__* dtpr_ecb; TYPE_2__* dtpr_provider; } ;
typedef TYPE_3__ dtrace_probe_t ;
struct TYPE_11__ {TYPE_1__* dte_state; } ;
typedef TYPE_4__ dtrace_ecb_t ;
typedef int dtrace_buffer_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
 dtrace_provider_t *VAR_4;
 dtrace_probe_t *VAR_5;
 dtrace_ecb_t *VAR_6;
 hrtime_t VAR_7;
 int VAR_8;

 FUNC_4(&VAR_0);
 FUNC_4(&VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if ((VAR_5 = VAR_3[VAR_8]) == ((void*)0))
   continue;

  if (VAR_5->dtpr_ecb == ((void*)0))
   continue;

  VAR_4 = VAR_5->dtpr_provider;

  if ((VAR_7 = VAR_4->dtpv_defunct) == 0)
   continue;
  while ((VAR_6 = VAR_5->dtpr_ecb) != ((void*)0)) {
   dtrace_state_t *VAR_9 = VAR_6->dte_state;
   dtrace_buffer_t *VAR_10 = VAR_9->dts_buffer;
   dtrace_buffer_t *VAR_11 = VAR_9->dts_aggbuffer;

   if (VAR_9->dts_speculates)
    break;

   if (!FUNC_1(VAR_10, VAR_7))
    break;

   if (!FUNC_1(VAR_11, VAR_7))
    break;

   FUNC_3(VAR_6);
   FUNC_0(VAR_5->dtpr_ecb != VAR_6);
   FUNC_2(VAR_6);
  }
 }

 FUNC_5(&VAR_1);
 FUNC_5(&VAR_0);
}
