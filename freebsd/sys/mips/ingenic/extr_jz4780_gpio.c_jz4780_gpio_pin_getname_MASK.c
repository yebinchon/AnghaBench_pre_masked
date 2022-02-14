
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int pin_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct jz4780_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint32_t VAR_4, char *VAR_5)
{
 struct jz4780_gpio_softc *VAR_6;

 if (VAR_4 >= VAR_2)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_3);
 FUNC_1(VAR_5, VAR_6->pins[VAR_4].pin_name, VAR_1 - 1);
 VAR_5[VAR_1 - 1] = '\0';

 return (0);
}
