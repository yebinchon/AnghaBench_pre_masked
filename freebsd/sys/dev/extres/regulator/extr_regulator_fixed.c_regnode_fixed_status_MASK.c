
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct regnode_fixed_sc {TYPE_1__* param; TYPE_2__* gpio_entry; } ;
struct regnode {int dummy; } ;
struct gpiobus_pin {int pin; int dev; } ;
struct TYPE_4__ {struct gpiobus_pin gpio_pin; } ;
struct TYPE_3__ {int enable_active_high; } ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int VAR_0 ;
 struct regnode_fixed_sc* FUNC_1 (struct regnode*) ;

__attribute__((used)) static int
FUNC_2(struct regnode *VAR_1, int *VAR_2)
{
 struct regnode_fixed_sc *VAR_3;
 struct gpiobus_pin *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(VAR_1);

 *VAR_2 = 0;
 if (VAR_3->gpio_entry == ((void*)0)) {
  *VAR_2 = VAR_0;
  return (0);
 }
 VAR_4 = &VAR_3->gpio_entry->gpio_pin;

 VAR_6 = FUNC_0(VAR_4->dev, VAR_4->pin, &VAR_5);
 if (VAR_6 == 0) {
  if (!VAR_3->param->enable_active_high ^ (VAR_5 != 0))
   *VAR_2 = VAR_0;
 }
 return (VAR_6);
}
