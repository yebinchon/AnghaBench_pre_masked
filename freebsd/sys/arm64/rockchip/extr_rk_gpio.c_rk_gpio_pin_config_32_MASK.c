
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rk_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rk_gpio_softc*) ;
 scalar_t__ FUNC_1 (struct rk_gpio_softc*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct rk_gpio_softc*) ;
 int FUNC_3 (struct rk_gpio_softc*,int ,scalar_t__) ;
 struct rk_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    uint32_t *VAR_7)
{
 struct rk_gpio_softc *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_8 = FUNC_4(VAR_4);

 if (VAR_5 != 0 || VAR_6 > 32)
  return (VAR_0);

 VAR_10 = 0;
 VAR_11 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_11 = (VAR_11 << 1) | 1;
  VAR_12 = VAR_7[VAR_13];
  if (VAR_12 & VAR_1) {
   VAR_10 &= ~(1 << VAR_13);
  } else if (VAR_12 & VAR_2) {
   VAR_10 |= (1 << VAR_13);
  }
 }

 FUNC_0(VAR_8);
 VAR_9 = FUNC_1(VAR_8, VAR_3);
 VAR_9 &= ~VAR_11;
 VAR_9 |= VAR_10;
 FUNC_3(VAR_8, VAR_3, VAR_9);
 FUNC_2(VAR_8);

 return (0);
}
