
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT32 ;
struct TYPE_2__ {int SmiCommand; int XPmTimerBlock; int XPm2ControlBlock; int XPm1bControlBlock; int XPm1aControlBlock; } ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;






 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (int*,int *,int *) ;
 int FUNC_5 (int ,int*,int) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    UINT32 VAR_9,
    UINT32 *VAR_10)
{
    UINT32 VAR_11 = 0;
    UINT64 VAR_12;
    ACPI_STATUS VAR_13;


    FUNC_1 (VAR_8);


    switch (VAR_9)
    {
    case 131:

        VAR_13 = FUNC_4 (&VAR_11,
            &VAR_5,
            &VAR_7);
        break;

    case 132:

        VAR_13 = FUNC_4 (&VAR_11,
            &VAR_4,
            &VAR_6);
        break;

    case 133:

        VAR_13 = FUNC_4 (&VAR_11,
            &VAR_3.XPm1aControlBlock,
            &VAR_3.XPm1bControlBlock);






        VAR_11 &= ~VAR_0;
        break;

    case 130:

        VAR_13 = FUNC_3 (&VAR_12, &VAR_3.XPm2ControlBlock);
        if (FUNC_2 (VAR_13))
        {
            VAR_11 = (UINT32) VAR_12;
        }
        break;

    case 129:

        VAR_13 = FUNC_3 (&VAR_12, &VAR_3.XPmTimerBlock);
        if (FUNC_2 (VAR_13))
        {
            VAR_11 = (UINT32) VAR_12;
        }

        break;

    case 128:

        VAR_13 = FUNC_5 (VAR_3.SmiCommand, &VAR_11, 8);
        break;

    default:

        FUNC_0 ((VAR_2, "Unknown Register ID: 0x%X",
            VAR_9));
        VAR_13 = VAR_1;
        break;
    }

    if (FUNC_2 (VAR_13))
    {
        *VAR_10 = (UINT32) VAR_11;
    }

    FUNC_6 (VAR_13);
}
