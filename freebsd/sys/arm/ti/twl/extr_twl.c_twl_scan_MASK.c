
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct twl_softc {int sc_scan_hook; int sc_subaddr_map; int sc_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct twl_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct twl_softc*) ;
 int FUNC_2 (int *) ;
 struct twl_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_7 (struct twl_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct twl_softc *VAR_4;
 unsigned VAR_5;
 uint8_t VAR_6[VAR_2];
 uint8_t VAR_7 = VAR_0;

 VAR_4 = FUNC_3((device_t)VAR_3);

 FUNC_6(VAR_6, VAR_1, VAR_2);




 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (FUNC_7(VAR_4, (VAR_7 + VAR_5)) == 0) {
   VAR_6[VAR_5] = (VAR_7 + VAR_5);
   FUNC_4(VAR_4->sc_dev, "Found (sub)device at 0x%02x\n", (VAR_7 + VAR_5));
  }
 }

 FUNC_0(VAR_4);
 FUNC_5(VAR_4->sc_subaddr_map, VAR_6, VAR_2);
 FUNC_1(VAR_4);


 FUNC_2(&VAR_4->sc_scan_hook);
}
