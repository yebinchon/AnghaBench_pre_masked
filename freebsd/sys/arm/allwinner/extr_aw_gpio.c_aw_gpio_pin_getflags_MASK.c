
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct aw_gpio_softc {TYPE_1__* padconf; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ npins; } ;



 int FUNC_0 (struct aw_gpio_softc*) ;



 int FUNC_1 (struct aw_gpio_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct aw_gpio_softc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct aw_gpio_softc*,scalar_t__) ;
 struct aw_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, uint32_t VAR_6, uint32_t *VAR_7)
{
 struct aw_gpio_softc *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_6 >= VAR_8->padconf->npins)
  return (VAR_0);

 FUNC_0(VAR_8);
 VAR_9 = FUNC_2(VAR_8, VAR_6);
 switch (VAR_9) {
 case 131:
  *VAR_7 = VAR_1;
  break;
 case 130:
  *VAR_7 = VAR_2;
  break;
 default:
  *VAR_7 = 0;
  break;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_6);
 switch (VAR_10) {
 case 129:
  *VAR_7 |= VAR_3;
  break;
 case 128:
  *VAR_7 |= VAR_4;
  break;
 default:
  break;
 }

 FUNC_1(VAR_8);

 return (0);
}
