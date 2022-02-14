
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_req {scalar_t__ gp_value; int gp_pin; } ;
typedef int gpreq ;
typedef scalar_t__ gpio_value_t ;
typedef int gpio_pin_t ;
typedef int gpio_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gpio_req*,int) ;
 scalar_t__ FUNC_1 (int ,int ,struct gpio_req*) ;

int
FUNC_2(gpio_handle_t VAR_2, gpio_pin_t VAR_3, gpio_value_t VAR_4)
{
 struct gpio_req VAR_5;

 if (VAR_4 == VAR_1)
  return (-1);
 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.gp_pin = VAR_3;
 VAR_5.gp_value = VAR_4;
 if (FUNC_1(VAR_2, VAR_0, &VAR_5) < 0)
  return (-1);

 return (0);
}
