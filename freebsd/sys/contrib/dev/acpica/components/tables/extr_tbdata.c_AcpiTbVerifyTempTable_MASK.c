
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {char* Ascii; int Integer; } ;
struct TYPE_7__ {int Flags; int Address; TYPE_6__ Signature; int Length; int Pointer; } ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef scalar_t__ ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__) ;

ACPI_STATUS
FUNC_12 (
    ACPI_TABLE_DESC *VAR_8,
    char *VAR_9,
    UINT32 *VAR_10)
{
    ACPI_STATUS VAR_11 = VAR_5;


    FUNC_5 (VAR_7);




    VAR_11 = FUNC_8 (VAR_8);
    if (FUNC_3 (VAR_11))
    {
        FUNC_11 (VAR_4);
    }



    if (VAR_9 &&
        !FUNC_1 (&VAR_8->Signature, VAR_9))
    {
        FUNC_0 ((VAR_3,
            "Invalid signature 0x%X for ACPI table, expected [%s]",
            VAR_8->Signature.Integer, VAR_9));
        VAR_11 = VAR_1;
        goto InvalidateAndExit;
    }

    if (VAR_6)
    {


        VAR_11 = FUNC_9 (VAR_8->Pointer, VAR_8->Length);
        if (FUNC_3 (VAR_11))
        {
            FUNC_2 ((VAR_3, VAR_4,
                "%4.4s 0x%8.8X%8.8X"
                " Attempted table install failed",
                FUNC_10 (VAR_8->Signature.Ascii) ?
                    VAR_8->Signature.Ascii : "????",
                FUNC_4 (VAR_8->Address)));

            goto InvalidateAndExit;
        }



        if (VAR_10)
        {
            VAR_11 = FUNC_6 (VAR_8, VAR_10);
            if (FUNC_3 (VAR_11))
            {
                if (VAR_11 != VAR_2)
                {
                    FUNC_2 ((VAR_3, VAR_11,
                        "%4.4s 0x%8.8X%8.8X"
                        " Table is already loaded",
                        FUNC_10 (VAR_8->Signature.Ascii) ?
                            VAR_8->Signature.Ascii : "????",
                        FUNC_4 (VAR_8->Address)));
                }

                goto InvalidateAndExit;
            }
        }

        VAR_8->Flags |= VAR_0;
    }

    FUNC_11 (VAR_11);

InvalidateAndExit:
    FUNC_7 (VAR_8);
    FUNC_11 (VAR_11);
}
