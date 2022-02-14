
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct uart_bas {int dummy; } ;
struct uart_softc {struct uart_bas sc_bas; } ;


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
 int FUNC_0 (char*) ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;

void
FUNC_3(struct uart_softc *VAR_10, int VAR_11, int VAR_12)
{
 struct uart_bas *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_13 = &VAR_10->sc_bas;
 if (!VAR_13) {
  FUNC_0("Error: can't reconfigure bas\n");
  return;
 }

 FUNC_2(VAR_13, VAR_9, 0x00);





 VAR_16 = FUNC_1(VAR_13, VAR_4);
 VAR_16 &= ~(VAR_5 | VAR_6);
 FUNC_2(VAR_13, VAR_4, 0x00);

 FUNC_2(VAR_13, VAR_3, 0x00);

 VAR_14 = (uint16_t) (VAR_11 / (VAR_12 * 16));
 VAR_15 = (VAR_11 / VAR_12) - (VAR_14 * 16);

 VAR_16 = FUNC_1(VAR_13, VAR_0);
 VAR_16 &= ~VAR_1;
 VAR_16 |= ((VAR_14 & 0x1f00) >> 8);
 FUNC_2(VAR_13, VAR_0, VAR_16);

 VAR_16 = VAR_14 & 0x00ff;
 FUNC_2(VAR_13, VAR_2, VAR_16);

 VAR_16 = FUNC_1(VAR_13, VAR_7);
 VAR_16 &= ~VAR_8;
 VAR_16 |= (VAR_15 & VAR_8);
 FUNC_2(VAR_13, VAR_7, VAR_16);

 VAR_16 = FUNC_1(VAR_13, VAR_4);
 VAR_16 |= (VAR_5 | VAR_6);
 FUNC_2(VAR_13, VAR_4, VAR_16);

}
