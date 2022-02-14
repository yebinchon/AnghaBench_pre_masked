
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {scalar_t__ sc_gpio_blinkstate; scalar_t__ sc_gpio_blinktime; int sc_gpio_ledstate; int sc_gpio_ledon; int sc_led_ch; scalar_t__ sc_gpio_ledinprogress; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct urtw_softc*,int ) ;
 int FUNC_2 (struct urtw_softc*,int ) ;
 int FUNC_3 (int *,int ,int ,struct urtw_softc*) ;

__attribute__((used)) static usb_error_t
FUNC_4(struct urtw_softc *VAR_9)
{
 uint8_t VAR_10 = 0;
 usb_error_t VAR_11;

 if (VAR_9->sc_gpio_blinkstate == VAR_5)
  VAR_11 = FUNC_2(VAR_9, VAR_3);
 else
  VAR_11 = FUNC_1(VAR_9, VAR_3);
 VAR_9->sc_gpio_blinktime--;
 if (VAR_9->sc_gpio_blinktime == 0)
  VAR_10 = 1;
 else {
  if (VAR_9->sc_gpio_ledstate != 128 &&
      VAR_9->sc_gpio_ledstate != VAR_2 &&
      VAR_9->sc_gpio_ledstate != VAR_1)
   VAR_10 = 1;
 }
 if (VAR_10 == 1) {
  if (VAR_9->sc_gpio_ledstate == VAR_5 &&
      VAR_9->sc_gpio_ledon == 0)
   VAR_11 = FUNC_2(VAR_9, VAR_3);
  else if (VAR_9->sc_gpio_ledstate == VAR_4 &&
      VAR_9->sc_gpio_ledon == 1)
   VAR_11 = FUNC_1(VAR_9, VAR_3);

  VAR_9->sc_gpio_blinktime = 0;
  VAR_9->sc_gpio_ledinprogress = 0;
  return (0);
 }

 VAR_9->sc_gpio_blinkstate = (VAR_9->sc_gpio_blinkstate != VAR_5) ?
     VAR_5 : VAR_4;

 switch (VAR_9->sc_gpio_ledstate) {
 case 128:
  FUNC_3(&VAR_9->sc_led_ch, VAR_7, VAR_8, VAR_9);
  break;
 default:
  FUNC_0(VAR_9, VAR_0,
      "unknown LED status 0x%x",
      VAR_9->sc_gpio_ledstate);
  return (VAR_6);
 }
 return (0);
}
