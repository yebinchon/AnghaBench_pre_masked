
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u_int ;
struct imx_wdog_softc {int sc_dev; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct imx_wdog_softc*,unsigned long long) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, u_int VAR_4, int *VAR_5)
{
 struct imx_wdog_softc *VAR_6;
 u_int VAR_7;

 VAR_6 = VAR_3;
 if (VAR_4 == 0) {
  if (VAR_2)
   FUNC_0(VAR_6->sc_dev, "Can not be disabled.\n");
  *VAR_5 = VAR_0;
 } else {
  VAR_7 = (u_int)((1ULL << (VAR_4 & VAR_1)) / 1000000000U);
  if (FUNC_1(VAR_6, VAR_7) == 0)
   *VAR_5 = 0;
 }
}
