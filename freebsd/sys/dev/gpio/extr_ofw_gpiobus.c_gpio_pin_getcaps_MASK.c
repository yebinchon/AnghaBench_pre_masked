
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gpio_pin_t ;
struct TYPE_3__ {int pin; int * dev; } ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(gpio_pin_t VAR_0, uint32_t *VAR_1)
{

 FUNC_1(VAR_0 != ((void*)0), ("GPIO pin is NULL."));
 FUNC_1(VAR_0->dev != ((void*)0), ("GPIO pin device is NULL."));
 return (FUNC_0(VAR_0->dev, VAR_0->pin, VAR_1));
}
