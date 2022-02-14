
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
 int VAR_1 ;
 int FUNC_2 (struct pad_softc*,int ,scalar_t__) ;
 int FUNC_3 (struct pad_softc*,int ,scalar_t__,int) ;
 struct pad_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct pad_softc*,int ,struct gpio_bank*,int*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, uint32_t VAR_3, unsigned int VAR_4)
{
 struct pad_softc *VAR_5;
 struct gpio_bank VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = FUNC_4(VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_5->gpio_npins; VAR_9++) {
  if (VAR_5->gpio_pins[VAR_9].gp_pin == VAR_3)
   break;
 }

 if (VAR_9 >= VAR_5->gpio_npins)
  return (VAR_0);

 if (FUNC_5(VAR_5, VAR_3, &VAR_6, &VAR_7) != 0)
  return (VAR_0);

 FUNC_0(VAR_5);
 VAR_8 = FUNC_2(VAR_5, VAR_6.port, VAR_6.con + 0x4);
 VAR_8 &= ~(VAR_1 << VAR_7);
 if (VAR_4)
  VAR_8 |= (VAR_1 << VAR_7);
 FUNC_3(VAR_5, VAR_6.port, VAR_6.con + 0x4, VAR_8);
 FUNC_1(VAR_5);

 return (0);
}
