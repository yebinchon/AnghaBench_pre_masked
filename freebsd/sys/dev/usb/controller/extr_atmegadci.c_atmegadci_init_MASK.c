
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
struct TYPE_5__ {int bus_mtx; int * methods; int usbrev; } ;
struct atmegadci_softc {TYPE_1__ sc_bus; int (* sc_clocks_on ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct atmegadci_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct atmegadci_softc*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (struct atmegadci_softc*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct atmegadci_softc*,int) ;
 int VAR_22 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int) ;

usb_error_t
FUNC_10(struct atmegadci_softc *VAR_23)
{
 uint8_t VAR_24;

 FUNC_2("start\n");


 VAR_23->sc_bus.usbrev = VAR_20;
 VAR_23->sc_bus.methods = &VAR_21;

 FUNC_3(&VAR_23->sc_bus);


 FUNC_1(VAR_23, VAR_13,
     VAR_16 |
     VAR_14);


 FUNC_1(VAR_23, VAR_10,
     VAR_12 |
     VAR_11);


 FUNC_1(VAR_23, 0x49 , 0x14 | 0x02);


 for (VAR_24 = 0; VAR_24 != 20; VAR_24++) {
  if (FUNC_0(VAR_23, 0x49) & 0x01)
   break;

  FUNC_9(&VAR_23->sc_bus.bus_mtx, VAR_22 / 100);
 }


 FUNC_1(VAR_23, VAR_13,
     VAR_16 |
     VAR_15 |
     VAR_17);


 (VAR_23->sc_clocks_on) (&VAR_23->sc_bus);


 FUNC_1(VAR_23, VAR_1, VAR_2);


 FUNC_9(&VAR_23->sc_bus.bus_mtx, VAR_22 / 20);


 FUNC_1(VAR_23, VAR_3,
     VAR_5 |
     VAR_4);


 FUNC_1(VAR_23, VAR_9,
     (1 << VAR_0) - 1);


 FUNC_1(VAR_23, VAR_9, 0);


 for (VAR_24 = 0; VAR_24 != VAR_0; VAR_24++) {


  FUNC_1(VAR_23, VAR_8, VAR_24);


  FUNC_1(VAR_23, VAR_7, 0);


  FUNC_1(VAR_23, VAR_6, 0);
 }



 FUNC_5(VAR_23);



 VAR_24 = FUNC_0(VAR_23, VAR_18);
 FUNC_7(VAR_23, VAR_24 & VAR_19);

 FUNC_4(&VAR_23->sc_bus);



 FUNC_6(&VAR_23->sc_bus);

 return (0);
}
