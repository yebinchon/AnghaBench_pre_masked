
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* UINT8 ;
typedef size_t UINT32 ;
typedef int UINT16 ;
struct TYPE_8__ {char* DeviceName; size_t PinCount; size_t PinIndex; void* Polarity; void* Direction; int Type; int PinNumber; int * Op; } ;
struct TYPE_6__ {int IntFlags; int ConnectionType; } ;
struct TYPE_7__ {TYPE_1__ Gpio; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_GPIO_INFO ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,char*) ;

void
FUNC_1 (
    ACPI_PARSE_OBJECT *VAR_1,
    AML_RESOURCE *VAR_2,
    UINT32 VAR_3,
    UINT16 *VAR_4,
    char *VAR_5)
{
    ACPI_GPIO_INFO *VAR_6;
    UINT32 VAR_7;




    if (!VAR_0)
    {
        return;
    }



    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
    {
        VAR_6 = FUNC_0 (VAR_4[VAR_7], VAR_5);

        VAR_6->Op = VAR_1;
        VAR_6->DeviceName = VAR_5;
        VAR_6->PinCount = VAR_3;
        VAR_6->PinIndex = VAR_7;
        VAR_6->PinNumber = VAR_4[VAR_7];
        VAR_6->Type = VAR_2->Gpio.ConnectionType;
        VAR_6->Direction = (UINT8) (VAR_2->Gpio.IntFlags & 0x0003);
        VAR_6->Polarity = (UINT8) ((VAR_2->Gpio.IntFlags >> 1) & 0x0003);
    }
}
