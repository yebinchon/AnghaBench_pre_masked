
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; scalar_t__ sc_txbusy; struct uart_bas sc_bas; } ;


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
 int FUNC_0 (struct uart_bas*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct uart_bas*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct uart_softc *VAR_17)
{
 int VAR_18 = 0;
 struct uart_bas *VAR_19 = &VAR_17->sc_bas;
 uint32_t VAR_20;

 FUNC_2(VAR_17->sc_hwmtx);

 VAR_20 = FUNC_0(VAR_19, VAR_7);


 FUNC_1(VAR_19, VAR_7, VAR_20 &
     (VAR_4 | VAR_3 |
      VAR_6 | VAR_2 |
      VAR_5 | VAR_1));


 if ((VAR_20 & (VAR_4 | VAR_3)) != 0)
  VAR_18 |= VAR_14;


 if (VAR_17->sc_txbusy && (VAR_20 & VAR_5) != 0) {

  FUNC_1(VAR_19, VAR_0, VAR_5);
  VAR_18 |= VAR_16;
 }


 if ((VAR_20 & VAR_6) != 0)
  VAR_18 |= VAR_13;


 if ((VAR_20 & VAR_2) != 0)
  VAR_18 |= VAR_13;


 if ((VAR_20 & VAR_1) != 0) {
  FUNC_1(VAR_19, VAR_8,
      VAR_10 |
      VAR_12 |
      VAR_11 |
      VAR_9);
  VAR_18 |= VAR_15;
 }

 FUNC_3(VAR_17->sc_hwmtx);
 return (VAR_18);
}
