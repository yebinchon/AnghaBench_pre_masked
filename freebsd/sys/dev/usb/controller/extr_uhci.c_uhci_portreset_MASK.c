
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int bus_mtx; } ;
struct TYPE_8__ {int sc_isreset; TYPE_1__ sc_bus; } ;
typedef TYPE_2__ uhci_softc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int ) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static usb_error_t
FUNC_10(uhci_softc_t *VAR_12, uint16_t VAR_13)
{
 uint16_t VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16;

 if (VAR_13 == 1)
  VAR_14 = VAR_0;
 else if (VAR_13 == 2)
  VAR_14 = VAR_1;
 else
  return (VAR_7);





 FUNC_8(VAR_12);

 VAR_15 = FUNC_3(FUNC_2(VAR_12, VAR_14));
 FUNC_5(VAR_12, VAR_14, VAR_15 | VAR_6);

 FUNC_9(&VAR_12->sc_bus.bus_mtx,
     FUNC_4(VAR_11));

 FUNC_1(4, "uhci port %d reset, status0 = 0x%04x\n",
     VAR_13, FUNC_2(VAR_12, VAR_14));

 VAR_15 = FUNC_3(FUNC_2(VAR_12, VAR_14));
 FUNC_5(VAR_12, VAR_14, VAR_15 & ~VAR_6);


 FUNC_7(&VAR_12->sc_bus.bus_mtx);





 FUNC_0(100);

 FUNC_6(&VAR_12->sc_bus.bus_mtx);

 FUNC_1(4, "uhci port %d reset, status1 = 0x%04x\n",
     VAR_13, FUNC_2(VAR_12, VAR_14));

 VAR_15 = FUNC_3(FUNC_2(VAR_12, VAR_14));
 FUNC_5(VAR_12, VAR_14, VAR_15 | VAR_4);

 for (VAR_16 = 0; VAR_16 < 12; VAR_16++) {

  FUNC_9(&VAR_12->sc_bus.bus_mtx,
      FUNC_4(VAR_10));

  VAR_15 = FUNC_2(VAR_12, VAR_14);

  FUNC_1(4, "uhci port %d iteration %u, status = 0x%04x\n",
      VAR_13, VAR_16, VAR_15);

  if (!(VAR_15 & VAR_2)) {
   FUNC_1(4, "uhci port %d loop %u, device detached\n",
       VAR_13, VAR_16);
   goto done;
  }
  if (VAR_15 & (VAR_5 | VAR_3)) {






   FUNC_5(VAR_12, VAR_14, FUNC_3(VAR_15) |
       (VAR_15 & (VAR_5 | VAR_3)));
   continue;
  }
  if (VAR_15 & VAR_4) {

   goto done;
  }
  FUNC_5(VAR_12, VAR_14, FUNC_3(VAR_15) | VAR_4);
 }

 FUNC_1(2, "uhci port %d reset timed out\n", VAR_13);
 return (VAR_9);

done:
 FUNC_1(4, "uhci port %d reset, status2 = 0x%04x\n",
     VAR_13, FUNC_2(VAR_12, VAR_14));

 VAR_12->sc_isreset = 1;
 return (VAR_8);
}
