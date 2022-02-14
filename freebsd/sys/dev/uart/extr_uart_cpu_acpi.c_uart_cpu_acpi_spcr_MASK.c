
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct TYPE_7__ {scalar_t__ regshft; int regiowidth; int bsh; int bst; scalar_t__ rclk; scalar_t__ chan; } ;
struct uart_devinfo {int databits; int stopbits; int baudrate; TYPE_2__ bas; int ops; int parity; } ;
struct uart_class {int dummy; } ;
struct acpi_uart_compat_data {int cd_quirks; scalar_t__ cd_regshft; struct uart_class* cd_class; } ;
struct TYPE_6__ {int SpaceId; scalar_t__ AccessWidth; int BitWidth; int Address; } ;
struct TYPE_8__ {int BaudRate; TYPE_1__ SerialPort; int InterfaceType; } ;
typedef TYPE_3__ ACPI_TABLE_SPCR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 struct acpi_uart_compat_data* FUNC_5 (int ) ;
 int FUNC_6 (struct uart_class*) ;
 int FUNC_7 (struct uart_class*) ;

int
FUNC_8(int VAR_7, struct uart_devinfo *VAR_8)
{
 vm_paddr_t VAR_9;
 ACPI_TABLE_SPCR *VAR_10;
 struct acpi_uart_compat_data *VAR_11;
 struct uart_class *VAR_12;
 int VAR_13 = VAR_1;


 if (VAR_7 != VAR_2)
  return (VAR_13);


 VAR_9 = FUNC_0(VAR_0);
 if (VAR_9 == 0)
  return (VAR_13);
 VAR_10 = FUNC_1(VAR_9, VAR_0);
 if (VAR_10 == ((void*)0)) {
  FUNC_4("Unable to map the SPCR table!\n");
  return (VAR_13);
 }


 VAR_11 = FUNC_5(VAR_10->InterfaceType);
 if (VAR_11 == ((void*)0))
  goto out;
 VAR_12 = VAR_11->cd_class;


 VAR_8->bas.chan = 0;
 VAR_8->bas.rclk = 0;
 VAR_8->databits = 8;
 VAR_8->stopbits = 1;
 VAR_8->parity = VAR_4;
 VAR_8->ops = FUNC_6(VAR_12);


 switch (VAR_10->SerialPort.SpaceId) {
 case 0:
  VAR_8->bas.bst = VAR_6;
  break;
 case 1:
  VAR_8->bas.bst = VAR_5;
  break;
 default:
  FUNC_4("UART in unrecognized address space: %d!\n",
      (int)VAR_10->SerialPort.SpaceId);
  goto out;
 }
 if (VAR_10->SerialPort.AccessWidth == 0)
  VAR_8->bas.regshft = 0;
 else
  VAR_8->bas.regshft = VAR_10->SerialPort.AccessWidth - 1;
 VAR_8->bas.regiowidth = VAR_10->SerialPort.BitWidth / 8;
 switch (VAR_10->BaudRate) {
 case 0:

  VAR_8->baudrate = 0;
  break;
 case 3:
  VAR_8->baudrate = 9600;
  break;
 case 4:
  VAR_8->baudrate = 19200;
  break;
 case 6:
  VAR_8->baudrate = 57600;
  break;
 case 7:
  VAR_8->baudrate = 115200;
  break;
 default:
  FUNC_4("SPCR has reserved BaudRate value: %d!\n",
      (int)VAR_10->BaudRate);
  goto out;
 }


 if ((VAR_11->cd_quirks & VAR_3) ==
     VAR_3) {
  VAR_8->bas.regshft = VAR_11->cd_regshft;
 }


 VAR_13 = FUNC_3(VAR_8->bas.bst, VAR_10->SerialPort.Address,
     FUNC_7(VAR_12), 0, &VAR_8->bas.bsh);

out:
 FUNC_2(VAR_10);
 return (VAR_13);
}
