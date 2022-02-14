
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_txdatasz; int* sc_txbuf; int sc_txbusy; int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_bas*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_5)
{
 struct uart_bas *VAR_6;
 int VAR_7;
 uint32_t VAR_8;

 VAR_6 = &VAR_5->sc_bas;
 FUNC_3(VAR_5->sc_hwmtx);





 while ((FUNC_2(VAR_6, VAR_2) &
     VAR_3) == 0)
  FUNC_0();

 for (VAR_7 = 0; VAR_7 < VAR_5->sc_txdatasz; VAR_7++) {
  FUNC_4(VAR_6, VAR_4, VAR_5->sc_txbuf[VAR_7]);
  FUNC_1(VAR_6);
 }

 VAR_5->sc_txbusy = 1;

 VAR_8 = FUNC_2(VAR_6, VAR_0);
 VAR_8 |= VAR_1;
 FUNC_4(VAR_6, VAR_0, VAR_8);
 FUNC_1(VAR_6);

 FUNC_5(VAR_5->sc_hwmtx);

 return (0);
}
