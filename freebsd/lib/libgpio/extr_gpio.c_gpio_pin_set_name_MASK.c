
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_pin {int gp_name; int gp_pin; } ;
typedef int gppin ;
typedef int gpio_pin_t ;
typedef int gpio_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_pin*,int) ;
 scalar_t__ FUNC_1 (int ,int ,struct gpio_pin*) ;
 int FUNC_2 (int ,char*,int ) ;

int
FUNC_3(gpio_handle_t VAR_2, gpio_pin_t VAR_3, char *VAR_4)
{
 struct gpio_pin VAR_5;

 if (VAR_4 == ((void*)0))
  return (-1);
 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.gp_pin = VAR_3;
 FUNC_2(VAR_5.gp_name, VAR_4, VAR_0);
 if (FUNC_1(VAR_2, VAR_1, &VAR_5) < 0)
  return (-1);

 return (0);
}
