
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct jz4780_gpio_softc*) ;
 int VAR_5 ;
 int FUNC_1 (struct jz4780_gpio_softc*) ;
 struct jz4780_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct jz4780_gpio_softc*,int,int) ;
 int FUNC_4 (struct jz4780_gpio_softc*,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 struct jz4780_gpio_softc *VAR_9;
 int VAR_10;

 if (VAR_7 >= VAR_5)
  return (VAR_0);

 VAR_9 = FUNC_2(VAR_6);
 FUNC_0(VAR_9);
 VAR_10 = FUNC_4(VAR_9, VAR_7,
     VAR_8 & (VAR_1 | VAR_2));
 if (VAR_10 == 0)
  VAR_10 = FUNC_3(VAR_9, VAR_7,
      VAR_8 & (VAR_3 | VAR_4));
 FUNC_1(VAR_9);

 return (VAR_10);
}
