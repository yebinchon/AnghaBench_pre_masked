
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct aw_gpio_softc {TYPE_1__* padconf; } ;
typedef int device_t ;
struct TYPE_4__ {size_t port; size_t pin; } ;
struct TYPE_3__ {size_t npins; TYPE_2__* pins; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (struct aw_gpio_softc*) ;
 size_t FUNC_2 (struct aw_gpio_softc*,int ) ;
 int FUNC_3 (struct aw_gpio_softc*) ;
 int FUNC_4 (struct aw_gpio_softc*,int ,size_t) ;
 int VAR_0 ;
 struct aw_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2)
{
 struct aw_gpio_softc *VAR_3;
 uint32_t VAR_4, VAR_5;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_2 > VAR_3->padconf->npins)
  return (VAR_0);

 VAR_4 = VAR_3->padconf->pins[VAR_2].port;
 VAR_2 = VAR_3->padconf->pins[VAR_2].pin;

 FUNC_1(VAR_3);
 VAR_5 = FUNC_2(VAR_3, FUNC_0(VAR_4));
 if (VAR_5 & (1 << VAR_2))
  VAR_5 &= ~(1 << VAR_2);
 else
  VAR_5 |= (1 << VAR_2);
 FUNC_4(VAR_3, FUNC_0(VAR_4), VAR_5);
 FUNC_3(VAR_3);

 return (0);
}
