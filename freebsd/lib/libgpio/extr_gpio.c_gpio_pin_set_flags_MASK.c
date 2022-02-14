
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_pin {int gp_flags; int gp_pin; } ;
typedef int gpio_handle_t ;
struct TYPE_3__ {int g_flags; int g_pin; } ;
typedef TYPE_1__ gpio_config_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct gpio_pin*) ;

int
FUNC_1(gpio_handle_t VAR_1, gpio_config_t *VAR_2)
{
 struct gpio_pin VAR_3;

 if (VAR_2 == ((void*)0))
  return (-1);
 VAR_3.gp_pin = VAR_2->g_pin;
 VAR_3.gp_flags = VAR_2->g_flags;
 if (FUNC_0(VAR_1, VAR_0, &VAR_3) < 0)
  return (-1);

 return (0);
}
