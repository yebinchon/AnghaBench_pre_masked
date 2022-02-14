
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int parent; } ;
struct xhci_softc {int sc_runt_off; int sc_door_off; TYPE_1__ sc_bus; int sc_oper_off; scalar_t__ sc_capa_off; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct xhci_softc*,int ,int ) ;
 int FUNC_2 (struct xhci_softc*,int ,int ) ;
 int FUNC_3 (struct xhci_softc*,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,int) ;

usb_error_t
FUNC_6(struct xhci_softc *VAR_10)
{
 uint32_t VAR_11;
 uint16_t VAR_12;

 FUNC_0("\n");

 VAR_10->sc_capa_off = 0;
 VAR_10->sc_oper_off = FUNC_1(VAR_10, VAR_7, VAR_1);
 VAR_10->sc_runt_off = FUNC_2(VAR_10, VAR_7, VAR_3) & ~0xF;
 VAR_10->sc_door_off = FUNC_2(VAR_10, VAR_7, VAR_2) & ~0x3;


 FUNC_3(VAR_10, VAR_9, VAR_5, 0);

 for (VAR_12 = 0; VAR_12 != 100; VAR_12++) {
  FUNC_5(((void*)0), VAR_8 / 100);
  VAR_11 = FUNC_2(VAR_10, VAR_9, VAR_6) & VAR_4;
  if (VAR_11)
   break;
 }

 if (!VAR_11) {
  FUNC_4(VAR_10->sc_bus.parent, "Controller halt timeout.\n");
  return (VAR_0);
 }
 return (0);
}
