
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct uart_bas*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_8)
{
 struct uart_bas *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;

 VAR_9 = &VAR_8->sc_bas;
 FUNC_4(VAR_8->sc_hwmtx);
 VAR_10 = FUNC_3(VAR_9, VAR_7);
 VAR_11 = FUNC_3(VAR_9, VAR_6);

 if (((VAR_10 & VAR_5) == VAR_5) &&
     (VAR_11 & VAR_0) == VAR_0) {

  FUNC_5(VAR_9, VAR_6, VAR_11 & ~VAR_0);
  FUNC_2(VAR_9);


  while(!(FUNC_3(VAR_9, VAR_7) & VAR_4))
   FUNC_0(VAR_1/2);

  VAR_12 |= VAR_2;
 }

 VAR_12 |= FUNC_1(VAR_10 & VAR_3);

 FUNC_6(VAR_8->sc_hwmtx);

 return (VAR_12);
}
