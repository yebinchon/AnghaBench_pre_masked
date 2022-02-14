
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
 int FUNC_0 (struct uart_bas*,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (struct uart_bas*) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_3)
{
 struct uart_bas *VAR_4 = &VAR_3->sc_bas;
 uint32_t VAR_5;


 FUNC_1(VAR_4, VAR_2, 0x00000000);


 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_1, VAR_5);
 FUNC_2(VAR_4);

 return (0);
}
