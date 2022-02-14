
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gpio_pin_t ;
typedef int * device_t ;
struct TYPE_4__ {int pin; int * dev; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(gpio_pin_t VAR_1)
{
 device_t VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_1(VAR_1->dev != ((void*)0), ("invalid pin state"));

 VAR_2 = FUNC_0(VAR_1->dev);
 if (VAR_2 != ((void*)0))
  FUNC_3(VAR_2, VAR_1->pin);


 FUNC_2(VAR_1, VAR_0);
}
