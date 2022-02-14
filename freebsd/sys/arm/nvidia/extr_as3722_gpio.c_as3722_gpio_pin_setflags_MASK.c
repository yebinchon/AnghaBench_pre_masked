
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct as3722_softc {size_t gpio_npins; TYPE_1__** gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int pin_ctrl_reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct as3722_softc*) ;
 int FUNC_1 (struct as3722_softc*) ;
 int FUNC_2 (struct as3722_softc*,scalar_t__,int) ;
 int FUNC_3 (struct as3722_softc*,size_t,size_t) ;
 struct as3722_softc* FUNC_4 (int ) ;

int
FUNC_5(device_t VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
 struct as3722_softc *VAR_12;
 uint8_t VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = FUNC_4(VAR_9);
 if (VAR_10 >= VAR_12->gpio_npins)
  return (VAR_7);

 FUNC_0(VAR_12);
 VAR_13 = VAR_12->gpio_pins[VAR_10]->pin_ctrl_reg;
 VAR_15 = (VAR_13 >> VAR_2) & VAR_1;

 if (VAR_15 != VAR_5) {
  FUNC_1(VAR_12);
  return (VAR_8);
 }
 VAR_14 = FUNC_3(VAR_12, VAR_10, VAR_11);
 VAR_13 &= ~(VAR_3 << VAR_4);
 VAR_13 |= VAR_6 << VAR_4;
 VAR_16 = 0;
 if (VAR_13 != VAR_12->gpio_pins[VAR_10]->pin_ctrl_reg) {
  VAR_16 = FUNC_2(VAR_12, VAR_0 + VAR_10, VAR_13);
  VAR_12->gpio_pins[VAR_10]->pin_ctrl_reg = VAR_13;
 }
 FUNC_1(VAR_12);
 return (VAR_16);
}
