
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct a37x0_gpio_softc {int sc_type; int sc_max_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct a37x0_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 const char *VAR_4;
 struct a37x0_gpio_softc *VAR_5;

 if (!FUNC_0(FUNC_4(VAR_3), "gpio-controller"))
  return (VAR_1);

 VAR_5 = FUNC_2(VAR_3);
 VAR_5->sc_type = FUNC_5(
     FUNC_1(VAR_3), VAR_2)->ocd_data;
 switch (VAR_5->sc_type) {
 case 129:
  VAR_5->sc_max_pins = 36;
  VAR_4 = "Armada 37x0 North Bridge GPIO Controller";
  break;
 case 128:
  VAR_5->sc_max_pins = 30;
  VAR_4 = "Armada 37x0 South Bridge GPIO Controller";
  break;
 default:
  return (VAR_1);
 }
 FUNC_3(VAR_3, VAR_4);

 return (VAR_0);
}
