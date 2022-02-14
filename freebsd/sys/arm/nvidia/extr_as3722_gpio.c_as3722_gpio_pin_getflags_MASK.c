
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
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_1 (struct as3722_softc*) ;
 struct as3722_softc* FUNC_2 (int ) ;

int
FUNC_3(device_t VAR_16, uint32_t VAR_17, uint32_t *VAR_18)
{
 struct as3722_softc *VAR_19;
 uint8_t VAR_20, VAR_21, VAR_22;
 uint32_t VAR_23;
 bool VAR_24;

 VAR_19 = FUNC_2(VAR_16);
 if (VAR_17 >= VAR_19->gpio_npins)
  return (VAR_6);

 FUNC_0(VAR_19);
 VAR_20 = VAR_19->gpio_pins[VAR_17]->pin_ctrl_reg;
 FUNC_1(VAR_19);
 VAR_22 = (VAR_20 >> VAR_2) & VAR_1;
 VAR_21 = (VAR_20 >> VAR_4) & VAR_3;
 VAR_24 = (VAR_20 & VAR_0) != 0;

 if (VAR_22 != VAR_5)
  return (VAR_7);

 VAR_23 = 0;
 switch (VAR_21) {
 case 135:
  VAR_23 = VAR_8;
  break;
 case 130:
 case 129:
  VAR_23 = VAR_12;
  break;
 case 132:
 case 131:
  VAR_23 = VAR_8 | VAR_12 | VAR_11;
  break;
 case 128:
  VAR_23 = VAR_15;
  break;
 case 133:
  VAR_23 = VAR_8 | VAR_14;
  break;

 case 134:
  VAR_23 = VAR_12 | VAR_13;
  break;
 }
 if (VAR_24)
  VAR_23 |= VAR_9 | VAR_10;
 *VAR_18 = VAR_23;
 return (0);
}
