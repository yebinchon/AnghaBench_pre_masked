
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pad_softc {int gpio_npins; TYPE_1__* gpio_pins; } ;
struct gpio_bank {scalar_t__ con; int port; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_pin; } ;


 int VAR_0 ;
 int FUNC_0 (struct pad_softc*) ;
 int FUNC_1 (struct pad_softc*) ;
 int FUNC_2 (struct pad_softc*,int ,scalar_t__) ;
 int FUNC_3 (struct pad_softc*,int ,scalar_t__,int) ;
 struct pad_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct pad_softc*,int ,struct gpio_bank*,int*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2)
{
 struct gpio_bank VAR_3;
 struct pad_softc *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_4(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_4->gpio_npins; VAR_7++) {
  if (VAR_4->gpio_pins[VAR_7].gp_pin == VAR_2)
   break;
 }

 if (VAR_7 >= VAR_4->gpio_npins)
  return (VAR_0);

 if (FUNC_5(VAR_4, VAR_2, &VAR_3, &VAR_5) != 0)
  return (VAR_0);

 FUNC_0(VAR_4);
 VAR_6 = FUNC_2(VAR_4, VAR_3.port, VAR_3.con + 0x4);
 if (VAR_6 & (1 << VAR_5))
  VAR_6 &= ~(1 << VAR_5);
 else
  VAR_6 |= (1 << VAR_5);
 FUNC_3(VAR_4, VAR_3.port, VAR_3.con + 0x4, VAR_6);
 FUNC_1(VAR_4);

 return (0);
}
