
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_bas {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct uart_bas*,int ) ;
 int FUNC_2 (struct uart_bas*,int ,int) ;
 int FUNC_3 (struct uart_bas*) ;

__attribute__((used)) static int
FUNC_4(struct uart_bas *VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_8 & VAR_6) {
  VAR_9 = 10*1024;


  while (--VAR_9) {
   if ((FUNC_1(VAR_7, VAR_0)
       & VAR_1) == 0)
    break;
  }
  if (VAR_9 == 0) {
   return (VAR_4);
  }
 }

 if (VAR_8 & VAR_5) {
  VAR_9=10*4096;
  while (--VAR_9) {





   if ((FUNC_1(VAR_7, VAR_2) &
       VAR_3) == 0) {
    break;
   }


   (void) FUNC_1(VAR_7, VAR_2);


   FUNC_2(VAR_7, VAR_2,
       VAR_3);

   FUNC_3(VAR_7);
   FUNC_0(2);
  }
  if (VAR_9 == 0) {
   return (VAR_4);
  }
 }
 return (0);
}
