
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwsig; struct uart_bas sc_bas; int sc_dev; } ;
struct oct16550_softc {int mcr; int fcr; int ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct uart_softc*,int) ;
 int FUNC_2 (struct uart_softc*) ;
 int FUNC_3 (struct uart_bas*) ;
 int FUNC_4 (struct uart_bas*,int ) ;
 int FUNC_5 (struct uart_bas*) ;
 int FUNC_6 (struct uart_bas*,int ) ;
 int FUNC_7 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_8 (struct uart_softc *VAR_15)
{
 struct oct16550_softc *VAR_16 = (struct oct16550_softc*)VAR_15;
 struct uart_bas *VAR_17;
        int VAR_18;

        VAR_18 = FUNC_0(VAR_15->sc_dev);
 VAR_17 = &VAR_15->sc_bas;

        FUNC_4(VAR_17, VAR_12);
 VAR_16->mcr = FUNC_6(VAR_17, VAR_9);
 VAR_16->fcr = VAR_0 | VAR_1;
 FUNC_7(VAR_17, VAR_7, VAR_16->fcr);
 FUNC_5(VAR_17);
 FUNC_1(VAR_15, VAR_13|VAR_14);

 if (VAR_16->mcr & VAR_5)
  VAR_15->sc_hwsig |= VAR_10;
 if (VAR_16->mcr & VAR_6)
  VAR_15->sc_hwsig |= VAR_11;
 FUNC_2(VAR_15);

 FUNC_3(VAR_17);
 VAR_16->ier = FUNC_6(VAR_17, VAR_8) & 0xf0;
 VAR_16->ier |= VAR_2 | VAR_3 | VAR_4;
 FUNC_7(VAR_17, VAR_8, VAR_16->ier);
 FUNC_5(VAR_17);

 return (0);
}
