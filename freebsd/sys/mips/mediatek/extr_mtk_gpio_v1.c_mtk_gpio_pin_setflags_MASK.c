
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mtk_gpio_softc {scalar_t__ num_pins; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mtk_gpio_softc*) ;
 int FUNC_1 (struct mtk_gpio_softc*) ;
 struct mtk_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct mtk_gpio_softc*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mtk_gpio_softc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 struct mtk_gpio_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_5);

 if (VAR_6 >= VAR_8->num_pins)
  return (VAR_0);

 FUNC_0(VAR_8);
 VAR_9 = FUNC_3(VAR_8, VAR_6,
     VAR_7 & (VAR_1 | VAR_4));
 if (VAR_9 == 0)
  VAR_9 = FUNC_4(VAR_8, VAR_6,
      VAR_7 & (VAR_2 | VAR_3));
 FUNC_1(VAR_8);

 return (VAR_9);
}
