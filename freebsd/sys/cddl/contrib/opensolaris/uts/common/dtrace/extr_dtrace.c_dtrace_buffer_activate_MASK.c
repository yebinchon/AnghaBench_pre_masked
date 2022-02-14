
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* dts_buffer; } ;
typedef TYPE_1__ dtrace_state_t ;
typedef int dtrace_icookie_t ;
struct TYPE_5__ {int dtb_flags; int * dtb_tomax; } ;
typedef TYPE_2__ dtrace_buffer_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(dtrace_state_t *VAR_2)
{
 dtrace_buffer_t *VAR_3;
 dtrace_icookie_t VAR_4 = FUNC_0();

 VAR_3 = &VAR_2->dts_buffer[VAR_1];

 if (VAR_3->dtb_tomax != ((void*)0)) {







  VAR_3->dtb_flags &= ~VAR_0;
 }

 FUNC_1(VAR_4);
}
