
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt1310_gpio_softc {int dummy; } ;
struct rt1310_gpio_pinmap {int lp_port; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rt1310_gpio_pinmap const*,int) ;


 struct rt1310_gpio_softc* FUNC_1 (int ) ;
 struct rt1310_gpio_pinmap* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int,int*) ;
 int FUNC_4 (struct rt1310_gpio_softc*,int) ;
 int FUNC_5 (struct rt1310_gpio_softc*,int,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 struct rt1310_gpio_softc *VAR_8 = FUNC_1(VAR_5);
 const struct rt1310_gpio_pinmap *VAR_9;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;

 VAR_9 = FUNC_2(VAR_6);

 if (FUNC_3(VAR_5, VAR_6, &VAR_11))
  return (VAR_1);

 if ((VAR_11 & VAR_2) == 0)
  return (VAR_0);

 switch (VAR_9->lp_port) {
 case 129:
  VAR_12 = VAR_3;
  break;
 case 128:
  VAR_12 = VAR_4;
  break;
 }

 VAR_10 = FUNC_4(VAR_8, VAR_12);
 if (VAR_7 == 1) {
  VAR_10 |= (1 << FUNC_0(VAR_9, VAR_6));
 } else {
  VAR_10 &= ~(1 << FUNC_0(VAR_9, VAR_6));
 }
 FUNC_5(VAR_8, VAR_12, VAR_10);

 return (0);
}
