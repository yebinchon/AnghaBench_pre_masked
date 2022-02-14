
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_14__ {char* DeviceName; int Speed; int Address; TYPE_5__* Resource; int * Op; } ;
struct TYPE_12__ {int DefaultBaudRate; } ;
struct TYPE_11__ {int ConnectionSpeed; int DeviceSelection; } ;
struct TYPE_10__ {int ConnectionSpeed; int SlaveAddress; } ;
struct TYPE_9__ {int Type; } ;
struct TYPE_13__ {scalar_t__ DescriptorType; TYPE_4__ UartSerialBus; TYPE_3__ SpiSerialBus; TYPE_2__ I2cSerialBus; TYPE_1__ CommonSerialBus; } ;
typedef TYPE_5__ AML_RESOURCE ;
typedef TYPE_6__ ACPI_SERIAL_INFO ;
typedef int ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 TYPE_6__* FUNC_0 (char*,int ) ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_2,
    AML_RESOURCE *VAR_3,
    char *VAR_4)
{
    ACPI_SERIAL_INFO *VAR_5;
    UINT16 VAR_6;
    UINT32 VAR_7;




    if (!VAR_1)
    {
        return;
    }

    if (VAR_3->DescriptorType != VAR_0)
    {
        return;
    }



    switch (VAR_3->CommonSerialBus.Type)
    {
    case 130:

        VAR_6 = VAR_3->I2cSerialBus.SlaveAddress;
        VAR_7 = VAR_3->I2cSerialBus.ConnectionSpeed;
        break;

    case 129:

        VAR_6 = VAR_3->SpiSerialBus.DeviceSelection;
        VAR_7 = VAR_3->SpiSerialBus.ConnectionSpeed;
        break;

    case 128:

        VAR_6 = 0;
        VAR_7 = VAR_3->UartSerialBus.DefaultBaudRate;
        break;

    default:
        return;
    }

    VAR_5 = FUNC_0 (VAR_4, VAR_6);

    VAR_5->Op = VAR_2;
    VAR_5->DeviceName = VAR_4;
    VAR_5->Resource = VAR_3;
    VAR_5->Address = VAR_6;
    VAR_5->Speed = VAR_7;
}
