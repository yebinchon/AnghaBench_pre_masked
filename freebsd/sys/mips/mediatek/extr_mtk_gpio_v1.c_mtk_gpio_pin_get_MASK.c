
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct mtk_gpio_softc {unsigned int num_pins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 unsigned int FUNC_2 (struct mtk_gpio_softc*,int ) ;
 struct mtk_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, unsigned int *VAR_4)
{
 struct mtk_gpio_softc *VAR_5;
 uint32_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_2);
 VAR_7 = 0;

 if (VAR_3 >= VAR_5->num_pins)
  return (VAR_0);

 FUNC_0(VAR_5);
 VAR_6 = FUNC_2(VAR_5, VAR_1);
 *VAR_4 = (VAR_6 & (1u << VAR_3)) ? 1 : 0;
 FUNC_1(VAR_5);

 return (VAR_7);
}
