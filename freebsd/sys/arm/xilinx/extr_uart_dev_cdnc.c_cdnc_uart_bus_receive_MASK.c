
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; TYPE_1__* sc_sysdev; struct uart_bas sc_bas; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_bas*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_softc*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct uart_softc *VAR_9)
{
 struct uart_bas *VAR_10 = &VAR_9->sc_bas;
 uint32_t VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_3(VAR_9->sc_hwmtx);


 VAR_11 = FUNC_0(VAR_10, VAR_5);
 if ((VAR_11 & (VAR_3 | VAR_4)) != 0) {
  FUNC_1(VAR_10, VAR_5,
      VAR_11 & (VAR_3 | VAR_4));
  if ((VAR_11 & VAR_4) != 0)
   VAR_13 |= VAR_8;
  if ((VAR_11 & VAR_3) != 0)
   VAR_13 |= VAR_7;
 }

 while ((FUNC_0(VAR_10, VAR_0) &
  VAR_1) == 0) {
  VAR_12 = FUNC_0(VAR_10, VAR_2) & 0xff;
  FUNC_4(VAR_9, VAR_12 | VAR_13);
 }

 FUNC_5(VAR_9->sc_hwmtx);

 return (0);
}
