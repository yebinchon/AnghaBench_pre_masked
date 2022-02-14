
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int sc_busdev; } ;
struct gpiobus_ivar {int npins; int* pins; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct gpiobus_ivar*) ;

__attribute__((used)) static int
FUNC_4(struct gpiobus_softc *VAR_1, device_t VAR_2, int VAR_3)
{
 struct gpiobus_ivar *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6;

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  if (VAR_3 & (1 << VAR_5))
   VAR_6++;
 }
 if (VAR_6 == 0) {
  FUNC_1(VAR_2, "empty pin mask\n");
  return (VAR_0);
 }
 VAR_4->npins = VAR_6;
 if (FUNC_3(VAR_4) != 0) {
  FUNC_1(VAR_2, "cannot allocate device ivars\n");
  return (VAR_0);
 }
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  if ((VAR_3 & (1 << VAR_5)) == 0)
   continue;
  VAR_4->pins[VAR_6++] = VAR_5;
 }

 if (FUNC_2(VAR_1->sc_busdev, VAR_2) != 0)
  return (VAR_0);
 return (0);
}
