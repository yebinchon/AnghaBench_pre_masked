
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int bdev; } ;
struct TYPE_6__ {TYPE_1__ sc_bus; } ;
typedef TYPE_2__ ehci_softc_t ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_3 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 void* FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 ehci_softc_t *VAR_6 = FUNC_4(VAR_5);
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint16_t VAR_9;
 uint8_t VAR_10;
 uint8_t VAR_11;

 VAR_7 = FUNC_3(VAR_6, VAR_1);


 for (VAR_10 = FUNC_2(VAR_7); VAR_10 != 0;
     VAR_10 = FUNC_1(VAR_8)) {
  VAR_8 = FUNC_6(VAR_5, VAR_10, 4);
  if (FUNC_0(VAR_8) != VAR_0) {
   continue;
  }
  VAR_11 = FUNC_6(VAR_5, VAR_10 +
      VAR_2, 1);
  if (VAR_11 == 0) {
   continue;
  }
  FUNC_5(VAR_6->sc_bus.bdev, "waiting for BIOS "
      "to give up control\n");
  FUNC_7(VAR_5, VAR_10 +
      VAR_3, 1, 1);
  VAR_9 = 500;
  while (1) {
   VAR_11 = FUNC_6(VAR_5, VAR_10 +
       VAR_2, 1);
   if (VAR_11 == 0)
    break;

   if (--VAR_9 == 0) {
    FUNC_5(VAR_6->sc_bus.bdev,
        "timed out waiting for BIOS\n");
    break;
   }
   FUNC_8(((void*)0), VAR_4 / 100);
  }
 }
 return (0);
}
