
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct xhci_softc {int dummy; } ;
struct usb_device {scalar_t__ controller_slot_id; int bus; int * parent_hub; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct xhci_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct xhci_softc*) ;
 int FUNC_5 (struct xhci_softc*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (struct xhci_softc*,int ,int ,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(struct usb_device *VAR_3)
{
 struct xhci_softc *VAR_4 = FUNC_3(VAR_3->bus);
 uint8_t VAR_5;
 uint8_t VAR_6;
 uint8_t VAR_7;

 FUNC_0("\n");


 if (VAR_3->parent_hub == ((void*)0))
  return;

 VAR_5 = VAR_3->controller_slot_id;

 FUNC_4(VAR_4);



 FUNC_1(VAR_3->bus);

 for (VAR_6 = 1; VAR_6 != VAR_0; VAR_6++) {
  for (VAR_7 = 0; VAR_7 != VAR_1; VAR_7++) {
   FUNC_8(VAR_4, VAR_2, FUNC_7(VAR_5),
       VAR_6 | FUNC_6(VAR_7));
  }
 }

 FUNC_2(VAR_3->bus);

 FUNC_5(VAR_4);
}
