
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owc_gpiobus_softc {int dummy; } ;
struct ow_timing {int t_rdv; int t_slot; int t_rec; int t_lowr; } ;
typedef int sbintime_t ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct owc_gpiobus_softc*) ;
 int FUNC_2 (struct owc_gpiobus_softc*,int*) ;
 int FUNC_3 (struct owc_gpiobus_softc*) ;
 int FUNC_4 (struct owc_gpiobus_softc*) ;
 int FUNC_5 (struct owc_gpiobus_softc*) ;
 int FUNC_6 (struct owc_gpiobus_softc*) ;
 int VAR_0 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct owc_gpiobus_softc* FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1, struct ow_timing *VAR_2, int *VAR_3)
{
 struct owc_gpiobus_softc *VAR_4;
 int VAR_5, VAR_6;
 sbintime_t VAR_7, VAR_8;

 VAR_4 = FUNC_9(VAR_1);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_7();


 VAR_7 = FUNC_10();
 FUNC_5(VAR_4);
 FUNC_4(VAR_4);
 FUNC_0(VAR_2->t_lowr);






 FUNC_3(VAR_4);
 do {
  VAR_8 = FUNC_10();
  FUNC_2(VAR_4, &VAR_6);
 } while (VAR_8 - VAR_7 < (VAR_2->t_rdv + 2) * VAR_0 && VAR_6 == 0);
 FUNC_8();

 if (VAR_8 - VAR_7 < VAR_2->t_rdv * VAR_0)
  *VAR_3 = 1;
 else
  *VAR_3 = 0;


 do {
  VAR_8 = FUNC_10();
 } while (VAR_8 - VAR_7 < (VAR_2->t_slot + VAR_2->t_rec) * VAR_0);

 FUNC_6(VAR_4);

 return (VAR_5);
}
