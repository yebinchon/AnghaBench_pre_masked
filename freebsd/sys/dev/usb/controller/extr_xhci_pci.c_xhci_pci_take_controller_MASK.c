
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int bdev; } ;
struct xhci_softc {TYPE_1__ sc_bus; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct xhci_softc*,int ,scalar_t__) ;
 int FUNC_4 (struct xhci_softc*,int ,int) ;
 int FUNC_5 (struct xhci_softc*,int ,scalar_t__,int) ;
 int VAR_4 ;
 struct xhci_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_5 ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 struct xhci_softc *VAR_7 = FUNC_6(VAR_6);
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;
 uint8_t VAR_12;

 VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_0);

 VAR_10 = -1;


 for (VAR_9 = FUNC_0(VAR_8) << 2; VAR_9 != 0 && FUNC_2(VAR_10);
     VAR_9 += FUNC_2(VAR_10) << 2) {
  VAR_10 = FUNC_4(VAR_7, VAR_4, VAR_9);

  if (FUNC_1(VAR_10) != VAR_1)
   continue;
  VAR_12 = FUNC_3(VAR_7, VAR_4, VAR_9 +
      VAR_2);
  if (VAR_12 == 0)
   continue;
  FUNC_7(VAR_7->sc_bus.bdev, "waiting for BIOS "
      "to give up control\n");
  FUNC_5(VAR_7, VAR_4, VAR_9 +
      VAR_3, 1);
  VAR_11 = 500;
  while (1) {
   VAR_12 = FUNC_3(VAR_7, VAR_4, VAR_9 +
       VAR_2);
   if (VAR_12 == 0)
    break;

   if (--VAR_11 == 0) {
    FUNC_7(VAR_7->sc_bus.bdev,
        "timed out waiting for BIOS\n");
    break;
   }
   FUNC_8(((void*)0), VAR_5 / 100);
  }
 }
 return (0);
}
