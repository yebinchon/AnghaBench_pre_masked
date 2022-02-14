
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dy; scalar_t__ dx; } ;
struct g_mouse_softc {int sc_do_cursor_update; int sc_cursor_update_callout; scalar_t__ sc_tick; TYPE_1__ sc_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,struct g_mouse_softc*) ;

__attribute__((used)) static void
FUNC_2(struct g_mouse_softc *VAR_2)
{
 int VAR_3 = VAR_0;

 if (VAR_3 <= 0) {
  VAR_2->sc_data.dx = 0;
  VAR_2->sc_data.dy = 0;
  VAR_2->sc_do_cursor_update = 0;
  VAR_2->sc_tick = 0;
 } else {
  VAR_2->sc_do_cursor_update = 1;
 }

 if ((VAR_3 <= 0) || (VAR_3 > 1023))
  VAR_3 = 1023;

 VAR_3 = FUNC_0(VAR_3);

 FUNC_1(&VAR_2->sc_cursor_update_callout, VAR_3,
     &VAR_1, VAR_2);
}
