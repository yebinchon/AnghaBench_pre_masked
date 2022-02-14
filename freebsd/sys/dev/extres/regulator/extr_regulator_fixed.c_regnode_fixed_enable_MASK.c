
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
struct TYPE_4__ {int enable_delay; int enable_active_high; } ;
struct TYPE_3__ {int enable_cnt; scalar_t__ always_on; struct gpiobus_pin gpio_pin; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct regnode*) ;
 struct regnode_fixed_sc* FUNC_4 (struct regnode*) ;

__attribute__((used)) static int
FUNC_5(struct regnode *VAR_0, bool VAR_1, int *VAR_2)
{
 device_t VAR_3;
 struct regnode_fixed_sc *VAR_4;
 struct gpiobus_pin *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_0);
 VAR_3 = FUNC_3(VAR_0);

 *VAR_2 = 0;
 if (VAR_4->gpio_entry == ((void*)0))
  return (0);
 VAR_5 = &VAR_4->gpio_entry->gpio_pin;
 if (VAR_1) {
  VAR_4->gpio_entry->enable_cnt++;
  if (VAR_4->gpio_entry->enable_cnt > 1)
   return (0);
 } else {
  FUNC_1(VAR_4->gpio_entry->enable_cnt > 0,
      ("Invalid enable count"));
  VAR_4->gpio_entry->enable_cnt--;
  if (VAR_4->gpio_entry->enable_cnt >= 1)
   return (0);
 }
 if (VAR_4->gpio_entry->always_on && !VAR_1)
  return (0);
 if (!VAR_4->param->enable_active_high)
  VAR_1 = !VAR_1;
 VAR_6 = FUNC_0(VAR_5->dev, VAR_5->pin, VAR_1);
 if (VAR_6 != 0) {
  FUNC_2(VAR_3, "Cannot set GPIO pin: %d\n", VAR_5->pin);
  return (VAR_6);
 }
 *VAR_2 = VAR_4->param->enable_delay;
 return (0);
}
