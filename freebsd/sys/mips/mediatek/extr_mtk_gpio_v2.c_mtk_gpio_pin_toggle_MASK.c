
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct mtk_gpio_softc {size_t num_pins; TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int pin_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 int FUNC_2 (struct mtk_gpio_softc*) ;
 int FUNC_3 (struct mtk_gpio_softc*) ;
 int FUNC_4 (struct mtk_gpio_softc*) ;
 size_t FUNC_5 (struct mtk_gpio_softc*,int ) ;
 int FUNC_6 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, uint32_t VAR_3)
{
 struct mtk_gpio_softc *VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_4 = FUNC_7(VAR_2);
 VAR_6 = 0;

 if (VAR_3 >= VAR_4->num_pins)
  return (VAR_0);

 FUNC_3(VAR_4);
 if(!(VAR_4->pins[VAR_3].pin_flags & VAR_1)) {
  VAR_6 = VAR_0;
  goto out;
 }
 VAR_5 = FUNC_5(VAR_4, FUNC_0(VAR_4));
 VAR_5 &= (1u << VAR_3);
 if (VAR_5)
  FUNC_6(VAR_4, FUNC_1(VAR_4), (1u << VAR_3));
 else
  FUNC_6(VAR_4, FUNC_2(VAR_4), (1u << VAR_3));

out:
 FUNC_4(VAR_4);

 return (VAR_6);
}
