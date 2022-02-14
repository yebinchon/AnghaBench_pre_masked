
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_softc {int dummy; } ;
struct gpiobus_ivar {int rl; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,char const*,int) ;
 struct gpiobus_ivar* FUNC_1 (int ) ;
 struct gpiobus_softc* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct gpiobus_ivar*,int ) ;
 scalar_t__ FUNC_7 (struct gpiobus_softc*,int ,char const*) ;
 scalar_t__ FUNC_8 (struct gpiobus_softc*,int ,int) ;
 scalar_t__ FUNC_9 (char const*,int,char*,int*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char const*,int,char*,char const**) ;

__attribute__((used)) static void
FUNC_12(device_t VAR_2, const char *VAR_3, int VAR_4)
{
 struct gpiobus_softc *VAR_5 = FUNC_2(VAR_2);
 struct gpiobus_ivar *VAR_6;
 device_t VAR_7;
 const char *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_2, 0, VAR_3, VAR_4);
 VAR_6 = FUNC_1(VAR_7);
 if (FUNC_9(VAR_3, VAR_4, "pins", &VAR_10) == 0) {
  if (FUNC_8(VAR_5, VAR_7, VAR_10)) {
   FUNC_10(&VAR_6->rl);
   FUNC_6(VAR_6, VAR_0);
   FUNC_4(VAR_2, VAR_7);
   return;
  }
 }
 else if (FUNC_11(VAR_3, VAR_4, "pin_list", &VAR_8) == 0) {
  if (FUNC_7(VAR_5, VAR_7, VAR_8)) {
   FUNC_10(&VAR_6->rl);
   FUNC_6(VAR_6, VAR_0);
   FUNC_4(VAR_2, VAR_7);
   return;
  }
 }
 if (FUNC_9(VAR_3, VAR_4, "irq", &VAR_9) == 0) {
  if (FUNC_3(VAR_7, VAR_1, 0, VAR_9, 1) != 0)
   FUNC_5(VAR_2,
       "warning: bus_set_resource() failed\n");
 }
}
