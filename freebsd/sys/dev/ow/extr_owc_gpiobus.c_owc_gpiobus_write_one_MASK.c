
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owc_gpiobus_softc {int dummy; } ;
struct ow_timing {scalar_t__ t_rec; scalar_t__ t_low1; scalar_t__ t_slot; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct owc_gpiobus_softc*) ;
 int FUNC_2 (struct owc_gpiobus_softc*) ;
 int FUNC_3 (struct owc_gpiobus_softc*) ;
 int FUNC_4 (struct owc_gpiobus_softc*) ;
 int FUNC_5 (struct owc_gpiobus_softc*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct owc_gpiobus_softc* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_0, struct ow_timing *VAR_1)
{
 struct owc_gpiobus_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_8(VAR_0);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);

 FUNC_6();


 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_0(VAR_1->t_low1);


 FUNC_2(VAR_2);
 FUNC_0(VAR_1->t_slot - VAR_1->t_low1 + VAR_1->t_rec);

 FUNC_7();

 FUNC_5(VAR_2);

 return (0);
}
