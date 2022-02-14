
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_hwmtx; struct uart_bas sc_bas; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_bas*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct uart_bas*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct uart_softc *VAR_16)
{
 struct uart_bas *VAR_17;
 int VAR_18;
 uint32_t VAR_19, VAR_20;
 uint32_t VAR_21, VAR_22, VAR_23;

 VAR_17 = &VAR_16->sc_bas;
 VAR_18 = 0;

 FUNC_5(VAR_16->sc_hwmtx);


 VAR_19 = FUNC_2(VAR_17, FUNC_3(VAR_14));
 VAR_20 = FUNC_2(VAR_17, FUNC_3(VAR_15));

 FUNC_4(VAR_17, FUNC_3(VAR_14), VAR_19);
 FUNC_4(VAR_17, FUNC_3(VAR_15), VAR_20);

 VAR_21 = FUNC_2(VAR_17, FUNC_3(VAR_11));
 VAR_22 = FUNC_2(VAR_17, FUNC_3(VAR_12));
 VAR_23 = FUNC_2(VAR_17, FUNC_3(VAR_13));


 if ((VAR_19 & FUNC_1(VAR_14, VAR_9)) && (VAR_21 & FUNC_1(VAR_11, VAR_10))) {
  FUNC_0(VAR_17, VAR_11, VAR_10);
  VAR_18 |= VAR_8;
 }






 if (((VAR_19 & FUNC_1(VAR_14, VAR_4)) && (VAR_21 & FUNC_1(VAR_11, VAR_5))) ||
     ((VAR_19 & FUNC_1(VAR_14, VAR_0)) && (VAR_22 & FUNC_1(VAR_12, VAR_1)))) {
  FUNC_0(VAR_17, VAR_11, VAR_5);
  FUNC_0(VAR_17, VAR_12, VAR_1);
  VAR_18 |= VAR_7;
 }


 if ((VAR_20 & FUNC_1(VAR_15, VAR_3)) && (VAR_23 & FUNC_1(VAR_13, VAR_2)))
  VAR_18 |= VAR_6;

 FUNC_6(VAR_16->sc_hwmtx);

 return (VAR_18);
}
