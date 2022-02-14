
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_6__ {TYPE_1__* RegisterInfo; } ;
struct TYPE_5__ {int EnableMask; int MaskForRun; int EnableAddress; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_2__ ACPI_GPE_EVENT_INFO ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;



 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *) ;

ACPI_STATUS
FUNC_8 (
    ACPI_GPE_EVENT_INFO *VAR_4,
    UINT32 VAR_5)
{
    ACPI_GPE_REGISTER_INFO *VAR_6;
    ACPI_STATUS VAR_7 = VAR_3;
    UINT64 VAR_8;
    UINT32 VAR_9;


    FUNC_3 ();




    VAR_6 = VAR_4->RegisterInfo;
    if (!VAR_6)
    {
        return (VAR_2);
    }



    VAR_7 = FUNC_6 (&VAR_8, &VAR_6->EnableAddress);
    if (FUNC_2 (VAR_7))
    {
        return (VAR_7);
    }



    VAR_9 = FUNC_5 (VAR_4);
    switch (VAR_5)
    {
    case 130:



        if (!(VAR_9 & VAR_6->EnableMask))
        {
            return (VAR_0);
        }



    case 128:

        FUNC_4 (VAR_8, VAR_9);
        break;

    case 129:

        FUNC_0 (VAR_8, VAR_9);
        break;

    default:

        FUNC_1 ((VAR_1, "Invalid GPE Action, %u", VAR_5));
        return (VAR_0);
    }

    if (!(VAR_9 & VAR_6->MaskForRun))
    {


        VAR_7 = FUNC_7 (VAR_8, &VAR_6->EnableAddress);
    }
    return (VAR_7);
}
