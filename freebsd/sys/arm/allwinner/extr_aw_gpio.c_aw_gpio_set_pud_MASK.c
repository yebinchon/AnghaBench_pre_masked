
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct aw_gpio_softc {TYPE_2__* padconf; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {size_t port; size_t pin; } ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (struct aw_gpio_softc*) ;
 size_t VAR_0 ;
 size_t FUNC_2 (struct aw_gpio_softc*,int ) ;
 int FUNC_3 (struct aw_gpio_softc*,int ,size_t) ;
 size_t FUNC_4 (struct aw_gpio_softc*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct aw_gpio_softc *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;

 if (FUNC_4(VAR_1, VAR_2) == VAR_3)
  return;


 FUNC_1(VAR_1);

 VAR_4 = VAR_1->padconf->pins[VAR_2].port;
 VAR_2 = VAR_1->padconf->pins[VAR_2].pin;
 VAR_5 = ((VAR_2 & 0x0f) << 1);

 VAR_6 = FUNC_2(VAR_1, FUNC_0(VAR_4, VAR_2 >> 4));
 VAR_6 &= ~(VAR_0 << VAR_5);
 VAR_6 |= (VAR_3 << VAR_5);
 FUNC_3(VAR_1, FUNC_0(VAR_4, VAR_2 >> 4), VAR_6);
}
