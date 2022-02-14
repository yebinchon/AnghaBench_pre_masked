
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regshft; int chan; int * bst; int bsh; scalar_t__ rclk; } ;
struct uart_devinfo {int baudrate; int databits; int stopbits; void* parity; TYPE_1__ bas; int ops; } ;
struct uart_class {int dummy; } ;
typedef int phandle_t ;
typedef int dev ;
typedef int compat ;
typedef int bus_addr_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;



 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (int,int,int *) ;
 int FUNC_5 (char*,char*,int*,int*,char*,int*,char*) ;
 int FUNC_6 (char*,char*) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct uart_class*) ;
 int FUNC_12 (struct uart_class*) ;
 struct uart_class VAR_5 ;
 struct uart_class VAR_6 ;
 struct uart_class VAR_7 ;
 struct uart_class VAR_8 ;

int
FUNC_13(int VAR_9, struct uart_devinfo *VAR_10)
{
 char VAR_11[32], VAR_12[32], VAR_13[64];
 struct uart_class *VAR_14;
 phandle_t VAR_15, VAR_16;
 bus_addr_t VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
 char VAR_24, VAR_25;

 if ((VAR_16 = FUNC_1("/options")) == -1)
  return (VAR_0);
 switch (VAR_9) {
 case 130:
  VAR_15 = FUNC_8(VAR_16, VAR_13, sizeof(VAR_13));
  break;
 case 129:
  VAR_15 = FUNC_9(VAR_13, sizeof(VAR_13));
  break;
 case 128:
  VAR_15 = FUNC_10(VAR_13, sizeof(VAR_13));
  break;
 default:
  VAR_15 = -1;
  break;
 }
 if (VAR_15 == -1)
  return (VAR_0);
 VAR_20 = FUNC_0(VAR_15, 0, &VAR_22, &VAR_17);
 if (VAR_20)
  return (VAR_20);


 if (FUNC_2(VAR_15, "name", VAR_11, sizeof(VAR_11)) == -1)
  return (VAR_0);
 if (FUNC_2(VAR_15, "compatible", VAR_12, sizeof(VAR_12)) == -1)
  VAR_12[0] = '\0';
 VAR_10->bas.regshft = 0;
 VAR_10->bas.rclk = 0;
 VAR_14 = ((void*)0);
 if (!FUNC_6(VAR_11, "se") || !FUNC_6(VAR_11, "FJSV,se") ||
     !FUNC_6(VAR_12, "sab82532")) {
  VAR_14 = &VAR_6;

  if ((VAR_10->bas.chan = FUNC_7(VAR_13)) == 0)
   return (VAR_0);
  VAR_17 += FUNC_12(VAR_14) * (VAR_10->bas.chan - 1);
 } else if (!FUNC_6(VAR_11, "zs")) {
  VAR_14 = &VAR_8;
  if ((VAR_10->bas.chan = FUNC_7(VAR_13)) == 0) {





   if (VAR_9 == 128)
    VAR_10->bas.chan = 1;
   else
    return (VAR_0);
  }
  VAR_10->bas.regshft = 1;
  VAR_21 = FUNC_12(VAR_14) << VAR_10->bas.regshft;
  VAR_17 += VAR_21 - VAR_21 * (VAR_10->bas.chan - 1);
 } else if (!FUNC_6(VAR_11, "lom-console") || !FUNC_6(VAR_11, "su") ||
     !FUNC_6(VAR_11, "su_pnp") || !FUNC_6(VAR_12, "rsc-console") ||
     !FUNC_6(VAR_12, "su") || !FUNC_6(VAR_12, "su16550") ||
     !FUNC_6(VAR_12, "su16552")) {
  VAR_14 = &VAR_5;
  VAR_10->bas.chan = 0;
 } else if (!FUNC_6(VAR_12, "sgsbbc")) {
  VAR_14 = &VAR_7;
  VAR_10->bas.chan = 0;
 }
 if (VAR_14 == ((void*)0))
  return (VAR_0);


 VAR_10->ops = FUNC_11(VAR_14);
 VAR_10->bas.bst = &VAR_4[VAR_9];
 VAR_10->bas.bsh = FUNC_4(VAR_22, VAR_17, VAR_10->bas.bst);


 if (VAR_9 == 128)
  VAR_10->baudrate = 1200;
 else if (!FUNC_6(VAR_12, "rsc-console"))
  VAR_10->baudrate = 115200;
 else
  VAR_10->baudrate = 9600;
 VAR_10->databits = 8;
 VAR_10->stopbits = 1;
 VAR_10->parity = VAR_2;
 FUNC_3(VAR_11, sizeof(VAR_11), "%s-mode", VAR_13);
 if (FUNC_2(VAR_16, VAR_11, VAR_11, sizeof(VAR_11)) == -1 &&
     FUNC_2(VAR_15, "ssp-console-modes", VAR_11, sizeof(VAR_11)) == -1)
  return (0);
 if (FUNC_5(VAR_11, "%d,%d,%c,%d,%c", &VAR_18, &VAR_19, &VAR_25, &VAR_23, &VAR_24)
     != 5)
  return (0);
 VAR_10->baudrate = VAR_18;
 VAR_10->databits = VAR_19;
 VAR_10->stopbits = VAR_23;
 VAR_10->parity = (VAR_25 == 'n') ? VAR_2 :
     (VAR_25 == 'o') ? VAR_3 : VAR_1;
 return (0);
}
