
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct urtw_softc {int sc_gpio_ledstate; int sc_gpio_ledinprogress; int sc_gpio_blinktime; int sc_gpio_blinkstate; int sc_mtx; int sc_led_ch; int sc_gpio_ledon; } ;


 int FUNC_0 (struct urtw_softc*,int ,char*,int) ;
 int VAR_0 ;




 int VAR_1 ;
 int const VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct urtw_softc*,int ) ;
 int FUNC_2 (struct urtw_softc*,int ) ;
 int FUNC_3 (int *,int ,int ,struct urtw_softc*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct urtw_softc *VAR_6, int VAR_7)
{

 switch (VAR_7) {
 case 131:
  VAR_6->sc_gpio_ledstate = 128;
  break;
 case 130:
  if (VAR_6->sc_gpio_ledinprogress == 1)
   return (0);

  VAR_6->sc_gpio_ledstate = 133;
  VAR_6->sc_gpio_blinktime = 2;
  break;
 case 132:
  VAR_6->sc_gpio_ledstate = 129;
  break;
 default:
  FUNC_0(VAR_6, VAR_0,
      "unsupported LED mode 0x%x", VAR_7);
  return (VAR_3);
 }

 switch (VAR_6->sc_gpio_ledstate) {
 case 129:
  if (VAR_6->sc_gpio_ledinprogress != 0)
   break;
  FUNC_2(VAR_6, VAR_1);
  break;
 case 133:
  if (VAR_6->sc_gpio_ledinprogress != 0)
   break;
  VAR_6->sc_gpio_ledinprogress = 1;
  VAR_6->sc_gpio_blinkstate = (VAR_6->sc_gpio_ledon != 0) ?
   VAR_2 : 129;
  FUNC_3(&VAR_6->sc_led_ch, VAR_4, VAR_5, VAR_6);
  break;
 case 128:
  FUNC_2(VAR_6, VAR_1);
  FUNC_4(&VAR_6->sc_mtx, 100);
  FUNC_1(VAR_6, VAR_1);
  break;
 default:
  FUNC_0(VAR_6, VAR_0,
      "unknown LED status 0x%x", VAR_6->sc_gpio_ledstate);
  return (VAR_3);
 }
 return (0);
}
