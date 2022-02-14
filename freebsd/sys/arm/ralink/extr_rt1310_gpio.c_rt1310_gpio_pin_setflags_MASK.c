
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt1310_gpio_softc {int dummy; } ;
struct rt1310_gpio_pinmap {int lp_flags; int lp_port; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rt1310_gpio_pinmap const*,int) ;


 struct rt1310_gpio_softc* FUNC_1 (int ) ;
 struct rt1310_gpio_pinmap* FUNC_2 (int) ;
 int FUNC_3 (struct rt1310_gpio_softc*,int) ;
 int FUNC_4 (struct rt1310_gpio_softc*,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 struct rt1310_gpio_softc *VAR_10 = FUNC_1(VAR_7);
 const struct rt1310_gpio_pinmap *VAR_11;
 uint32_t VAR_12, VAR_13;
 uint32_t VAR_14;

 if (VAR_8 > VAR_4)
  return (VAR_0);

 VAR_11 = FUNC_2(VAR_8);


 if ((VAR_11->lp_flags & (VAR_2 | VAR_3)) !=
     (VAR_2 | VAR_3))
  return (VAR_1);

 if (VAR_9 & VAR_2)
  VAR_12 = 0;

 if (VAR_9 & VAR_3)
  VAR_12 = 1;

 switch (VAR_11->lp_port) {
 case 129:
  VAR_14 = VAR_5;
  break;
 case 128:
  VAR_14 = VAR_6;
  break;
 }

 VAR_13 = FUNC_3(VAR_10, VAR_14);
 if (VAR_9 & VAR_2) {
  VAR_13 &= ~(1 << FUNC_0(VAR_11, VAR_8));
 } else {
  VAR_13 |= (1 << FUNC_0(VAR_11, VAR_8));
 }
 FUNC_4(VAR_10, VAR_14, VAR_13);

 return (0);
}
