
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gpio_handle_t ;
struct TYPE_5__ {int g_pin; } ;
typedef TYPE_1__ gpio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;

int
FUNC_3(gpio_handle_t VAR_3, gpio_config_t **VAR_4)
{
 int VAR_5, VAR_6;
 gpio_config_t *VAR_7;

 *VAR_4 = ((void*)0);
 if (FUNC_2(VAR_3, VAR_1, &VAR_5) < 0)
  return (-1);

 if (VAR_5 < 0 || VAR_5 > 4096) {
  VAR_2 = VAR_0;
  return (-1);
 }
 VAR_7 = FUNC_0(VAR_5 + 1, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (-1);
 for (VAR_6 = 0; VAR_6 <= VAR_5; VAR_6++) {
  VAR_7[VAR_6].g_pin = VAR_6;
  FUNC_1(VAR_3, &VAR_7[VAR_6]);
 }
 *VAR_4 = VAR_7;

 return (VAR_5);
}
