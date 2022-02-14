
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regnode_fixed_sc {TYPE_2__* param; TYPE_1__* gpio_entry; } ;
struct regnode {int dummy; } ;
struct gpiobus_pin {int pin; int dev; } ;
typedef int device_t ;
struct TYPE_4__ {int enable_delay; scalar_t__ enable_active_high; } ;
struct TYPE_3__ {scalar_t__ enable_cnt; struct gpiobus_pin gpio_pin; scalar_t__ always_on; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct regnode*) ;
 struct regnode_fixed_sc* FUNC_3 (struct regnode*) ;

__attribute__((used)) static int
FUNC_4(struct regnode *VAR_0, int *VAR_1)
{
 device_t VAR_2;
 struct regnode_fixed_sc *VAR_3;
 struct gpiobus_pin *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_0);
 VAR_2 = FUNC_2(VAR_0);

 *VAR_1 = 0;
 if (VAR_3->gpio_entry == ((void*)0))
  return (0);
 if (VAR_3->gpio_entry->always_on)
  return (0);
 VAR_4 = &VAR_3->gpio_entry->gpio_pin;
 if (VAR_3->gpio_entry->enable_cnt > 0) {


  return (0);
 }
 VAR_5 = FUNC_0(VAR_4->dev, VAR_4->pin,
     VAR_3->param->enable_active_high ? 0: 1);
 if (VAR_5 != 0) {
  FUNC_1(VAR_2, "Cannot set GPIO pin: %d\n", VAR_4->pin);
  return (VAR_5);
 }
 *VAR_1 = VAR_3->param->enable_delay;
 return (0);
}
