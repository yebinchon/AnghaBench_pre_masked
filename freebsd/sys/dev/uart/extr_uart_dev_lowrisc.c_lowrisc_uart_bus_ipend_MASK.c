
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_5)
{
 struct uart_bas *VAR_6;
 int VAR_7;

 VAR_6 = &VAR_5->sc_bas;

 VAR_7 = 0;

 FUNC_2(VAR_5->sc_hwmtx);
 if ((FUNC_0(VAR_6, VAR_3) & VAR_0) == 0)
  VAR_7 |= VAR_2;
 FUNC_1(VAR_6, VAR_4, VAR_1);
 FUNC_3(VAR_5->sc_hwmtx);

 return (VAR_7);
}
