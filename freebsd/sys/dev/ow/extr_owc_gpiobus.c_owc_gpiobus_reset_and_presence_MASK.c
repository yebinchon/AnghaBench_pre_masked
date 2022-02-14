
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owc_gpiobus_softc {int dummy; } ;
struct ow_timing {int t_pdl; scalar_t__ t_pdh; scalar_t__ t_rsth; scalar_t__ t_rstl; } ;
typedef int device_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct owc_gpiobus_softc*) ;
 int FUNC_2 (struct owc_gpiobus_softc*,int*) ;
 int FUNC_3 (struct owc_gpiobus_softc*) ;
 int FUNC_4 (struct owc_gpiobus_softc*) ;
 int FUNC_5 (struct owc_gpiobus_softc*) ;
 int FUNC_6 (struct owc_gpiobus_softc*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct owc_gpiobus_softc* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_1, struct ow_timing *VAR_2, int *VAR_3)
{
 struct owc_gpiobus_softc *VAR_4;
 int VAR_5;
 int VAR_6 = -1;

 VAR_4 = FUNC_9(VAR_1);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 FUNC_3(VAR_4);
 FUNC_2(VAR_4, &VAR_6);
 if (VAR_6 == 0) {
  *VAR_3 = -1;
  FUNC_6(VAR_4);
  return (VAR_0);
 }

 FUNC_7();


 FUNC_5(VAR_4);
 FUNC_4(VAR_4);
 FUNC_0(VAR_2->t_rstl);


 FUNC_3(VAR_4);
 FUNC_0(VAR_2->t_pdh + VAR_2->t_pdl / 2);


 FUNC_2(VAR_4, &VAR_6);
 *VAR_3 = !!VAR_6;

 FUNC_8();

 FUNC_0(VAR_2->t_rsth - (VAR_2->t_pdh + VAR_2->t_pdl / 2));






 FUNC_2(VAR_4, &VAR_6);
 if (VAR_6 == 0) {
  *VAR_3 = -1;
  FUNC_6(VAR_4);
  return (VAR_0);
 }

 FUNC_6(VAR_4);

 return (0);
}
