
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_req {int gp_pin; } ;
typedef int gpreq ;
typedef int gpio_pin_t ;
typedef int gpio_handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_req*,int) ;
 scalar_t__ FUNC_1 (int ,int ,struct gpio_req*) ;

int
FUNC_2(gpio_handle_t VAR_1, gpio_pin_t VAR_2)
{
 struct gpio_req VAR_3;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.gp_pin = VAR_2;
 if (FUNC_1(VAR_1, VAR_0, &VAR_3) < 0)
  return (-1);

 return (0);
}
