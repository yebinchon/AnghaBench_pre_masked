
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout_t ;
struct uart_softc {int sc_testintr; int sc_timer; scalar_t__ sc_polled; scalar_t__ sc_leaving; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_softc*) ;
 int FUNC_1 (int *,int,int *,struct uart_softc*) ;
 int VAR_8 ;
 int FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_softc*) ;
 int FUNC_4 (struct uart_softc*) ;
 int FUNC_5 (struct uart_softc*) ;
 int FUNC_6 (struct uart_softc*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(void *VAR_10)
{
 struct uart_softc *VAR_11 = VAR_10;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_11->sc_leaving)
  return (VAR_2);

 VAR_12 = 0;
 VAR_14 = VAR_11->sc_testintr;
 while ((!VAR_14 || VAR_12 < 20) && (VAR_13 = FUNC_0(VAR_11)) != 0) {
  VAR_12++;
  if (VAR_13 & VAR_4)
   FUNC_3(VAR_11);
  if (VAR_13 & VAR_3)
   FUNC_2(VAR_11);
  if (VAR_13 & VAR_5)
   FUNC_4(VAR_11);
  if (VAR_13 & VAR_6)
   FUNC_5(VAR_11);
  if (VAR_13 & VAR_7)
   FUNC_6(VAR_11);
 }

 if (VAR_11->sc_polled) {
  FUNC_1(&VAR_11->sc_timer, VAR_8 / VAR_9,
      (timeout_t *)FUNC_7, VAR_11);
 }

 return ((VAR_12 == 0) ? VAR_2 :
     ((VAR_14 && VAR_12 == 20) ? VAR_1 :
     VAR_0));
}
