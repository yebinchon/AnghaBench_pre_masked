
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {scalar_t__ chan; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct uart_softc *VAR_4)
{
 struct uart_bas *VAR_5;
 int VAR_6;
 uint16_t VAR_7;

 VAR_5 = &VAR_4->sc_bas;
 VAR_6 = 0;

 FUNC_3(VAR_4->sc_hwmtx);
 VAR_7 = FUNC_1(VAR_5, FUNC_0(VAR_5->chan - 1));
 FUNC_2(VAR_5, FUNC_0(VAR_5->chan - 1), ~0);
 FUNC_4(VAR_4->sc_hwmtx);
 if (VAR_7 & 0x0001)
  VAR_6 |= VAR_2;
 if (VAR_7 & 0x0002)
  VAR_6 |= VAR_3;
 if (VAR_7 & 0x0004)
  VAR_6 |= VAR_1;
 if (VAR_7 & 0x0020)
  VAR_6 |= VAR_0;

 return (VAR_6);
}
