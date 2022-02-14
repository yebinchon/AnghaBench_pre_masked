
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct aw_gpio_softc {TYPE_1__* padconf; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ npins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct aw_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 struct aw_gpio_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 >= VAR_5->padconf->npins)
  return (VAR_1);

 *VAR_4 = VAR_0;

 return (0);
}
