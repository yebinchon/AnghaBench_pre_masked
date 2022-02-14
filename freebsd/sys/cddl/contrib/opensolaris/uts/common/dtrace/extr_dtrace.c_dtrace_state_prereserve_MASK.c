
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* dts_options; scalar_t__ dts_reserve; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_7__ {TYPE_3__* dtpr_ecb; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_8__ {scalar_t__ dte_alignment; scalar_t__ dte_needed; TYPE_1__* dte_state; struct TYPE_8__* dte_next; } ;
typedef TYPE_3__ dtrace_ecb_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;

__attribute__((used)) static void
FUNC_1(dtrace_state_t *VAR_4)
{
 dtrace_ecb_t *VAR_5;
 dtrace_probe_t *VAR_6;

 VAR_4->dts_reserve = 0;

 if (VAR_4->dts_options[VAR_0] != VAR_1)
  return;





 VAR_6 = VAR_3[VAR_2 - 1];
 FUNC_0(VAR_6 != ((void*)0));

 for (VAR_5 = VAR_6->dtpr_ecb; VAR_5 != ((void*)0); VAR_5 = VAR_5->dte_next) {
  if (VAR_5->dte_state != VAR_4)
   continue;

  VAR_4->dts_reserve += VAR_5->dte_needed + VAR_5->dte_alignment;
 }
}
