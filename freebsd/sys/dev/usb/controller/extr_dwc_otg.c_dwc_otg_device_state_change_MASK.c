
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ usb_mode; } ;
struct usb_device {scalar_t__ state; int bus; TYPE_1__ flags; } ;
struct dwc_otg_softc {int sc_dev_ep_max; int sc_dev_in_ep_max; int sc_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct dwc_otg_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct dwc_otg_softc*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct usb_device *VAR_5)
{
 struct dwc_otg_softc *VAR_6;
 uint8_t VAR_7;


 if (VAR_5->flags.usb_mode != VAR_2) {

  return;
 }


 VAR_6 = FUNC_2(VAR_5->bus);


 if (VAR_5->state == VAR_4 ||
     VAR_5->state == VAR_3) {

  FUNC_4(&VAR_6->sc_bus);

  for (VAR_7 = 1; VAR_7 != VAR_6->sc_dev_ep_max; VAR_7++) {

   if (VAR_7 < VAR_6->sc_dev_in_ep_max) {
    FUNC_3(VAR_6, FUNC_0(VAR_7),
        VAR_0);
    FUNC_3(VAR_6, FUNC_0(VAR_7), 0);
   }

   FUNC_3(VAR_6, FUNC_1(VAR_7),
       VAR_1);
   FUNC_3(VAR_6, FUNC_1(VAR_7), 0);
  }
  FUNC_5(&VAR_6->sc_bus);
 }
}
