
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct mtk_gpio_softc {TYPE_1__* pins; } ;
struct TYPE_2__ {int pin_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 unsigned int FUNC_1 (struct mtk_gpio_softc*,int ) ;
 int FUNC_2 (struct mtk_gpio_softc*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct mtk_gpio_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5, VAR_6 = (1u << VAR_3);

 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_2));
 if (VAR_4)
  VAR_5 |= VAR_6;
 else
  VAR_5 &= ~VAR_6;
 FUNC_2(VAR_2, FUNC_0(VAR_2), VAR_5);
 VAR_2->pins[VAR_3].pin_flags &= ~(VAR_0 | VAR_1);
 VAR_2->pins[VAR_3].pin_flags |= VAR_4;

 return (0);
}
