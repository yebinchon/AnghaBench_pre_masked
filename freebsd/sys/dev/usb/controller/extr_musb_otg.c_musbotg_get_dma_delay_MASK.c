
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct usb_device {int bus; } ;
struct musbotg_softc {scalar_t__ sc_mode; } ;


 scalar_t__ VAR_0 ;
 struct musbotg_softc* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct usb_device *VAR_1, uint32_t *VAR_2)
{
 struct musbotg_softc *VAR_3 = FUNC_0(VAR_1->bus);

 if (VAR_3->sc_mode == VAR_0)
         *VAR_2 = 2000;
 else
  *VAR_2 = 0;
}
