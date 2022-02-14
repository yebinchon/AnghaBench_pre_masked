
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_softc {int gpio_npins; struct as3722_gpio_pin** gpio_pins; int dev; int * gpio_busdev; int gpio_lock; } ;
struct as3722_gpio_pin {int pin_caps; int pin_name; int pin_ctrl_reg; } ;
typedef int phandle_t ;


 scalar_t__ VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct as3722_softc*,scalar_t__,int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int * FUNC_2 (int ) ;
 void* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,char*) ;

int
FUNC_6(struct as3722_softc *VAR_15, phandle_t VAR_16)
{
 struct as3722_gpio_pin *VAR_17;
 int VAR_18, VAR_19;

 FUNC_5(&VAR_15->gpio_lock, "AS3722 GPIO lock");
 VAR_15->gpio_npins = VAR_14;
 VAR_15->gpio_pins = FUNC_3(sizeof(struct as3722_gpio_pin *) *
     VAR_15->gpio_npins, VAR_11, VAR_12 | VAR_13);


 VAR_15->gpio_busdev = FUNC_2(VAR_15->dev);
 if (VAR_15->gpio_busdev == ((void*)0))
  return (VAR_1);
 for (VAR_18 = 0; VAR_18 < VAR_15->gpio_npins; VAR_18++) {
  VAR_15->gpio_pins[VAR_18] = FUNC_3(sizeof(struct as3722_gpio_pin),
      VAR_11, VAR_12 | VAR_13);
  VAR_17 = VAR_15->gpio_pins[VAR_18];
  FUNC_4(VAR_17->pin_name, "gpio%d", VAR_18);
  VAR_17->pin_caps = VAR_2 | VAR_6 |
      VAR_5 | VAR_9 | VAR_10 |
      VAR_8 | VAR_7 | VAR_3 |
      VAR_4;
  VAR_19 = FUNC_0(VAR_15, VAR_0 + VAR_18, &VAR_17->pin_ctrl_reg);
  if (VAR_19 != 0) {
   FUNC_1(VAR_15->dev,
       "Cannot read configuration for pin %s\n",
       VAR_15->gpio_pins[VAR_18]->pin_name);
  }
 }
 return (0);
}
