
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct mtk_gpio_softc {TYPE_1__* pins; } ;
struct TYPE_2__ {unsigned int pin_caps; unsigned int pin_flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct mtk_gpio_softc*,int ) ;
 int FUNC_1 (struct mtk_gpio_softc*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct mtk_gpio_softc *VAR_4, uint32_t VAR_5,
    uint32_t VAR_6)
{
 uint32_t VAR_7, VAR_8 = (1u << VAR_5);

 if (!(VAR_4->pins[VAR_5].pin_caps & VAR_6))
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_4, VAR_3);
 if (VAR_6 == VAR_1)
  VAR_7 &= ~VAR_8;
 else
  VAR_7 |= VAR_8;
 FUNC_1(VAR_4, VAR_3, VAR_7);

 VAR_4->pins[VAR_5].pin_flags &= ~(VAR_1 | VAR_2);
 VAR_4->pins[VAR_5].pin_flags |= VAR_6;

 return (0);
}
