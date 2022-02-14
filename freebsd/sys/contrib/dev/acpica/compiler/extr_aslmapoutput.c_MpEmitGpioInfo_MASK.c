
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* DeviceName; int Type; size_t Polarity; size_t Direction; struct TYPE_7__* Next; int TargetNode; int Op; int PinIndex; int PinNumber; } ;
struct TYPE_6__ {int Description; } ;
typedef TYPE_1__ AH_DEVICE_ID ;
typedef TYPE_2__ ACPI_GPIO_INFO ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 TYPE_1__* FUNC_1 (char*) ;
 TYPE_2__* VAR_1 ;
 char** VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 (int ,int ,int *,char**) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int ,int *,char**) ;
 int FUNC_7 (TYPE_2__*) ;
 char** VAR_3 ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9 (
    void)
{
    ACPI_GPIO_INFO *VAR_4;
    char *VAR_5;
    char *VAR_6 = ((void*)0);
    const char *VAR_7;
    const char *VAR_8;
    char *VAR_9;
    const char *VAR_10;
    char *VAR_11;
    const AH_DEVICE_ID *VAR_12;




    VAR_4 = VAR_1;
    while (VAR_4)
    {
        VAR_11 = FUNC_5 (VAR_4->DeviceName);



        if (!VAR_6 ||
            FUNC_8 (VAR_6, VAR_4->DeviceName))
        {
            FUNC_2 (VAR_0,
                "\n\nGPIO Controller:  %-8s  %-28s",
                VAR_11, VAR_4->DeviceName);

            VAR_12 = FUNC_1 (VAR_11);
            if (VAR_12)
            {
                FUNC_2 (VAR_0, "  // %s",
                    VAR_12->Description);
            }

            FUNC_2 (VAR_0,
                "\n\nPin   Type     Direction    Polarity"
                "    Dest _HID  Destination\n");
        }

        VAR_6 = VAR_4->DeviceName;



        switch (VAR_4->Type)
        {
        case 129:

            VAR_5 = "GpioInt";
            VAR_7 = "-Interrupt-";
            VAR_8 = VAR_3[VAR_4->Polarity];
            break;

        case 128:

            VAR_5 = "GpioIo ";
            VAR_7 = VAR_2[VAR_4->Direction];
            VAR_8 = "          ";
            break;

        default:
            continue;
        }



        FUNC_2 (VAR_0, "%4.4X  %s  %s  %s  ",
            VAR_4->PinNumber, VAR_5, VAR_7, VAR_8);

        VAR_9 = ((void*)0);
        VAR_11 = FUNC_3 (VAR_4->Op, VAR_4->PinIndex,
            &VAR_4->TargetNode, &VAR_9);
        if (VAR_11)
        {




            FUNC_2 (VAR_0, "%8s   %-28s",
                VAR_11, VAR_9);

            FUNC_7 (VAR_4);
        }
        else
        {





            VAR_11 = FUNC_6 (VAR_4->Op, &VAR_4->TargetNode,
                &VAR_9);

            FUNC_2 (VAR_0, "%8s   %-28s",
                VAR_11, VAR_9);



            VAR_12 = FUNC_1 (VAR_11);
            if (VAR_12)
            {
                FUNC_2 (VAR_0, "  // %s",
                    VAR_12->Description);
            }
            else if ((VAR_10 = FUNC_4 (VAR_9)))
            {
                FUNC_2 (VAR_0, "  // %s (_DDN)",
                    VAR_10);
            }
        }

        FUNC_2 (VAR_0, "\n");
        FUNC_0 (VAR_9);
        VAR_4 = VAR_4->Next;
    }
}
