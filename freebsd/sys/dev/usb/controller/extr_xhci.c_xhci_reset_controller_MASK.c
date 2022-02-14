
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int parent; } ;
struct xhci_softc {TYPE_1__ sc_bus; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xhci_softc*,int ,int ) ;
 int FUNC_2 (struct xhci_softc*,int ,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int) ;

usb_error_t
FUNC_5(struct xhci_softc *VAR_7)
{
 uint32_t VAR_8 = 0;
 uint16_t VAR_9;

 FUNC_0("\n");


 FUNC_2(VAR_7, VAR_6, VAR_3, VAR_1);

 for (VAR_9 = 0; VAR_9 != 100; VAR_9++) {
  FUNC_4(((void*)0), VAR_5 / 100);
  VAR_8 = (FUNC_1(VAR_7, VAR_6, VAR_3) & VAR_1) |
      (FUNC_1(VAR_7, VAR_6, VAR_4) & VAR_2);
  if (!VAR_8)
   break;
 }

 if (VAR_8) {
  FUNC_3(VAR_7->sc_bus.parent, "Controller "
      "reset timeout.\n");
  return (VAR_0);
 }
 return (0);
}
