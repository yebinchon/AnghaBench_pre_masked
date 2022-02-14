
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct TYPE_5__ {int bus_mtx; int * methods; int usbrev; } ;
struct avr32dci_softc {TYPE_1__ sc_bus; int (* sc_clocks_on ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct avr32dci_softc*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct avr32dci_softc*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct avr32dci_softc*,int ,int ) ;
 int FUNC_8 (struct avr32dci_softc*,int,int) ;
 int VAR_9 ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int) ;

usb_error_t
FUNC_11(struct avr32dci_softc *VAR_10)
{
 uint8_t VAR_11;

 FUNC_2("start\n");


 VAR_10->sc_bus.usbrev = VAR_7;
 VAR_10->sc_bus.methods = &VAR_8;

 FUNC_3(&VAR_10->sc_bus);


 FUNC_7(VAR_10, VAR_1, 0);


 (VAR_10->sc_clocks_on) (&VAR_10->sc_bus);


 FUNC_7(VAR_10, VAR_0, 0);


 FUNC_10(&VAR_10->sc_bus.bus_mtx, VAR_9 / 20);


 FUNC_8(VAR_10, 0, 0xFFFFFFFF);


 FUNC_8(VAR_10, VAR_5 |
     VAR_6, 0);


 FUNC_1(VAR_10, VAR_3, (1 << VAR_4) - 1);


 for (VAR_11 = 0; VAR_11 != VAR_4; VAR_11++) {

  FUNC_1(VAR_10, FUNC_0(VAR_11), VAR_2);
 }



 FUNC_5(VAR_10);

 FUNC_4(&VAR_10->sc_bus);



 FUNC_6(&VAR_10->sc_bus);

 return (0);
}
