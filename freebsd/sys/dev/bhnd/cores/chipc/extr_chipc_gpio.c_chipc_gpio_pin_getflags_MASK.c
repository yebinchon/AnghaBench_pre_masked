
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*) ;



 int FUNC_1 (struct chipc_gpio_softc*,int ) ;
 int FUNC_2 (struct chipc_gpio_softc*,int,int ) ;
 int FUNC_3 (struct chipc_gpio_softc*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct chipc_gpio_softc*,int) ;
 struct chipc_gpio_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_12, uint32_t VAR_13, uint32_t *VAR_14)
{
 struct chipc_gpio_softc *VAR_15 = FUNC_6(VAR_12);

 if (!FUNC_4(VAR_13))
  return (VAR_0);

 FUNC_0(VAR_15);

 switch (FUNC_5(VAR_15, VAR_13)) {
 case 130:
  *VAR_14 = VAR_4;

  if (!FUNC_1(VAR_15, VAR_11)) {
   if (FUNC_2(VAR_15, VAR_13, VAR_2)) {
    *VAR_14 |= VAR_7;
   } else if (FUNC_2(VAR_15, VAR_13, VAR_1)) {
    *VAR_14 |= VAR_6;
   }
  }
  break;

 case 129:
  *VAR_14 = VAR_5;

  if (!FUNC_1(VAR_15, VAR_10)) {
   if (FUNC_2(VAR_15, VAR_13, VAR_3))
    *VAR_14 |= VAR_8;
  }

  break;

 case 128:
  *VAR_14 = VAR_9|VAR_5;
  break;
 }

 FUNC_3(VAR_15);

 return (0);
}
