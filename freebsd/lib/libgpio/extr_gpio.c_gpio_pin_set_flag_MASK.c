
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int gpio_pin_t ;
typedef int gpio_handle_t ;
struct TYPE_5__ {int g_flags; int g_pin; } ;
typedef TYPE_1__ gpio_config_t ;
typedef int cfg ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(gpio_handle_t VAR_0, gpio_pin_t VAR_1, uint32_t VAR_2)
{
 gpio_config_t VAR_3;

 FUNC_0(&VAR_3, sizeof(VAR_3));
 VAR_3.g_pin = VAR_1;
 if (FUNC_1(VAR_0, &VAR_3) < 0)
  return (-1);
 VAR_3.g_flags = VAR_2;

 return (FUNC_2(VAR_0, &VAR_3));
}
