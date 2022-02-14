
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_hw_ep_profile {int dummy; } ;
struct usb_device {int bus; } ;
struct musbotg_softc {scalar_t__ sc_ep_max; struct usb_hw_ep_profile* sc_hw_ep_profile; } ;


 struct musbotg_softc* FUNC_0 (int ) ;
 struct usb_hw_ep_profile* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct usb_device *VAR_1,
    const struct usb_hw_ep_profile **VAR_2, uint8_t VAR_3)
{
 struct musbotg_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_1->bus);

 if (VAR_3 == 0) {

  *VAR_2 = VAR_0;
 } else if (VAR_3 <= VAR_4->sc_ep_max) {

  *VAR_2 = VAR_4->sc_hw_ep_profile + VAR_3;
 } else {
  *VAR_2 = ((void*)0);
 }
}
