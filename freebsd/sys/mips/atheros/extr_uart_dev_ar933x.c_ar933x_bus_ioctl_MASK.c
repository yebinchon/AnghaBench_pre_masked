
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int dummy; } ;


 int VAR_0 ;





__attribute__((used)) static int
FUNC_0(struct uart_softc *VAR_1, int VAR_2, intptr_t VAR_3)
{
 int VAR_4 = 0;


 switch (VAR_2) {
 case 130:
 case 129:
 case 128:
  break;
 case 131:
  *(int*)VAR_3 = 115200;
  break;
 default:
  VAR_4 = VAR_0;
  break;
 }



 return (VAR_4);
}
