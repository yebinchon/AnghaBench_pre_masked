
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {void* Flags; int * Parameters; void* RelativePathname; int PrefixNode; } ;
struct TYPE_7__ {scalar_t__ DeviceCount; scalar_t__ Num_STA; scalar_t__ Num_INI; TYPE_2__* EvaluateInfo; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;
typedef int ACPI_EVALUATE_INFO ;
typedef TYPE_1__ ACPI_DEVICE_WALK_INFO ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 () ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int ,int ,int ,int ,int ,int *,TYPE_1__*,int *) ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int FUNC_13 (int ) ;

ACPI_STATUS
FUNC_14 (
    UINT32 VAR_21)
{
    ACPI_STATUS VAR_22 = VAR_11;
    ACPI_DEVICE_WALK_INFO VAR_23;
    ACPI_HANDLE VAR_24;


    FUNC_6 (VAR_19);


    if (!(VAR_21 & VAR_4))
    {
        FUNC_1 ((VAR_0,
            "[Init] Initializing ACPI Devices\n"));



        VAR_23.DeviceCount = 0;
        VAR_23.Num_STA = 0;
        VAR_23.Num_INI = 0;

        FUNC_2 ((VAR_1,
            "Initializing Device/Processor/Thermal objects "
            "and executing _INI/_STA methods:\n"));



        VAR_22 = FUNC_11 (VAR_7, VAR_6,
            VAR_8, VAR_17, VAR_15, ((void*)0), &VAR_23, ((void*)0));
        if (FUNC_4 (VAR_22))
        {
            goto ErrorExit;
        }



        VAR_23.EvaluateInfo = FUNC_0 (sizeof (ACPI_EVALUATE_INFO));
        if (!VAR_23.EvaluateInfo)
        {
            VAR_22 = VAR_10;
            goto ErrorExit;
        }






        VAR_23.EvaluateInfo->PrefixNode = VAR_13;
        VAR_23.EvaluateInfo->RelativePathname = VAR_18;
        VAR_23.EvaluateInfo->Parameters = ((void*)0);
        VAR_23.EvaluateInfo->Flags = VAR_2;

        VAR_22 = FUNC_10 (VAR_23.EvaluateInfo);
        if (FUNC_7 (VAR_22))
        {
            VAR_23.Num_INI++;
        }






        VAR_22 = FUNC_9 (((void*)0), "\\_SB", &VAR_24);
        if (FUNC_7 (VAR_22))
        {
            FUNC_12 (VAR_23.EvaluateInfo, 0, sizeof (ACPI_EVALUATE_INFO));
            VAR_23.EvaluateInfo->PrefixNode = VAR_24;
            VAR_23.EvaluateInfo->RelativePathname = VAR_18;
            VAR_23.EvaluateInfo->Parameters = ((void*)0);
            VAR_23.EvaluateInfo->Flags = VAR_2;

            VAR_22 = FUNC_10 (VAR_23.EvaluateInfo);
            if (FUNC_7 (VAR_22))
            {
                VAR_23.Num_INI++;
            }
        }
    }
    if (!(VAR_21 & VAR_3))
    {
        FUNC_1 ((VAR_0,
            "[Init] Executing _REG OpRegion methods\n"));

        VAR_22 = FUNC_8 ();
        if (FUNC_4 (VAR_22))
        {
            goto ErrorExit;
        }
    }

    if (!(VAR_21 & VAR_4))
    {


        VAR_22 = FUNC_11 (VAR_7, VAR_6,
            VAR_8, VAR_17, VAR_16, ((void*)0), &VAR_23, ((void*)0));






        if (VAR_12 >= VAR_5)
        {
            VAR_14 = VAR_20;
        }

        FUNC_5 (VAR_23.EvaluateInfo);
        if (FUNC_4 (VAR_22))
        {
            goto ErrorExit;
        }

        FUNC_2 ((VAR_1,
            "    Executed %u _INI methods requiring %u _STA executions "
            "(examined %u objects)\n",
            VAR_23.Num_INI, VAR_23.Num_STA, VAR_23.DeviceCount));
    }

    FUNC_13 (VAR_22);


ErrorExit:
    FUNC_3 ((VAR_9, VAR_22, "During device initialization"));
    FUNC_13 (VAR_22);
}
