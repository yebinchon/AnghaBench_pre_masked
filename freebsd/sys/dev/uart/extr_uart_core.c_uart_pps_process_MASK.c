
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_pps_mode; scalar_t__ sc_pps_captime; int sc_pps; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct uart_softc *VAR_8, int VAR_9)
{
 sbintime_t VAR_10;
 int VAR_11, VAR_12;


 switch(VAR_8->sc_pps_mode & VAR_7) {
 case 129:
  VAR_12 = VAR_3;
  break;
 case 128:
  VAR_12 = VAR_4;
  break;
 default:
  return;
 }


 if ((VAR_9 & FUNC_0(VAR_12)) == 0)
  return;
 FUNC_2(&VAR_8->sc_pps);
 if (VAR_8->sc_pps_mode & VAR_6) {
  VAR_10 = FUNC_1();
  if (VAR_10 > VAR_8->sc_pps_captime + 500 * VAR_2) {
   VAR_8->sc_pps_captime = VAR_10;
   FUNC_3(&VAR_8->sc_pps, VAR_0);
   FUNC_3(&VAR_8->sc_pps, VAR_1);
  }
 } else {
  VAR_11 = VAR_9 & VAR_12;
  if (VAR_8->sc_pps_mode & VAR_5)
   VAR_11 = !VAR_11;
  FUNC_3(&VAR_8->sc_pps, VAR_11 ? VAR_0 :
      VAR_1);
 }
}
