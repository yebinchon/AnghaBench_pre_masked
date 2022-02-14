
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {int ConnectionType; } ;
struct TYPE_7__ {TYPE_1__ Gpio; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef int ACPI_OP_WALK_INFO ;




 int FUNC_0 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (
    ACPI_OP_WALK_INFO *VAR_0,
    AML_RESOURCE *VAR_1,
    UINT32 VAR_2,
    UINT32 VAR_3)
{
    UINT8 VAR_4;


    VAR_4 = VAR_1->Gpio.ConnectionType;

    switch (VAR_4)
    {
    case 129:

        FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3);
        break;

    case 128:

        FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3);
        break;

    default:

        FUNC_2 ("Unknown GPIO type\n");
        break;
    }
}
