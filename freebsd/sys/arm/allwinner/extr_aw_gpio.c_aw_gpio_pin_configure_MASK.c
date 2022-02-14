
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct aw_gpio_softc {TYPE_1__* padconf; } ;
struct TYPE_2__ {scalar_t__ npins; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct aw_gpio_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (struct aw_gpio_softc*,scalar_t__) ;
 int FUNC_2 (struct aw_gpio_softc*,scalar_t__,int*) ;
 int FUNC_3 (struct aw_gpio_softc*,scalar_t__,int) ;
 int FUNC_4 (struct aw_gpio_softc*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct aw_gpio_softc*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(struct aw_gpio_softc *VAR_12, uint32_t VAR_13, uint32_t VAR_14)
{
 u_int VAR_15;
 int VAR_16 = 0;


 FUNC_0(VAR_12);

 if (VAR_13 > VAR_12->padconf->npins)
  return (VAR_5);


 if (VAR_14 & VAR_6) {
  VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_0);
 } else if ((VAR_14 & VAR_7) &&
     FUNC_1(VAR_12, VAR_13) != VAR_2) {
  if (VAR_14 & VAR_9) {
   FUNC_3(VAR_12, VAR_13, 0);
  } else if (VAR_14 & VAR_8) {
   FUNC_3(VAR_12, VAR_13, 1);
  } else {

   VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_0);
   if (VAR_16 == 0) {
    FUNC_2(VAR_12, VAR_13, &VAR_15);
    FUNC_3(VAR_12, VAR_13, VAR_15);
   }
  }
  if (VAR_16 == 0)
   VAR_16 = FUNC_4(VAR_12, VAR_13, VAR_2);
 }

 if (VAR_16)
  return (VAR_16);


 if (VAR_14 & VAR_11)
  FUNC_5(VAR_12, VAR_13, VAR_4);
 else if (VAR_14 & VAR_10)
  FUNC_5(VAR_12, VAR_13, VAR_3);
 else
  FUNC_5(VAR_12, VAR_13, VAR_1);

 return (0);
}
