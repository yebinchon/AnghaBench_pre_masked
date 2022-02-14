
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_5__ {scalar_t__ sc_polling; int sc_flags; } ;
typedef TYPE_2__ hv_kbd_sc ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_1, int VAR_2)
{
 hv_kbd_sc *VAR_3 = VAR_1->kb_data;

 FUNC_0();




 if (VAR_2)
  VAR_3->sc_polling++;
 else if (VAR_3->sc_polling > 0)
  VAR_3->sc_polling--;

 if (VAR_3->sc_polling != 0) {
  VAR_3->sc_flags |= VAR_0;
 } else {
  VAR_3->sc_flags &= ~VAR_0;
 }
 FUNC_1();
 return (0);
}
