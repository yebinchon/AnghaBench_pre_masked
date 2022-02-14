
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct imx_wdog_softc {int sc_timeout; int sc_pde_enabled; int sc_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_wdog_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct imx_wdog_softc*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct imx_wdog_softc *VAR_10, u_int VAR_11)
{
 uint16_t VAR_12;

 if (VAR_11 < 1 || VAR_11 > 128)
  return (VAR_0);

 FUNC_2(&VAR_10->sc_mtx);
 if (VAR_11 != VAR_10->sc_timeout) {
  VAR_10->sc_timeout = VAR_11;
  VAR_12 = FUNC_0(VAR_10, VAR_1);
  VAR_12 &= ~VAR_3;
  VAR_12 |= ((2 * VAR_11 - 1) << VAR_4);
  FUNC_1(VAR_10, VAR_1, VAR_12 | VAR_2);
 }

 FUNC_1(VAR_10, VAR_7, VAR_8);
 FUNC_1(VAR_10, VAR_7, VAR_9);

 if (VAR_10->sc_pde_enabled) {
  VAR_10->sc_pde_enabled = 0;
  VAR_12 = FUNC_0(VAR_10, VAR_6);
  FUNC_1(VAR_10, VAR_6, VAR_12 & ~VAR_5);
 }
 FUNC_3(&VAR_10->sc_mtx);

 return (0);
}
