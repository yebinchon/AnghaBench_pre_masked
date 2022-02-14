
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {char* DeviceName; struct TYPE_10__* Next; int TargetNode; int Op; int Speed; int Address; TYPE_2__* Resource; } ;
struct TYPE_9__ {int Description; } ;
struct TYPE_7__ {int Type; } ;
struct TYPE_8__ {TYPE_1__ CommonSerialBus; } ;
typedef TYPE_2__ AML_RESOURCE ;
typedef TYPE_3__ AH_DEVICE_ID ;
typedef TYPE_4__ ACPI_SERIAL_INFO ;


 int FUNC_0 (char*) ;



 int VAR_0 ;
 TYPE_3__* FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int ,int ,int *,char**) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int ,int *,char**) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8 (
    void)
{
    ACPI_SERIAL_INFO *VAR_2;
    char *VAR_3;
    char *VAR_4;
    char *VAR_5 = ((void*)0);
    char *VAR_6;
    const AH_DEVICE_ID *VAR_7;
    const char *VAR_8;
    AML_RESOURCE *VAR_9;




    VAR_2 = VAR_1;
    while (VAR_2)
    {
        VAR_9 = VAR_2->Resource;
        switch (VAR_9->CommonSerialBus.Type)
        {
        case 130:
            VAR_3 = "I2C ";
            break;

        case 129:
            VAR_3 = "SPI ";
            break;

        case 128:
            VAR_3 = "UART";
            break;

        default:
            VAR_3 = "UNKN";
            break;
        }

        VAR_6 = FUNC_5 (VAR_2->DeviceName);



        if (!VAR_5 ||
            FUNC_7 (VAR_5, VAR_2->DeviceName))
        {
            FUNC_2 (VAR_0, "\n\n%s Controller:  ",
                VAR_3);
            FUNC_2 (VAR_0, "%-8s  %-28s",
                VAR_6, VAR_2->DeviceName);

            VAR_7 = FUNC_1 (VAR_6);
            if (VAR_7)
            {
                FUNC_2 (VAR_0, "  // %s",
                    VAR_7->Description);
            }

            FUNC_2 (VAR_0, "\n\n");
            FUNC_2 (VAR_0,
                "Type  Address   Speed      Dest _HID  Destination\n");
        }

        VAR_5 = VAR_2->DeviceName;

        FUNC_2 (VAR_0, "%s   %4.4X    %8.8X    ",
            VAR_3, VAR_2->Address, VAR_2->Speed);

        VAR_4 = ((void*)0);
        VAR_6 = FUNC_3 (VAR_2->Op, 0, &VAR_2->TargetNode,
            &VAR_4);
        if (VAR_6)
        {




            FUNC_2 (VAR_0, "%8s   %-28s",
                VAR_6, VAR_4);
        }
        else
        {


            VAR_6 = FUNC_6 (VAR_2->Op, &VAR_2->TargetNode,
                &VAR_4);
            FUNC_2 (VAR_0, "%8s   %-28s",
                VAR_6, VAR_4);



            VAR_7 = FUNC_1 (VAR_6);
            if (VAR_7)
            {
                FUNC_2 (VAR_0, "  // %s",
                    VAR_7->Description);
            }
            else if ((VAR_8 = FUNC_4 (VAR_4)))
            {
                FUNC_2 (VAR_0, "  // %s (_DDN)",
                    VAR_8);
            }
        }

        FUNC_2 (VAR_0, "\n");
        FUNC_0 (VAR_4);
        VAR_2 = VAR_2->Next;
    }
}
