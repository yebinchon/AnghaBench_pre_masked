
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int rclk; } ;





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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;



 int VAR_25 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct uart_bas*) ;
 int FUNC_2 (struct uart_bas*,int ) ;
 int FUNC_3 (struct uart_bas*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct uart_bas *VAR_26, int VAR_27, int VAR_28, int VAR_29,
    int VAR_30)
{
 uint32_t VAR_31;
 uint32_t VAR_32;
 uint32_t VAR_33;
 int VAR_34;

 VAR_31 = FUNC_2(VAR_26, VAR_13);

 VAR_31 &= ~(VAR_8 | VAR_14 |
     VAR_11);

 switch (VAR_28) {
 case 5: VAR_31 |= VAR_2; break;
 case 6: VAR_31 |= VAR_3; break;
 case 7: VAR_31 |= VAR_4; break;
 case 8: VAR_31 |= VAR_5; break;
 default: return (VAR_24);
 }

 switch (VAR_29) {
 case 1: VAR_31 |= VAR_0; break;
 case 2: VAR_31 |= VAR_1; break;
 default: return (VAR_24);
 }

 switch (VAR_30) {
 case 130: VAR_31 |= VAR_10;
    VAR_31 |= VAR_9;
    break;

 case 128: VAR_31 |= VAR_12;
    VAR_31 |= VAR_9;
    break;

 case 129: break;

 default: return (VAR_24);
 }


 if (VAR_27 > 0 && VAR_26->rclk != 0) {
  VAR_34 = FUNC_0(VAR_26->rclk / 4, VAR_27) - 1;

  switch (VAR_25) {
  case 133:
  case 132:
  case 131:
   if (VAR_34 > (VAR_20 >>
       VAR_21))
    return (VAR_24);

   VAR_33 = FUNC_2(VAR_26, VAR_22);
   VAR_33 &= ~(VAR_23 |
       VAR_20);
   VAR_33 |= VAR_19 |
       (VAR_34 << VAR_21);
   FUNC_3(VAR_26, VAR_22, VAR_33);

   VAR_34 = 0;
   break;
  default:
   if (VAR_34 > 0xffff)
    return (VAR_24);
   break;
  }

  VAR_31 &= ~VAR_6;
  VAR_31 |= (VAR_34 & VAR_6);

  VAR_34 >>= VAR_7;

  VAR_32 = FUNC_2(VAR_26, VAR_18);
  VAR_32 &= ~(VAR_17 |
      VAR_15);
  VAR_32 |= ((VAR_34 << VAR_16) &
      VAR_15);
  FUNC_3(VAR_26, VAR_18, VAR_32);
 }

 FUNC_3(VAR_26, VAR_13, VAR_31);
 FUNC_1(VAR_26);

 return (0);
}
