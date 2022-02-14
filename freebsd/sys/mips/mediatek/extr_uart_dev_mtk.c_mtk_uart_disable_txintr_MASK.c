
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int ) ;

__attribute__((used)) static __inline void
FUNC_3(struct uart_softc *VAR_2)
{
 struct uart_bas *VAR_3 = &VAR_2->sc_bas;
 uint8_t VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_1, VAR_4);
 FUNC_0(VAR_3);
}
