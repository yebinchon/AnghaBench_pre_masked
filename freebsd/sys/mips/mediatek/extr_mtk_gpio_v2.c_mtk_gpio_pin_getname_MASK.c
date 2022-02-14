
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mtk_gpio_softc {size_t num_pins; TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int pin_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtk_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct mtk_gpio_softc *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3 >= VAR_5->num_pins)
  return (VAR_0);

 FUNC_1(VAR_4, VAR_5->pins[VAR_3].pin_name, VAR_1 - 1);
 VAR_4[VAR_1 - 1] = '\0';

 return (0);
}
