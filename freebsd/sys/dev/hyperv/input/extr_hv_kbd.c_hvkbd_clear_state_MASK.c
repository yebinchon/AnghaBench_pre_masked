
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {int sc_flags; int sc_state; } ;
typedef TYPE_2__ hv_kbd_sc ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(keyboard_t *VAR_2)
{
 hv_kbd_sc *VAR_3 = VAR_2->kb_data;
 VAR_3->sc_state &= VAR_1;
 VAR_3->sc_flags &= ~VAR_0;
}
