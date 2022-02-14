
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rclk; scalar_t__ regshft; int bsh; int bst; scalar_t__ chan; } ;
struct uart_devinfo {unsigned int baudrate; int databits; int stopbits; int parity; TYPE_1__ bas; int ops; } ;
struct uart_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,unsigned int,int ,int ,int *) ;
 scalar_t__ FUNC_3 (char*,unsigned int,char*,unsigned int*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,struct uart_devinfo*) ;
 scalar_t__ FUNC_5 (int,struct uart_devinfo*,struct uart_class*) ;
 int FUNC_6 (struct uart_class*) ;
 int FUNC_7 (struct uart_class*) ;
 struct uart_class VAR_5 ;

int
FUNC_8(int VAR_6, struct uart_devinfo *VAR_7)
{
 struct uart_class *VAR_8;
 unsigned int VAR_9, VAR_10;

 VAR_8 = &VAR_5;
 if (VAR_8 == ((void*)0))
  return (VAR_0);


 if (FUNC_5(VAR_6, VAR_7, VAR_8) == 0)
  return (0);
 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  if (FUNC_3("uart", VAR_9, "flags", &VAR_10))
   continue;
  if (VAR_6 == VAR_1 && !FUNC_0(VAR_10))
   continue;
  if (VAR_6 == VAR_2 && !FUNC_1(VAR_10))
   continue;




  if (FUNC_3("uart", VAR_9, "disabled", &VAR_10) == 0 &&
      VAR_10 != 0)
   continue;
  if (FUNC_3("uart", VAR_9, "port", &VAR_10) != 0 ||
      VAR_10 == 0)
   continue;




  VAR_7->ops = FUNC_6(VAR_8);
  VAR_7->bas.chan = 0;
  VAR_7->bas.bst = VAR_4;
  if (FUNC_2(VAR_7->bas.bst, VAR_10, FUNC_7(VAR_8), 0,
      &VAR_7->bas.bsh) != 0)
   continue;
  VAR_7->bas.regshft = 0;
  VAR_7->bas.rclk = 0;
  if (FUNC_3("uart", VAR_9, "baud", &VAR_10) != 0)
   VAR_10 = 0;
  VAR_7->baudrate = VAR_10;
  VAR_7->databits = 8;
  VAR_7->stopbits = 1;
  VAR_7->parity = VAR_3;
  return (0);
 }

 return (VAR_0);
}
