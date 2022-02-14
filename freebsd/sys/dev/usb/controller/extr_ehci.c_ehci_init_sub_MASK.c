
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_page_search {int physaddr; } ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {int async_start_pc; int pframes_pc; } ;
struct ehci_softc {int sc_eintrs; TYPE_2__ sc_bus; TYPE_1__ sc_hw; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ehci_softc*,int ) ;
 int FUNC_3 (struct ehci_softc*,int ,int) ;
 int FUNC_4 (struct ehci_softc*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,char*) ;
 int VAR_18 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,struct usb_page_search*) ;

__attribute__((used)) static int
FUNC_8(struct ehci_softc *VAR_19)
{
 struct usb_page_search VAR_20;
 uint32_t VAR_21;
   uint32_t VAR_22;
 uint8_t VAR_23;

 VAR_21 = FUNC_4(VAR_19, VAR_9);

 FUNC_0("cparams=0x%x\n", VAR_21);

 if (FUNC_1(VAR_21)) {
  FUNC_0("HCC uses 64-bit structures\n");


  FUNC_3(VAR_19, VAR_8, 0);
 }

 FUNC_7(&VAR_19->sc_hw.pframes_pc, 0, &VAR_20);
 FUNC_3(VAR_19, VAR_11, VAR_20.physaddr);

 FUNC_7(&VAR_19->sc_hw.async_start_pc, 0, &VAR_20);
 FUNC_3(VAR_19, VAR_0, VAR_20.physaddr | VAR_10);


 FUNC_3(VAR_19, VAR_14, VAR_19->sc_eintrs);


 FUNC_3(VAR_19, VAR_13,
     VAR_3 |
     (FUNC_2(VAR_19, VAR_13) & VAR_2) |
     VAR_1 |
     VAR_4 |
     VAR_5);


 FUNC_3(VAR_19, VAR_6, VAR_7);

 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
  FUNC_6(((void*)0), VAR_18 / 128);
  VAR_22 = FUNC_2(VAR_19, VAR_15) & VAR_12;
  if (!VAR_22) {
   break;
  }
 }
 if (VAR_22) {
  FUNC_5(VAR_19->sc_bus.bdev, "run timeout\n");
  return (VAR_16);
 }
 return (VAR_17);
}
