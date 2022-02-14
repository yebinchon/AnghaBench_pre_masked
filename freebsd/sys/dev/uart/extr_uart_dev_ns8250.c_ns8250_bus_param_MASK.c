
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;
struct ns8250_softc {scalar_t__ busy_detect; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uart_bas*,int,int,int,int) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct uart_softc *VAR_3, int VAR_4, int VAR_5,
    int VAR_6, int VAR_7)
{
 struct ns8250_softc *VAR_8;
 struct uart_bas *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = (struct ns8250_softc*)VAR_3;
 VAR_9 = &VAR_3->sc_bas;
 FUNC_3(VAR_3->sc_hwmtx);





 if (VAR_8->busy_detect != 0) {




  VAR_11 = 10 * 1024;
  while (((FUNC_2(VAR_9, VAR_0) & VAR_2) != 0) &&
      --VAR_11)
   FUNC_0(4);

  if (VAR_11 <= 0) {

   FUNC_4(VAR_3->sc_hwmtx);
   return (VAR_1);
  }
 }

 VAR_10 = FUNC_1(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_4(VAR_3->sc_hwmtx);
 return (VAR_10);
}
