
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct mtk_gpio_softc {unsigned int num_pins; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 int FUNC_2 (struct mtk_gpio_softc*) ;
 int FUNC_3 (struct mtk_gpio_softc*) ;
 int FUNC_4 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2, unsigned int VAR_3)
{
 struct mtk_gpio_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_1);
 VAR_5 = 0;

 if (VAR_2 >= VAR_4->num_pins)
  return (VAR_0);

 FUNC_2(VAR_4);
 if (VAR_3)
  FUNC_4(VAR_4, FUNC_1(VAR_4), (1u << VAR_2));
 else
  FUNC_4(VAR_4, FUNC_0(VAR_4), (1u << VAR_2));
 FUNC_3(VAR_4);

 return (VAR_5);
}
