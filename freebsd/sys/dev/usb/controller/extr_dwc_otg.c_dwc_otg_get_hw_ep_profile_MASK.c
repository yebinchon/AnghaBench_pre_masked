
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct usb_hw_ep_profile {int dummy; } ;
struct usb_device {int bus; } ;
struct dwc_otg_softc {size_t sc_dev_ep_max; TYPE_1__* sc_hw_ep_profile; } ;
struct TYPE_2__ {struct usb_hw_ep_profile usb; } ;


 struct dwc_otg_softc* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct usb_device *VAR_0,
    const struct usb_hw_ep_profile **VAR_1, uint8_t VAR_2)
{
 struct dwc_otg_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_0->bus);

 if (VAR_2 < VAR_3->sc_dev_ep_max)
  *VAR_1 = &VAR_3->sc_hw_ep_profile[VAR_2].usb;
 else
  *VAR_1 = ((void*)0);
}
