
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct as3722_softc*) ;
 int FUNC_1 (struct as3722_softc*) ;
 int FUNC_2 (struct as3722_softc*,int ,int*) ;
 struct as3722_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_8, uint32_t VAR_9, uint32_t *VAR_10)
{
 struct as3722_softc *VAR_11;
 uint8_t VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_11 = FUNC_3(VAR_8);
 if (VAR_9 >= VAR_11->gpio_npins)
  return (VAR_7);

 FUNC_0(VAR_11);
 VAR_14 = VAR_11->gpio_pins[VAR_9]->pin_ctrl_reg;
 VAR_13 = (VAR_14 >> VAR_2) & VAR_1;
 if ((VAR_13 == VAR_5) ||
     (VAR_13 == VAR_6))
  VAR_15 = FUNC_2(VAR_11, VAR_4, &VAR_12);
 else
  VAR_15 = FUNC_2(VAR_11, VAR_3, &VAR_12);
 FUNC_1(VAR_11);
 if (VAR_15 != 0)
  return (VAR_15);

 *VAR_10 = VAR_12 & (1 << VAR_9) ? 1 : 0;
 if (VAR_14 & VAR_0)
  *VAR_10 ^= 1;
 return (0);
}
