
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int regshft; int bsh; int rclk; void* bst; scalar_t__ chan; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; TYPE_1__ bas; int parity; int ops; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 void* VAR_1 ;
 int * VAR_2 ;
 void* VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

int
FUNC_3(int VAR_5, struct uart_devinfo *VAR_6)
{
 uint64_t VAR_7;

 VAR_7 = FUNC_0();

 VAR_6->ops = FUNC_2(&VAR_4);
 VAR_6->bas.chan = 0;
 VAR_6->bas.bst = VAR_1;
 VAR_6->bas.regshft = 2;
 VAR_6->bas.rclk = VAR_7;
 VAR_6->baudrate = 9600;
 VAR_6->databits = 8;
 VAR_6->stopbits = 1;

 VAR_6->parity = VAR_0;

 VAR_2 = ((void*)0);
 VAR_3 = VAR_1;
 VAR_6->bas.bsh = FUNC_1();
 return (0);
}
