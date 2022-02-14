
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_5, int VAR_6)
{
 struct uart_bas *VAR_7 = &VAR_5->sc_bas;
 uint32_t VAR_8 = FUNC_1(VAR_7, VAR_0);

 if (VAR_6 & VAR_4) {
  FUNC_2(VAR_7, VAR_0, VAR_8|VAR_2);
  FUNC_0(VAR_7);
 }
 if (VAR_6 & VAR_3) {
  FUNC_2(VAR_7, VAR_0, VAR_8|VAR_1);
  FUNC_0(VAR_7);
 }
 FUNC_2(VAR_7, VAR_0, VAR_8);
 FUNC_0(VAR_7);
 return (0);
}
