
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct regnode_fixed_sc {TYPE_2__* param; scalar_t__ gpio_open_drain; TYPE_1__* gpio_entry; } ;
struct regnode {int dummy; } ;
struct gpiobus_pin {int pin; int dev; } ;
typedef int device_t ;
struct TYPE_4__ {int enable_active_high; scalar_t__ always_on; scalar_t__ boot_on; } ;
struct TYPE_3__ {struct gpiobus_pin gpio_pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct regnode*) ;
 struct regnode_fixed_sc* FUNC_4 (struct regnode*) ;
 TYPE_2__* FUNC_5 (struct regnode*) ;

__attribute__((used)) static int
FUNC_6(struct regnode *VAR_2)
{
 device_t VAR_3;
 struct regnode_fixed_sc *VAR_4;
 struct gpiobus_pin *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_4 = FUNC_4(VAR_2);
 VAR_3 = FUNC_3(VAR_2);
 VAR_4->param = FUNC_5(VAR_2);
 if (VAR_4->gpio_entry == ((void*)0))
  return (0);
 VAR_5 = &VAR_4->gpio_entry->gpio_pin;

 VAR_6 = VAR_1;
 if (VAR_4->gpio_open_drain)
  VAR_6 |= VAR_0;
 if (VAR_4->param->boot_on || VAR_4->param->always_on) {
  VAR_7 = FUNC_0(VAR_5->dev, VAR_5->pin, VAR_4->param->enable_active_high);
  if (VAR_7 != 0) {
   FUNC_2(VAR_3, "Cannot set GPIO pin: %d\n",
       VAR_5->pin);
   return (VAR_7);
  }
 }

 VAR_7 = FUNC_1(VAR_5->dev, VAR_5->pin, VAR_6);
 if (VAR_7 != 0) {
  FUNC_2(VAR_3, "Cannot configure GPIO pin: %d\n", VAR_5->pin);
  return (VAR_7);
 }

 return (0);
}
