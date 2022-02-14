
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bsh; int bst; void* rclk; void* regshft; void* chan; void* busy_detect; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; TYPE_1__ bas; int ops; int parity; } ;
struct uart_class {int dummy; } ;
typedef unsigned int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,unsigned int,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct uart_class*) ;
 int FUNC_4 (struct uart_class*) ;
 unsigned int FUNC_5 (char const**) ;
 struct uart_class* FUNC_6 (struct uart_class*,char const**) ;
 void* FUNC_7 (char const**) ;
 int FUNC_8 (char const**) ;
 int FUNC_9 (char const**) ;

int
FUNC_10(int VAR_5, struct uart_devinfo *VAR_6, struct uart_class *VAR_7)
{
 const char *VAR_8;
 char *VAR_9;
 bus_addr_t VAR_10 = ~0U;
 int VAR_11;





 if (VAR_7 == ((void*)0))
  return (VAR_1);







 switch (VAR_5) {
 case 140:
  VAR_9 = FUNC_2("hw.uart.console");
  break;
 case 139:
  VAR_9 = FUNC_2("hw.uart.dbgport");
  break;
 default:
  VAR_9 = ((void*)0);
  break;
 }

 if (VAR_9 == ((void*)0))
  return (VAR_1);


 VAR_6->bas.chan = 0;
 VAR_6->bas.regshft = 0;
 VAR_6->bas.rclk = 0;
 VAR_6->baudrate = 0;
 VAR_6->databits = 8;
 VAR_6->stopbits = 1;
 VAR_6->parity = VAR_2;


 VAR_8 = VAR_9;
 for (;;) {
  switch (FUNC_9(&VAR_8)) {
  case 138:
   VAR_6->bas.busy_detect = FUNC_7(&VAR_8);
   break;
  case 137:
   VAR_6->baudrate = FUNC_7(&VAR_8);
   break;
  case 136:
   VAR_6->bas.chan = FUNC_7(&VAR_8);
   break;
  case 135:
   VAR_6->databits = FUNC_7(&VAR_8);
   break;
  case 134:
   VAR_7 = FUNC_6(VAR_7, &VAR_8);
   break;
  case 133:
   VAR_6->bas.bst = VAR_3;
   VAR_10 = FUNC_5(&VAR_8);
   break;
  case 132:
   VAR_6->bas.bst = VAR_4;
   VAR_10 = FUNC_5(&VAR_8);
   break;
  case 131:
   VAR_6->parity = FUNC_8(&VAR_8);
   break;
  case 130:
   VAR_6->bas.regshft = FUNC_7(&VAR_8);
   break;
  case 129:
   VAR_6->stopbits = FUNC_7(&VAR_8);
   break;
  case 128:
   VAR_6->bas.rclk = FUNC_7(&VAR_8);
   break;
  default:
   FUNC_1(VAR_9);
   return (VAR_0);
  }
  if (*VAR_8 == '\0')
   break;
  if (*VAR_8 != ',') {
   FUNC_1(VAR_9);
   return (VAR_0);
  }
  VAR_8++;
 }
 FUNC_1(VAR_9);





 if (VAR_10 == ~0U)
  return (VAR_0);
 if (VAR_6->baudrate >= 19200) {
  if (VAR_6->baudrate % 19200)
   VAR_6->baudrate = 0;
 } else if (VAR_6->baudrate >= 1200) {
  if (VAR_6->baudrate % 1200)
   VAR_6->baudrate = 0;
 } else if (VAR_6->baudrate > 0) {
  if (VAR_6->baudrate % 75)
   VAR_6->baudrate = 0;
 } else
  VAR_6->baudrate = 0;


 VAR_6->ops = FUNC_3(VAR_7);
 VAR_11 = FUNC_0(VAR_6->bas.bst, VAR_10, FUNC_4(VAR_7), 0,
     &VAR_6->bas.bsh);
 return (VAR_11);
}
