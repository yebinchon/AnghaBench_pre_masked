
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef int UINT32 ;
struct TYPE_8__ {size_t Type; } ;
struct TYPE_7__ {size_t ConnectionType; } ;
struct TYPE_6__ {int ResourceType; } ;
struct TYPE_9__ {int DescriptorType; TYPE_3__ CommonSerialBus; TYPE_2__ Gpio; TYPE_1__ Address; } ;
typedef TYPE_4__ AML_RESOURCE ;
typedef int ACPI_RESOURCE_TAG ;


 int VAR_0 ;
 int VAR_1 ;






 size_t VAR_2 ;
 size_t VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 char* FUNC_0 (int ,int const*) ;
 int ** VAR_6 ;
 int ** VAR_7 ;
 int ** VAR_8 ;

__attribute__((used)) static char *
FUNC_1 (
    UINT32 VAR_9,
    AML_RESOURCE *VAR_10,
    UINT8 VAR_11)
{
    const ACPI_RESOURCE_TAG *VAR_12;
    char *VAR_13 = ((void*)0);




    VAR_12 = VAR_7[VAR_11];




    switch (VAR_10->DescriptorType)
    {
    case 133:
    case 132:
    case 131:
    case 130:




        if (VAR_10->Address.ResourceType == VAR_1)
        {
            VAR_13 = FUNC_0 (VAR_9, VAR_5);
        }
        else if (VAR_10->Address.ResourceType == VAR_0)
        {
            VAR_13 = FUNC_0 (VAR_9, VAR_4);
        }



        if (VAR_13)
        {
            return (VAR_13);
        }
        break;

    case 129:



        if (VAR_10->Gpio.ConnectionType > VAR_2)
        {
            return (((void*)0));
        }

        VAR_12 = VAR_6[VAR_10->Gpio.ConnectionType];
        break;

    case 128:



        if ((VAR_10->CommonSerialBus.Type == 0) ||
            (VAR_10->CommonSerialBus.Type > VAR_3))
        {
            return (((void*)0));
        }

        VAR_12 = VAR_8[VAR_10->CommonSerialBus.Type];
        break;

    default:

        break;
    }



    if (VAR_12)
    {
        VAR_13 = FUNC_0 (VAR_9, VAR_12);
    }

    return (VAR_13);
}
