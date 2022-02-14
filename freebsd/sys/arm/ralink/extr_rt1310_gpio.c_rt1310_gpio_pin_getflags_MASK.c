
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rt1310_gpio_softc {int dummy; } ;
struct rt1310_gpio_pinmap {scalar_t__ lp_flags; int lp_port; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rt1310_gpio_pinmap const*,scalar_t__) ;


 struct rt1310_gpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 struct rt1310_gpio_pinmap* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct rt1310_gpio_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, uint32_t VAR_7, uint32_t *VAR_8)
{
 struct rt1310_gpio_softc *VAR_9 = FUNC_1(VAR_6);
 const struct rt1310_gpio_pinmap *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 if (VAR_7 > VAR_3)
  return (VAR_0);

 VAR_10 = FUNC_3(VAR_7);


 if ((VAR_10->lp_flags & (VAR_1 | VAR_2)) !=
     (VAR_1 | VAR_2)) {
  *VAR_8 = VAR_10->lp_flags;
  return (0);
 }

 switch (VAR_10->lp_port) {
 case 129:
  VAR_11 = FUNC_4(VAR_9, VAR_4);
  VAR_12 = (VAR_11 & (1 << FUNC_0(VAR_10, VAR_7)));
  break;
 case 128:
  VAR_11 = FUNC_4(VAR_9, VAR_5);
  VAR_12 = (VAR_11 & (1 << FUNC_0(VAR_10, VAR_7)));
  break;
 default:
  FUNC_2("unknown GPIO port");
 }

 *VAR_8 = VAR_12 ? VAR_2 : VAR_1;

 return (0);
}
