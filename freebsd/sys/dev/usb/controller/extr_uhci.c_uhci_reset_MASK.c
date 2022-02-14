
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {int bdev; int bus_mtx; } ;
struct TYPE_10__ {TYPE_5__ sc_bus; int sc_root_intr; } ;
typedef TYPE_1__ uhci_softc_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int VAR_10 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

void
FUNC_12(uhci_softc_t *VAR_12)
{
 uint16_t VAR_13;

 FUNC_4(&VAR_12->sc_bus, VAR_0);

 FUNC_0("resetting the HC\n");



 FUNC_8(VAR_12, VAR_5, 0);



 FUNC_1(VAR_12, VAR_2);



 FUNC_11(&VAR_12->sc_bus.bus_mtx,
     FUNC_6(VAR_10));



 FUNC_1(VAR_12, VAR_3);



 VAR_13 = VAR_6;
 while (VAR_13--) {


  FUNC_11(&VAR_12->sc_bus.bus_mtx, VAR_11 / 1000);

  if (!(FUNC_2(VAR_12, VAR_1) & VAR_3)) {
   goto done_1;
  }
 }

 FUNC_9(VAR_12->sc_bus.bdev,
     "controller did not reset\n");

done_1:

 VAR_13 = 10;
 while (VAR_13--) {


  FUNC_11(&VAR_12->sc_bus.bus_mtx, VAR_11 / 1000);


  if (FUNC_2(VAR_12, VAR_8) & VAR_9) {
   goto done_2;
  }
 }

 FUNC_9(VAR_12->sc_bus.bdev,
     "controller did not stop\n");

done_2:


 FUNC_8(VAR_12, VAR_4, 0);

 FUNC_7(VAR_12, VAR_7, 0x40);

 FUNC_5(&VAR_12->sc_bus);


 FUNC_10(&VAR_12->sc_root_intr);

 FUNC_3(&VAR_12->sc_bus);
}
