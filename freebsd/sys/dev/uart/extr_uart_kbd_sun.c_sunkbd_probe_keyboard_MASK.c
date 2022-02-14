
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_devinfo {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

 int VAR_1 ;
 int FUNC_1 (struct uart_devinfo*) ;
 int FUNC_2 (struct uart_devinfo*,int ) ;

__attribute__((used)) static int
FUNC_3(struct uart_devinfo *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 for (VAR_6 = 5; VAR_6 != 0; VAR_6--) {
  FUNC_2(VAR_2, VAR_0);
  for (VAR_5 = 1000; VAR_5 != 0; VAR_5--) {
   if (FUNC_1(VAR_2) == VAR_1)
    break;
   FUNC_0(1000);
  }
  if (VAR_5 == 0)
   continue;
  VAR_4 = -1;
  for (VAR_5 = 1000; VAR_5 != 0; VAR_5--) {
   switch (VAR_3 = FUNC_1(VAR_2)) {
   case -1:
    break;
   case 128:
    return (VAR_4);
   default:
    VAR_4 = VAR_3;
   }
   FUNC_0(1000);
  }
 }
 return (-1);
}
