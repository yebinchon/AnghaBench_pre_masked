
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucom_super_softc {int sc_flag; } ;
typedef enum usb_hc_mode { ____Placeholder_usb_hc_mode } usb_hc_mode ;


 int VAR_0 ;


void
FUNC_0(struct ucom_super_softc *VAR_1, enum usb_hc_mode VAR_2)
{

 switch (VAR_2) {
 case 128:
  VAR_1->sc_flag |= VAR_0;
  break;
 default:
  VAR_1->sc_flag &= ~VAR_0;
  break;
 }
}
