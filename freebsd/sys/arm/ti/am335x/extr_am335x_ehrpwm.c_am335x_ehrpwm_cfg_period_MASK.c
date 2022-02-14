
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct am335x_ehrpwm_softc {int sc_clkfreq; int sc_clktick; int sc_period; int sc_dev; } ;


 int FUNC_0 (struct am335x_ehrpwm_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct am335x_ehrpwm_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct am335x_ehrpwm_softc*) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (struct am335x_ehrpwm_softc*,int,int ) ;
 int FUNC_6 (int ,char*,int,int,int,int,int,int,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static bool
FUNC_8(struct am335x_ehrpwm_softc *VAR_6, u_int VAR_7)
{
 uint16_t VAR_8;
 u_int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


 if (VAR_7 < 2 * VAR_2 / VAR_3) {
  VAR_6->sc_clkfreq = 0;
  VAR_6->sc_clktick = 0;
  VAR_6->sc_period = 0;
  return (0);
 }





 VAR_13 = 0;
 for (VAR_9 = 0; VAR_9 < 8; ++VAR_9) {
  const u_int VAR_14 = 1 << VAR_9;
  for (VAR_10 = 0; VAR_10 < 8; ++VAR_10) {
   const u_int VAR_15 = FUNC_7(1, VAR_10 * 2);
   VAR_11 = VAR_3 / (VAR_14 * VAR_15);
   VAR_12 = VAR_2 / VAR_11;
   if (VAR_7 / VAR_12 < 65536) {
    VAR_13 = VAR_7 / VAR_12;
    break;
   }
  }
  if (VAR_13 != 0)
   break;
 }


 if (VAR_13 == 0)
  return (0);





 if (VAR_6->sc_clkfreq != VAR_11 || VAR_6->sc_clktick != VAR_12 ||
     VAR_6->sc_period != VAR_13 * VAR_12) {

  VAR_6->sc_clkfreq = VAR_11;
  VAR_6->sc_clktick = VAR_12;
  VAR_6->sc_period = VAR_13 * VAR_12;

  FUNC_2(VAR_6);
  VAR_8 = FUNC_0(VAR_6, VAR_0);
  VAR_8 &= ~(VAR_4 | VAR_5);
  VAR_8 |= FUNC_3(VAR_9) | FUNC_4(VAR_10);
  FUNC_1(VAR_6, VAR_0, VAR_8);
  FUNC_1(VAR_6, VAR_1, VAR_13 - 1);
  FUNC_5(VAR_6, 0, 0);
  FUNC_5(VAR_6, 1, 0);
 }

 return (1);
}
