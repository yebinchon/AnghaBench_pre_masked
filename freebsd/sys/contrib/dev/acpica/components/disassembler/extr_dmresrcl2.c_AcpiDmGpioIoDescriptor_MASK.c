
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int PinConfig; size_t DebounceTimeout; size_t DriveStrength; int IntFlags; } ;
struct TYPE_6__ {TYPE_1__ Gpio; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;


 size_t FUNC_0 (int ,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int ) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static void
FUNC_5 (
    ACPI_OP_WALK_INFO *VAR_3,
    AML_RESOURCE *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6)
{





    FUNC_3 (VAR_6);
    FUNC_4 ("GpioIo (%s, ",
        VAR_2 [FUNC_0 (VAR_4->Gpio.IntFlags, 3)]);

    if (VAR_4->Gpio.PinConfig <= 3)
    {
        FUNC_4 ("%s, ",
            VAR_1[VAR_4->Gpio.PinConfig]);
    }
    else
    {
        FUNC_4 ("0x%2.2X, ", VAR_4->Gpio.PinConfig);
    }



    FUNC_4 ("0x%4.4X, ", VAR_4->Gpio.DebounceTimeout);
    FUNC_4 ("0x%4.4X, ", VAR_4->Gpio.DriveStrength);
    FUNC_4 ("%s,\n",
        VAR_0 [FUNC_1 (VAR_4->Gpio.IntFlags)]);



    FUNC_2 (VAR_3, VAR_4, VAR_6);
}
