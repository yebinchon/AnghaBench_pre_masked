
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_req {int gp_value; int gp_pin; } ;
typedef int gpreq ;
typedef int gpio_value_t ;
typedef int gpio_pin_t ;
typedef int gpio_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpio_req*,int) ;
 scalar_t__ FUNC_1 (int ,int ,struct gpio_req*) ;

gpio_value_t
FUNC_2(gpio_handle_t VAR_2, gpio_pin_t VAR_3)
{
 struct gpio_req VAR_4;

 FUNC_0(&VAR_4, sizeof(VAR_4));
 VAR_4.gp_pin = VAR_3;
 if (FUNC_1(VAR_2, VAR_0, &VAR_4) < 0)
  return (VAR_1);

 return (VAR_4.gp_value);
}
