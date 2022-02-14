
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_pin {int gp_flags; int gp_caps; int gp_name; int gp_pin; } ;
typedef int gpio_handle_t ;
struct TYPE_3__ {int g_flags; int g_caps; int g_name; int g_pin; } ;
typedef TYPE_1__ gpio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,struct gpio_pin*) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(gpio_handle_t VAR_2, gpio_config_t *VAR_3)
{
 struct gpio_pin VAR_4;

 if (VAR_3 == ((void*)0))
  return (-1);
 VAR_4.gp_pin = VAR_3->g_pin;
 if (FUNC_0(VAR_2, VAR_0, &VAR_4) < 0)
  return (-1);
 FUNC_1(VAR_3->g_name, VAR_4.gp_name, VAR_1);
 VAR_3->g_caps = VAR_4.gp_caps;
 VAR_3->g_flags = VAR_4.gp_flags;

 return (0);
}
