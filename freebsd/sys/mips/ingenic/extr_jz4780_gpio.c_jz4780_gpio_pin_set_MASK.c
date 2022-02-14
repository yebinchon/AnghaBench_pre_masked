
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ pin_func; } ;


 int FUNC_0 (struct jz4780_gpio_softc*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct jz4780_gpio_softc*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct jz4780_gpio_softc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct jz4780_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, uint32_t VAR_6, unsigned int VAR_7)
{
 struct jz4780_gpio_softc *VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 if (VAR_6 >= VAR_1)
  return (VAR_0);

 VAR_10 = VAR_0;
 VAR_9 = (1u << VAR_6);
 VAR_8 = FUNC_3(VAR_5);
 FUNC_1(VAR_8);
 if (VAR_8->pins[VAR_6].pin_func == VAR_2) {
  FUNC_0(VAR_8, VAR_7 ? VAR_4 : VAR_3, VAR_9);
  VAR_10 = 0;
 }
 FUNC_2(VAR_8);

 return (VAR_10);
}
