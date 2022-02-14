
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
typedef enum pin_function { ____Placeholder_pin_function } pin_function ;
struct TYPE_2__ {int pin_flags; int pin_func; } ;


 int FUNC_0 (struct jz4780_gpio_softc*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_1(struct jz4780_gpio_softc *VAR_10, uint32_t VAR_11,
    uint32_t VAR_12)
{
 uint32_t VAR_13 = (1u << VAR_11);

 if (VAR_12 > (uint32_t)VAR_3)
  return (VAR_0);

 FUNC_0(VAR_10, VAR_4, VAR_13);
 FUNC_0(VAR_10, VAR_5, VAR_13);
 if (VAR_12 & 2)
  FUNC_0(VAR_10, VAR_9, VAR_13);
 else
  FUNC_0(VAR_10, VAR_8, VAR_13);
 if (VAR_12 & 1)
  FUNC_0(VAR_10, VAR_7, VAR_13);
 else
  FUNC_0(VAR_10, VAR_6, VAR_13);

 VAR_10->pins[VAR_11].pin_flags &= ~(VAR_1 | VAR_2);
 VAR_10->pins[VAR_11].pin_func = (enum pin_function)VAR_12;
 return (0);
}
