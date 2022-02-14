
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct jz4780_gpio_softc {int dummy; } ;
typedef int device_t ;


 unsigned int FUNC_0 (struct jz4780_gpio_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct jz4780_gpio_softc*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct jz4780_gpio_softc*) ;
 int VAR_2 ;
 struct jz4780_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, uint32_t VAR_4, unsigned int *VAR_5)
{
 struct jz4780_gpio_softc *VAR_6;
 uint32_t VAR_7, VAR_8;

 if (VAR_4 >= VAR_1)
  return (VAR_0);

 VAR_8 = (1u << VAR_4);
 VAR_6 = FUNC_3(VAR_3);
 FUNC_1(VAR_6);
 VAR_7 = FUNC_0(VAR_6, VAR_2);
 FUNC_2(VAR_6);
 *VAR_5 = (VAR_7 & VAR_8) ? 1 : 0;

 return (0);
}
