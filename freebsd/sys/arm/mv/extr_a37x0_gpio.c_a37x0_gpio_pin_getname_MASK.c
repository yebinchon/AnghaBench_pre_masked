
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct a37x0_gpio_softc {scalar_t__ sc_npins; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct a37x0_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct a37x0_gpio_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 >= VAR_5->sc_npins)
  return (VAR_0);
 FUNC_1(VAR_4, VAR_1, "pin %d", VAR_3);

 return (0);
}
