
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
 int FUNC_0 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct uart_bas *VAR_8, int VAR_9, int VAR_10, int VAR_11,
    int VAR_12)
{
 uint32_t VAR_13;
 uint32_t VAR_14;





 VAR_13 = 0x0;
 FUNC_0(VAR_8, VAR_1, VAR_13);


 switch (VAR_10) {
 case 7:
  VAR_13 |= VAR_6;
  break;
 case 6:
 case 8:
 default:
  VAR_13 |= VAR_7;
  break;
 }

 FUNC_0(VAR_8, VAR_2, VAR_13);


 if (VAR_9 != 0) {
  VAR_14 = VAR_5 / (8 * VAR_9);



  FUNC_0(VAR_8, VAR_0, ((uint32_t)(VAR_14 & 0xFFFF)));
 }


 FUNC_0(VAR_8, VAR_1, VAR_3|VAR_4);
}
