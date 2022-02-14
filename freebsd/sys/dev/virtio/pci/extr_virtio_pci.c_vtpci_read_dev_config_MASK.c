
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct vtpci_softc {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;


 scalar_t__ FUNC_0 (struct vtpci_softc*) ;
 struct vtpci_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct vtpci_softc*,scalar_t__) ;
 int FUNC_3 (struct vtpci_softc*,scalar_t__) ;
 int FUNC_4 (struct vtpci_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, bus_size_t VAR_1,
    void *VAR_2, int VAR_3)
{
 struct vtpci_softc *VAR_4;
 bus_size_t VAR_5;
 uint8_t *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_4) + VAR_1;

 for (VAR_6 = VAR_2; VAR_3 > 0; VAR_6 += VAR_7, VAR_5 += VAR_7, VAR_3 -= VAR_7) {
  if (VAR_3 >= 4) {
   VAR_7 = 4;
   *(uint32_t *)VAR_6 = FUNC_4(VAR_4, VAR_5);
  } else if (VAR_3 >= 2) {
   VAR_7 = 2;
   *(uint16_t *)VAR_6 = FUNC_3(VAR_4, VAR_5);
  } else {
   VAR_7 = 1;
   *VAR_6 = FUNC_2(VAR_4, VAR_5);
  }
 }
}
