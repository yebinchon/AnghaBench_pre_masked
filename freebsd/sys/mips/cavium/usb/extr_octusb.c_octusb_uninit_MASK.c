
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
struct octusb_softc {size_t sc_noport; int sc_bus; TYPE_1__* sc_port; } ;
struct TYPE_2__ {scalar_t__ disabled; int state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

usb_error_t
FUNC_3(struct octusb_softc *VAR_0)
{
 uint8_t VAR_1;

 FUNC_0(&VAR_0->sc_bus);

 for (VAR_1 = 0; VAR_1 != VAR_0->sc_noport; VAR_1++) {
  if (VAR_0->sc_port[VAR_1].disabled == 0)
   FUNC_2(&VAR_0->sc_port[VAR_1].state);
 }
 FUNC_1(&VAR_0->sc_bus);

 return (0);

}
