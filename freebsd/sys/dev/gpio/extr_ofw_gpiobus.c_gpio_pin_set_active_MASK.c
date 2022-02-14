
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* gpio_pin_t ;
struct TYPE_3__ {int flags; int pin; int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(gpio_pin_t VAR_1, bool VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;

 if (VAR_1->flags & VAR_0)
  VAR_4 = VAR_2 ? 0 : 1;
 else
  VAR_4 = VAR_2 ? 1 : 0;

 FUNC_1(VAR_1 != ((void*)0), ("GPIO pin is NULL."));
 FUNC_1(VAR_1->dev != ((void*)0), ("GPIO pin device is NULL."));
 VAR_3 = FUNC_0(VAR_1->dev, VAR_1->pin, VAR_4);
 return (VAR_3);
}
