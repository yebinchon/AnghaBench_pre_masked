
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct gpiobus_softc {int sc_dev; } ;
struct gpiobus_ivar {size_t npins; int * pins; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;
 struct gpiobus_softc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,size_t*) ;
 int FUNC_3 (int ,int ,size_t) ;
 scalar_t__ FUNC_4 (size_t,size_t) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, device_t VAR_2, uint32_t VAR_3,
    uint32_t VAR_4)
{
 struct gpiobus_softc *VAR_5 = FUNC_1(VAR_1);
 struct gpiobus_ivar *VAR_6 = FUNC_0(VAR_2);
 uint32_t VAR_7;

 if (VAR_3 >= VAR_6->npins)
  return (VAR_0);
 if (FUNC_2(VAR_5->sc_dev, VAR_6->pins[VAR_3], &VAR_7) != 0)
  return (VAR_0);
 if (FUNC_4(VAR_7, VAR_4) != 0)
  return (VAR_0);

 return (FUNC_3(VAR_5->sc_dev, VAR_6->pins[VAR_3], VAR_4));
}
