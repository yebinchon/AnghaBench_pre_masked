
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct as3722_softc {scalar_t__ gpio_npins; TYPE_1__** gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int pin_ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722_softc*) ;
 int FUNC_1 (struct as3722_softc*) ;
 int FUNC_2 (struct as3722_softc*,int ,int,int) ;
 struct as3722_softc* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct as3722_softc *VAR_6;
 uint8_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_4 >= VAR_6->gpio_npins)
  return (VAR_2);

 VAR_7 = (VAR_5 != 0) ? 1 : 0;
 if (VAR_6->gpio_pins[VAR_4]->pin_ctrl_reg & VAR_0)
  VAR_7 ^= 1;

 FUNC_0(VAR_6);
 VAR_8 = FUNC_2(VAR_6, VAR_1, (1 << VAR_4), (VAR_7 << VAR_4));
 FUNC_1(VAR_6);
 return (VAR_8);
}
