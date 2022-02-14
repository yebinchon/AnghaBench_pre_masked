
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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



 int FUNC_0 (struct uart_bas*) ;
 int FUNC_1 (struct uart_bas*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct uart_bas *VAR_9, int VAR_10, int VAR_11,
    int VAR_12, int VAR_13)
{


        switch (VAR_11) {
        case 5:
      VAR_11 = VAR_1;
      break;
        case 6:
      VAR_11 = VAR_2;
      break;
        case 7:
      VAR_11 = VAR_3;
      break;
        case 8:
      VAR_11 = VAR_4;
      break;
     default:

      return;
        }
 switch (VAR_13) {
 case 130: VAR_13 = (VAR_6|VAR_5); break;
 case 128: VAR_13 = (VAR_6); break;
 case 129: VAR_13 = 0; break;

 default: return;
 }

 if (VAR_9->rclk && VAR_10) {
         FUNC_1(VAR_9, VAR_0, VAR_9->rclk/16/VAR_10);
  FUNC_0(VAR_9);
 }

        FUNC_1(VAR_9, VAR_7, VAR_11 |
    (VAR_12==1?0:VAR_8) |
            VAR_13);
 FUNC_0(VAR_9);
}
