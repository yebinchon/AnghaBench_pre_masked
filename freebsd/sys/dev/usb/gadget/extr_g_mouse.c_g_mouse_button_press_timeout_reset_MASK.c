
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ buttons; } ;
struct g_mouse_softc {int sc_do_button_update; int sc_button_press_callout; TYPE_1__ sc_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,struct g_mouse_softc*) ;

__attribute__((used)) static void
FUNC_2(struct g_mouse_softc *VAR_2)
{
 int VAR_3 = VAR_0;

 if (VAR_3 <= 0) {
  VAR_2->sc_data.buttons = 0;
  VAR_2->sc_do_button_update = 0;
 } else {
  VAR_2->sc_do_button_update = 1;
 }

 if ((VAR_3 <= 0) || (VAR_3 > 1023))
  VAR_3 = 1023;

 VAR_3 = FUNC_0(VAR_3);

 FUNC_1(&VAR_2->sc_button_press_callout, VAR_3,
     &VAR_1, VAR_2);
}
