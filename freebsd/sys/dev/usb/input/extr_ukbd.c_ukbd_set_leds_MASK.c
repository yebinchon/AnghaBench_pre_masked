
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ukbd_softc {int * sc_xfer; int sc_flags; int sc_leds; } ;


 int FUNC_0 (char*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ukbd_softc *VAR_2, uint8_t VAR_3)
{

 FUNC_1();
 FUNC_0("leds=0x%02x\n", VAR_3);

 VAR_2->sc_leds = VAR_3;
 VAR_2->sc_flags |= VAR_1;



 FUNC_2(VAR_2->sc_xfer[VAR_0]);
}
