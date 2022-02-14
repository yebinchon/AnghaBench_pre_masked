
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
 int FUNC_2 (struct aw_gpio_softc*,scalar_t__,scalar_t__) ;
 struct aw_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct aw_gpio_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_2 > VAR_4->padconf->npins)
  return (VAR_0);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
 FUNC_1(VAR_4);

 return (VAR_5);
}
