
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct aw_gpio_softc {TYPE_2__* padconf; } ;
struct TYPE_4__ {size_t npins; TYPE_1__* pins; } ;
struct TYPE_3__ {size_t port; size_t pin; } ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct aw_gpio_softc*) ;
 size_t FUNC_2 (struct aw_gpio_softc*,int ) ;

__attribute__((used)) static uint32_t
FUNC_3(struct aw_gpio_softc *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;


 FUNC_1(VAR_0);

 if (VAR_1 > VAR_0->padconf->npins)
  return (0);
 VAR_2 = VAR_0->padconf->pins[VAR_1].port;
 VAR_1 = VAR_0->padconf->pins[VAR_1].pin;
 VAR_4 = ((VAR_1 & 0x07) << 2);

 VAR_3 = FUNC_2(VAR_0, FUNC_0(VAR_2, VAR_1 >> 3));

 return ((VAR_3 >> VAR_4) & 0x7);
}
