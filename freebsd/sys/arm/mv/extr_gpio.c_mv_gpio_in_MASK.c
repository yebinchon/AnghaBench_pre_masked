
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct mv_gpio_softc {TYPE_1__* gpio_setup; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,size_t) ;
 scalar_t__ FUNC_3 (int ,size_t,int) ;

uint8_t
FUNC_4(device_t VAR_3, uint32_t VAR_4)
{
 uint8_t VAR_5;
 struct mv_gpio_softc *VAR_6;
 VAR_6 = (struct mv_gpio_softc *)FUNC_1(VAR_3);

 FUNC_0();

 if (VAR_6->gpio_setup[VAR_4].gp_flags & VAR_0) {
  if (VAR_6->gpio_setup[VAR_4].gp_flags & VAR_2)
   VAR_5 = (FUNC_2(VAR_3, VAR_4) ? 0 : 1);
  else
   VAR_5 = (FUNC_2(VAR_3, VAR_4) ? 1 : 0);
 } else if (VAR_6->gpio_setup[VAR_4].gp_flags & VAR_1) {
  if (VAR_6->gpio_setup[VAR_4].gp_flags & VAR_2)
   VAR_5 = (FUNC_3(VAR_3, VAR_4, 1) ? 0 : 1);
  else
   VAR_5 = (FUNC_3(VAR_3, VAR_4, 1) ? 1 : 0);
 } else
  VAR_5 = (FUNC_3(VAR_3, VAR_4, 0) ? 1 : 0);

 return (VAR_5);
}
