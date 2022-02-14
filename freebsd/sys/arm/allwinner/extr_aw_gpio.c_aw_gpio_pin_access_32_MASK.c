
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
struct TYPE_3__ {size_t port; size_t pin; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct aw_gpio_softc*) ;
 size_t FUNC_2 (struct aw_gpio_softc*,int ) ;
 int FUNC_3 (struct aw_gpio_softc*) ;
 int FUNC_4 (struct aw_gpio_softc*,int ,size_t) ;
 int VAR_0 ;
 struct aw_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint32_t *VAR_5)
{
 struct aw_gpio_softc *VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_5(VAR_1);
 if (VAR_2 > VAR_6->padconf->npins)
  return (VAR_0);







 VAR_7 = VAR_6->padconf->pins[VAR_2].port;
 VAR_9 = VAR_6->padconf->pins[VAR_2].pin;
 if (VAR_9 != 0)
  return (VAR_0);

 FUNC_1(VAR_6);
 VAR_8 = FUNC_2(VAR_6, FUNC_0(VAR_7));
 if ((VAR_3 | VAR_4) != 0)
  FUNC_4(VAR_6, FUNC_0(VAR_7),
      (VAR_8 & ~VAR_3) ^ VAR_4);
 FUNC_3(VAR_6);

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_8;

 return (0);
}
