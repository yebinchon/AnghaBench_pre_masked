
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_dev; int sc_bas; } ;
typedef scalar_t__ clk_ident_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct uart_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct uart_softc *VAR_9)
{
 int VAR_10;
 clk_ident_t VAR_11;


 VAR_11 = FUNC_4(VAR_9->sc_dev);
 if (VAR_11 == VAR_0) {
  FUNC_1(VAR_9->sc_dev,
      "failed to get clock based on hwmods\n");
  VAR_11 = VAR_8 + FUNC_0(VAR_9->sc_dev);
 }
 if ((VAR_10 = FUNC_5(VAR_11)) != 0)
  return (VAR_10);






 FUNC_7(&VAR_9->sc_bas, VAR_3, VAR_1);
 FUNC_7(&VAR_9->sc_bas, VAR_4, VAR_5);
 while (FUNC_6(&VAR_9->sc_bas, VAR_6) & VAR_7)
  continue;
 FUNC_7(&VAR_9->sc_bas, VAR_3, VAR_2);

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 == 0)
  FUNC_2(VAR_9->sc_dev, "TI UART (16550 compatible)");

 return (VAR_10);
}
