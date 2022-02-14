
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshft; scalar_t__ rclk; int bsh; int * bst; scalar_t__ chan; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; int parity; TYPE_1__ bas; int ops; } ;
struct uart_class {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_2 (int,struct uart_devinfo*,struct uart_class*) ;
 int FUNC_3 (struct uart_class*) ;
 int FUNC_4 (struct uart_class*) ;
 struct uart_class VAR_5 ;

int
FUNC_5(int VAR_6, struct uart_devinfo *VAR_7)
{
 struct uart_class *VAR_8 = &VAR_5;





 VAR_3 = ((void*)0);
 VAR_4 = &VAR_2;
 VAR_7->bas.bst = VAR_4;





 if (FUNC_2(VAR_6, VAR_7, VAR_8) == 0)
  return (0);




 VAR_7->ops = FUNC_3(VAR_8);
 VAR_7->bas.chan = 0;

 if (FUNC_1(VAR_7->bas.bst, FUNC_0(0),
     FUNC_4(VAR_8), 0, &VAR_7->bas.bsh) != 0)
  return (VAR_0);
 VAR_7->bas.regshft = 3;
 VAR_7->bas.rclk = 0;
 VAR_7->baudrate = 115200;
 VAR_7->databits = 8;
 VAR_7->stopbits = 1;
 VAR_7->parity = VAR_1;

 return (0);
}
