
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;


 int FUNC_0 (struct uart_bas*,int ,int ) ;
 int FUNC_1 (struct uart_bas*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct uart_bas*,int ) ;
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
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (struct uart_bas*,int ,int) ;
 int FUNC_6 (struct uart_bas*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;





 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct uart_bas *VAR_21, int VAR_22, int VAR_23,
    int VAR_24, int VAR_25)
{
 uint32_t VAR_26, VAR_27;


 FUNC_5(VAR_21, FUNC_4(VAR_17), FUNC_2(VAR_17, VAR_14));
 FUNC_5(VAR_21, FUNC_4(VAR_18), FUNC_2(VAR_18, VAR_11) | FUNC_2(VAR_18, VAR_13));

 if (VAR_23 == 7)
  FUNC_0(VAR_21, VAR_18, VAR_20);
 else
  FUNC_1(VAR_21, VAR_18, VAR_20);

 if (VAR_24 == 2)
  FUNC_1(VAR_21, VAR_18, VAR_12);
 else
  FUNC_0(VAR_21, VAR_18, VAR_12);

 switch (VAR_25) {
 case 129:
  FUNC_0(VAR_21, VAR_18, VAR_10);
  FUNC_1(VAR_21, VAR_18, VAR_9);
  break;
 case 132:
  FUNC_1(VAR_21, VAR_18, VAR_10);
  FUNC_1(VAR_21, VAR_18, VAR_9);
  break;
 case 131:
 case 128:

 case 130:
 default:
  FUNC_0(VAR_21, VAR_18, VAR_9);
  break;
 }
 if (VAR_22 > 0) {
  VAR_26 = FUNC_7();
  VAR_27 = FUNC_3(VAR_21, FUNC_4(VAR_19));
  VAR_27 = (VAR_27 & ~VAR_1) | VAR_0;
  FUNC_6(VAR_21, FUNC_4(VAR_19), VAR_27);
  FUNC_6(VAR_21, FUNC_4(VAR_15), 15);
  FUNC_6(VAR_21, FUNC_4(VAR_16), (VAR_26 / VAR_22) - 1);
 }






 VAR_27 = FUNC_3(VAR_21, FUNC_4(VAR_19));
 VAR_27 &= ~(VAR_4 | VAR_2);
 VAR_27 |= (VAR_6 - VAR_8) << VAR_5;
 VAR_27 |= VAR_7 << VAR_3;
 FUNC_6(VAR_21, FUNC_4(VAR_19), VAR_27);
}
