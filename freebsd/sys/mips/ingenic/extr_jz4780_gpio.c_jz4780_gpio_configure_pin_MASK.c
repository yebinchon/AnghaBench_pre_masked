
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4780_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct jz4780_gpio_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct jz4780_gpio_softc*) ;
 struct jz4780_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct jz4780_gpio_softc*,int ,int ) ;
 int FUNC_4 (struct jz4780_gpio_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
    uint32_t VAR_5)
{
 struct jz4780_gpio_softc *VAR_6;
 int VAR_7;

 if (VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_2(VAR_2);
 FUNC_0(VAR_6);
 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4);
 if (VAR_7 == 0)
  VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_5);
 FUNC_1(VAR_6);
 return (VAR_7);
}
