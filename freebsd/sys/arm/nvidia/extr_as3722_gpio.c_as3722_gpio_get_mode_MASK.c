
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct as3722_softc {TYPE_1__** gpio_pins; } ;
struct TYPE_2__ {int pin_cfg_flags; int pin_ctrl_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;

__attribute__((used)) static int
FUNC_0(struct as3722_softc *VAR_17, uint32_t VAR_18, uint32_t VAR_19)
{
 uint8_t VAR_20;
 int VAR_21;

 VAR_20 = VAR_17->gpio_pins[VAR_18]->pin_ctrl_reg;
 VAR_21 = VAR_17->gpio_pins[VAR_18]->pin_cfg_flags;


 if (VAR_21 & VAR_0 ||
     VAR_19 & VAR_16)
  return (VAR_11);


 if (VAR_21 & VAR_3 || VAR_19 & VAR_13) {

  if (VAR_21 & VAR_2 ||
      VAR_19 & VAR_15)
   return (VAR_8);
  return (VAR_7);
 }

 if (VAR_19 & VAR_12) {

  if (VAR_21 & VAR_2 ||
      VAR_19 & VAR_15)
   return (VAR_6);

  if (VAR_21 & VAR_1 ||
      VAR_19 & VAR_14)
   return (VAR_5);
  return (VAR_4);
 }




 if (VAR_21 & VAR_1 ||
      VAR_19 & VAR_14)
  return (VAR_10);
 return (VAR_9);
}
