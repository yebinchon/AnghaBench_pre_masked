
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct aw_gpio_softc {TYPE_2__* padconf; } ;
typedef int device_t ;
struct TYPE_4__ {size_t npins; TYPE_1__* pins; } ;
struct TYPE_3__ {size_t port; scalar_t__ pin; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct aw_gpio_softc*,size_t,size_t) ;
 struct aw_gpio_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint32_t VAR_4, uint32_t VAR_5,
    uint32_t *VAR_6)
{
 struct aw_gpio_softc *VAR_7;
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_4 > VAR_7->padconf->npins)
  return (VAR_0);

 VAR_8 = VAR_7->padconf->pins[VAR_4].port;
 if (VAR_7->padconf->pins[VAR_4].pin != 0)
  return (VAR_0);
 for (VAR_10 = 0, VAR_9 = VAR_4; VAR_10 == 0 && VAR_9 < VAR_5; ++VAR_9) {
  if (VAR_6[VAR_9] & (VAR_1 | VAR_2))
   VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_6[VAR_9]);
 }

 return (VAR_10);
}
