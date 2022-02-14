
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct urtw_softc {int sc_gpio_ledpin; int sc_gpio_ledon; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_1 (struct urtw_softc*,int ,int) ;

__attribute__((used)) static usb_error_t
FUNC_2(struct urtw_softc *VAR_5, int VAR_6)
{
 usb_error_t VAR_7;

 if (VAR_6 == VAR_3) {
  switch (VAR_5->sc_gpio_ledpin) {
  case 128:
   FUNC_1(VAR_5, VAR_1, 0x01);
   FUNC_1(VAR_5, VAR_2, 0x00);
   break;
  default:
   FUNC_0(VAR_5, VAR_0,
       "unsupported LED PIN type 0x%x",
       VAR_5->sc_gpio_ledpin);
   VAR_7 = VAR_4;
   goto fail;
  }
 } else {
  FUNC_0(VAR_5, VAR_0,
      "unsupported LED type 0x%x", VAR_6);
  VAR_7 = VAR_4;
  goto fail;
 }

 VAR_5->sc_gpio_ledon = 1;
fail:
 return (VAR_7);
}
