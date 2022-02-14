
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshft; int rclk; int bsh; void* bst; scalar_t__ chan; } ;
struct uart_devinfo {int databits; int stopbits; int parity; int baudrate; TYPE_1__ bas; int ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 void* VAR_4 ;
 int * VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;

int
FUNC_2(int VAR_8, struct uart_devinfo *VAR_9)
{
 VAR_9->ops = FUNC_1(&VAR_7);
 VAR_9->bas.chan = 0;
 VAR_9->bas.bst = VAR_4;
 VAR_9->bas.bsh = FUNC_0(0, VAR_1);

 VAR_9->bas.regshft = 2;

 VAR_9->bas.rclk = VAR_3;
 VAR_9->baudrate = VAR_0;
 VAR_9->databits = 8;
 VAR_9->stopbits = 1;
 VAR_9->parity = VAR_2;

 VAR_5 = ((void*)0);
 VAR_6 = VAR_4;
 return (0);
}
