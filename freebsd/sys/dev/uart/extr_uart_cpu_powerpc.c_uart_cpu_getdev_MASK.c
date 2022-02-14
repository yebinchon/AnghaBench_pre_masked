
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshft; int chan; char rclk; int bsh; int bst; } ;
struct uart_devinfo {char baudrate; int databits; int stopbits; int parity; TYPE_1__ bas; int ops; } ;
struct uart_class {int dummy; } ;
typedef int phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int *,int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;


 int VAR_2 ;
 int FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (int,char*) ;
 int FUNC_5 (int,int*,char*) ;
 int FUNC_6 (int,int*,char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (struct uart_class*) ;
 struct uart_class VAR_3 ;
 struct uart_class VAR_4 ;

int
FUNC_9(int VAR_5, struct uart_devinfo *VAR_6)
{
 char VAR_7[64];
 struct uart_class *VAR_8;
 phandle_t VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1("/options");
 VAR_11 = FUNC_1("/chosen");
 switch (VAR_5) {
 case 129:
  VAR_12 = VAR_1;
  if (VAR_11 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_6(VAR_11, &VAR_9,
       "stdout-path", ((void*)0));
  if (VAR_11 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_6(VAR_11, &VAR_9,
       "linux,stdout-path", ((void*)0));
  if (VAR_11 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_5(VAR_11, &VAR_9,
       "stdout");
  if (VAR_11 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_6(VAR_11, &VAR_9,
       "stdin-path", ((void*)0));
  if (VAR_11 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_5(VAR_11, &VAR_9,
       "stdin");
  if (VAR_10 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_6(VAR_10, &VAR_9,
       "input-device", "output-device");
  if (VAR_10 != -1 && VAR_12 != 0)
   VAR_12 = FUNC_6(VAR_10, &VAR_9,
       "input-device-1", "output-device-1");
  if (VAR_12 != 0) {
   VAR_9 = FUNC_1("serial0");
   if (VAR_9 == -1)
    VAR_12 = (VAR_1);
  }

  if (VAR_12 != 0)
   return (VAR_12);
  break;
 case 128:
  if (!FUNC_3("hw.uart.dbgport", VAR_7, sizeof(VAR_7)))
   return (VAR_1);
  VAR_9 = FUNC_1(VAR_7);
  if (VAR_9 == -1)
   return (VAR_1);
  break;
 default:
  return (VAR_0);
 }

 if (FUNC_2(VAR_9, "device_type", VAR_7, sizeof(VAR_7)) == -1)
  return (VAR_1);
 if (FUNC_7(VAR_7, "serial") != 0)
  return (VAR_1);

 if (FUNC_4(VAR_9, "chrp,es")) {
  VAR_8 = &VAR_4;
  VAR_6->bas.regshft = 4;
  VAR_6->bas.chan = 1;
 } else if (FUNC_4(VAR_9,"ns16550") ||
     FUNC_4(VAR_9,"ns8250")) {
  VAR_8 = &VAR_3;
  VAR_6->bas.regshft = 0;
  VAR_6->bas.chan = 0;
 } else
  return (VAR_1);

 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_12 = FUNC_0(VAR_9, 0, &VAR_6->bas.bst, &VAR_6->bas.bsh, ((void*)0));
 if (VAR_12)
  return (VAR_12);

 VAR_6->ops = FUNC_8(VAR_8);

 if (FUNC_2(VAR_9, "clock-frequency", &VAR_6->bas.rclk,
     sizeof(VAR_6->bas.rclk)) == -1)
  VAR_6->bas.rclk = 230400;
 if (FUNC_2(VAR_9, "current-speed", &VAR_6->baudrate,
     sizeof(VAR_6->baudrate)) == -1)
  VAR_6->baudrate = 0;
 FUNC_2(VAR_9, "reg-shift", &VAR_6->bas.regshft,
     sizeof(VAR_6->bas.regshft));

 VAR_6->databits = 8;
 VAR_6->stopbits = 1;
 VAR_6->parity = VAR_2;
 return (0);
}
