
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
struct TYPE_7__ {int usbrev; int * methods; } ;
struct octusb_softc {scalar_t__ sc_noport; TYPE_2__ sc_bus; TYPE_1__* sc_port; } ;
typedef int cvmx_usb_initialize_flags_t ;
struct TYPE_6__ {int disabled; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,size_t,int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*,int *) ;

usb_error_t
FUNC_6(struct octusb_softc *VAR_7)
{
 cvmx_usb_initialize_flags_t VAR_8;
 int VAR_9;
 uint8_t VAR_10;



 FUNC_5(&VAR_7->sc_bus, &VAR_5);


 VAR_7->sc_bus.methods = &VAR_4;


 VAR_7->sc_noport = FUNC_2();


 if (VAR_7->sc_noport > VAR_2)
  VAR_7->sc_noport = VAR_2;


 VAR_7->sc_bus.usbrev = VAR_3;


 VAR_8 = VAR_0;





 FUNC_0(&VAR_7->sc_bus);


 for (VAR_10 = 0; VAR_10 != VAR_7->sc_noport; VAR_10++) {
  VAR_9 = FUNC_3(&VAR_7->sc_port[VAR_10].state, VAR_10, VAR_8);
  if (VAR_9 < 0)
   VAR_7->sc_port[VAR_10].disabled = 1;
 }

 FUNC_1(&VAR_7->sc_bus);


 FUNC_4(&VAR_7->sc_bus);

 return (0);
}
