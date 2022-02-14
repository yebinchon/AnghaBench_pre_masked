
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct urtw_softc {int sc_gpio_ledpin; scalar_t__ sc_gpio_ledon; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_1 (struct urtw_softc*,int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_7, int VAR_8)
{
 usb_error_t VAR_9;

 if (VAR_8 == VAR_5) {
  switch (VAR_7->sc_gpio_ledpin) {
  case 128:
   FUNC_1(VAR_7, VAR_1, VAR_2);
   FUNC_1(VAR_7,
       VAR_3, VAR_4);
   break;
  default:
   FUNC_0(VAR_7, VAR_0,
       "unsupported LED PIN type 0x%x",
       VAR_7->sc_gpio_ledpin);
   VAR_9 = VAR_6;
   goto fail;
  }
 } else {
  FUNC_0(VAR_7, VAR_0,
      "unsupported LED type 0x%x", VAR_8);
  VAR_9 = VAR_6;
  goto fail;
 }

 VAR_7->sc_gpio_ledon = 0;

fail:
 return (VAR_9);
}
