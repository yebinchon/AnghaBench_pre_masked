
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ pin_func; int pin_flags; } ;


 unsigned int FUNC_0 (struct jz4780_gpio_softc*,int ) ;
 int FUNC_1 (struct jz4780_gpio_softc*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct jz4780_gpio_softc*) ;
 unsigned int VAR_2 ;
 int FUNC_3 (struct jz4780_gpio_softc*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct jz4780_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, uint32_t VAR_8)
{
 struct jz4780_gpio_softc *VAR_9;
 uint32_t VAR_10, VAR_11;
 int VAR_12;

 if (VAR_8 >= VAR_2)
  return (VAR_0);

 VAR_12 = VAR_0;
 VAR_11 = (1u << VAR_8);
 VAR_9 = FUNC_4(VAR_7);
 FUNC_2(VAR_9);
 if (VAR_9->pins[VAR_8].pin_func == VAR_3 &&
     VAR_9->pins[VAR_8].pin_flags & VAR_1) {
  VAR_10 = FUNC_0(VAR_9, VAR_6);
  FUNC_1(VAR_9, (VAR_10 & VAR_11) ? VAR_4 : VAR_5,
      VAR_11);
  VAR_12 = 0;
 }
 FUNC_3(VAR_9);

 return (VAR_12);
}
