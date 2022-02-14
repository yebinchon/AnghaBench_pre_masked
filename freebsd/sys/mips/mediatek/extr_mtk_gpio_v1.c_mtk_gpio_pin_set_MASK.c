
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mtk_gpio_softc {scalar_t__ num_pins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 int FUNC_2 (struct mtk_gpio_softc*,int ,unsigned int) ;
 struct mtk_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, uint32_t VAR_4, unsigned int VAR_5)
{
 struct mtk_gpio_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = 0;

 if (VAR_4 >= VAR_6->num_pins)
  return (VAR_0);

 FUNC_0(VAR_6);
 if (VAR_5)
  FUNC_2(VAR_6, VAR_2, (1u << VAR_4));
 else
  FUNC_2(VAR_6, VAR_1, (1u << VAR_4));
 FUNC_1(VAR_6);

 return (VAR_7);
}
