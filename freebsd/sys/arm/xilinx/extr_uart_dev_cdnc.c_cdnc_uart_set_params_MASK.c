
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uart_bas {int dummy; } ;


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





 int FUNC_0 (struct uart_bas*,int ,int ) ;
 scalar_t__ FUNC_1 (struct uart_bas*,int) ;

__attribute__((used)) static int
FUNC_2(struct uart_bas *VAR_11, int VAR_12, int VAR_13,
        int VAR_14, int VAR_15)
{
 uint32_t VAR_16 = 0;

 switch (VAR_13) {
 case 6:
  VAR_16 |= VAR_1;
  break;
 case 7:
  VAR_16 |= VAR_2;
  break;
 case 8:
 default:
  VAR_16 |= VAR_3;
  break;
 }

 if (VAR_14 == 2)
  VAR_16 |= VAR_9;

 switch (VAR_15) {
 case 131:
  VAR_16 |= VAR_5;
  break;
 case 128:
  VAR_16 |= VAR_8;
  break;
 case 129:
  VAR_16 |= VAR_7;
  break;
 case 132:
  VAR_16 |= VAR_4;
  break;
 case 130:
 default:
  VAR_16 |= VAR_6;
  break;
 }

 FUNC_0(VAR_11, VAR_0, VAR_16);

 if (VAR_12 > 0 && FUNC_1(VAR_11, VAR_12) < 0)
  return (VAR_10);

 return(0);
}
