
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {int sc_rxfifosz; int sc_txfifosz; int sc_hwiflow; int sc_hwoflow; int sc_dev; int * sc_sysdev; struct uart_bas sc_bas; } ;
struct ns8250_softc {int ier_mask; } ;


 int FUNC_0 (int) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct uart_bas*) ;
 int FUNC_3 (struct uart_bas*,int) ;
 int FUNC_4 (struct uart_bas*,int) ;
 int FUNC_5 (struct uart_bas*,int,int,int,int ) ;
 int FUNC_6 (struct uart_bas*) ;
 int FUNC_7 (struct uart_bas*) ;
 int FUNC_8 (struct uart_bas*,int ) ;
 int FUNC_9 (struct uart_bas*,int ,int) ;

int
FUNC_10(struct uart_softc *VAR_22)
{
 struct ns8250_softc *VAR_23;
 struct uart_bas *VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;
 uint8_t VAR_29, VAR_30, VAR_31;
 uint8_t VAR_32;

 VAR_23 = (struct ns8250_softc *)VAR_22;
 VAR_24 = &VAR_22->sc_bas;

 VAR_27 = FUNC_6(VAR_24);
 if (VAR_27)
  return (VAR_27);

 VAR_30 = VAR_8;
 if (VAR_22->sc_sysdev == ((void*)0)) {

  FUNC_5(VAR_24, 115200, 8, 1, VAR_21);
 } else
  VAR_30 |= VAR_7 | VAR_10;

 VAR_27 = FUNC_3(VAR_24, VAR_18);
 if (VAR_27)
  return (VAR_27);







 FUNC_9(VAR_24, VAR_16, VAR_9 | VAR_8 | VAR_7 | VAR_10);
 FUNC_7(VAR_24);






 VAR_32 = VAR_0;



 FUNC_9(VAR_24, VAR_12, VAR_32);
 FUNC_7(VAR_24);
 if (!(FUNC_8(VAR_24, VAR_14) & VAR_4)) {




  FUNC_9(VAR_24, VAR_16, VAR_30);
  FUNC_7(VAR_24);
  VAR_22->sc_rxfifosz = VAR_22->sc_txfifosz = 1;
  FUNC_1(VAR_22->sc_dev, "8250 or 16450 or compatible");
  return (0);
 }

 VAR_32 = VAR_0 | VAR_3 | VAR_1;



 FUNC_9(VAR_24, VAR_12, VAR_32);
 FUNC_7(VAR_24);

 VAR_25 = 0;
 VAR_26 = FUNC_2(VAR_24);


 VAR_27 = FUNC_3(VAR_24, VAR_17|VAR_18);
 if (VAR_27) {
  FUNC_9(VAR_24, VAR_16, VAR_30);
  VAR_32 = 0;



  FUNC_9(VAR_24, VAR_12, VAR_32);
  FUNC_7(VAR_24);
  goto describe;
 }
 do {
  FUNC_9(VAR_24, VAR_11, 0);
  FUNC_7(VAR_24);
  VAR_25++;

  VAR_28 = 30;
  VAR_29 = 0;




  while (((VAR_29 |= FUNC_8(VAR_24, VAR_15)) & VAR_6) == 0 &&
      --VAR_28)
   FUNC_0(VAR_26);
  if (VAR_28 == 0) {
   VAR_31 = FUNC_8(VAR_24, VAR_13) & VAR_23->ier_mask;
   FUNC_9(VAR_24, VAR_13, VAR_31);
   FUNC_9(VAR_24, VAR_16, VAR_30);
   VAR_32 = 0;



   FUNC_9(VAR_24, VAR_12, VAR_32);
   FUNC_7(VAR_24);
   VAR_25 = 0;
   goto describe;
  }
 } while ((VAR_29 & VAR_5) == 0 && VAR_25 < 260);
 VAR_25--;

 FUNC_9(VAR_24, VAR_16, VAR_30);


 FUNC_4(VAR_24, VAR_19|VAR_20);

 describe:
 if (VAR_25 >= 14 && VAR_25 <= 16) {
  VAR_22->sc_rxfifosz = 16;
  FUNC_1(VAR_22->sc_dev, "16550 or compatible");
 } else if (VAR_25 >= 28 && VAR_25 <= 32) {
  VAR_22->sc_rxfifosz = 32;
  FUNC_1(VAR_22->sc_dev, "16650 or compatible");
 } else if (VAR_25 >= 56 && VAR_25 <= 64) {
  VAR_22->sc_rxfifosz = 64;
  FUNC_1(VAR_22->sc_dev, "16750 or compatible");
 } else if (VAR_25 >= 112 && VAR_25 <= 128) {
  VAR_22->sc_rxfifosz = 128;
  FUNC_1(VAR_22->sc_dev, "16950 or compatible");
 } else if (VAR_25 >= 224 && VAR_25 <= 256) {
  VAR_22->sc_rxfifosz = 256;
  FUNC_1(VAR_22->sc_dev, "16x50 with 256 byte FIFO");
 } else {
  VAR_22->sc_rxfifosz = 16;
  FUNC_1(VAR_22->sc_dev,
      "Non-standard ns8250 class UART with FIFOs");
 }






 VAR_22->sc_txfifosz = 16;
 return (0);
}
