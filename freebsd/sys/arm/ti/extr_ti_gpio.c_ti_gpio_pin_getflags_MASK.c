
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct ti_gpio_softc*) ;
 int FUNC_2 (struct ti_gpio_softc*) ;
 struct ti_gpio_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ti_gpio_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 struct ti_gpio_softc *VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (FUNC_4(VAR_4, VAR_2) != 0)
  return (VAR_0);


 FUNC_1(VAR_4);
 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_4);

 return (0);
}
