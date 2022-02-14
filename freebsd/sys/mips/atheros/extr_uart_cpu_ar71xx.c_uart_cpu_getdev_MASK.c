
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int regshft; int bsh; int rclk; void* bst; scalar_t__ chan; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; TYPE_1__ bas; int parity; int ops; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 () ;
 int * VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;

int
FUNC_3(int VAR_6, struct uart_devinfo *VAR_7)
{
 uint64_t VAR_8;

 VAR_8 = FUNC_1();

 VAR_7->ops = FUNC_2(&VAR_5);
 VAR_7->bas.chan = 0;
 VAR_7->bas.bst = VAR_2;
 VAR_7->bas.regshft = 2;
 VAR_7->bas.rclk = VAR_8;
 VAR_7->baudrate = 115200;
 VAR_7->databits = 8;
 VAR_7->stopbits = 1;

 VAR_7->parity = VAR_1;

 VAR_3 = ((void*)0);
 VAR_4 = VAR_2;
 VAR_7->bas.bsh = FUNC_0(VAR_0);
 return (0);
}
