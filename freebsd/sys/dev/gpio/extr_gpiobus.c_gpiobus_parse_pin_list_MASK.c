
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int sc_busdev; } ;
struct gpiobus_ivar {int npins; unsigned long* pins; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct gpiobus_ivar*) ;
 unsigned long FUNC_4 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_5(struct gpiobus_softc *VAR_1, device_t VAR_2,
    const char *VAR_3)
{
 struct gpiobus_ivar *VAR_4 = FUNC_0(VAR_2);
 const char *VAR_5;
 char *VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_5 = VAR_3;
 for (;;) {
  VAR_7 = FUNC_4(VAR_5, &VAR_6, 0);
  if (VAR_6 == VAR_5)
   break;
  VAR_9++;
  if (*VAR_6 == '\0')
   break;
  VAR_5 = VAR_6 + 1;
 }

 if (*VAR_6 != '\0') {
  FUNC_1(VAR_2, "garbage in the pin list: %s\n", VAR_6);
  return (VAR_0);
 }
 if (VAR_9 == 0) {
  FUNC_1(VAR_2, "empty pin list\n");
  return (VAR_0);
 }

 VAR_4->npins = VAR_9;
 if (FUNC_3(VAR_4) != 0) {
  FUNC_1(VAR_2, "cannot allocate device ivars\n");
  return (VAR_0);
 }

 VAR_8 = 0;
 VAR_5 = VAR_3;
 for (;;) {
  VAR_7 = FUNC_4(VAR_5, &VAR_6, 0);

  VAR_4->pins[VAR_8] = VAR_7;

  if (*VAR_6 == '\0')
   break;
  VAR_8++;
  VAR_5 = VAR_6 + 1;
 }

 if (FUNC_2(VAR_1->sc_busdev, VAR_2) != 0)
  return (VAR_0);
 return (0);
}
