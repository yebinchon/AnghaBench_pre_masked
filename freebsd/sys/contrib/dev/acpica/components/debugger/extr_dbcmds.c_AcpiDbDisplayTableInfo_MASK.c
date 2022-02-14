
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_7__ {size_t CurrentTableCount; TYPE_2__* Tables; } ;
struct TYPE_5__ {int Ascii; } ;
struct TYPE_6__ {int Flags; TYPE_1__ Signature; scalar_t__ Pointer; int Address; int OwnerId; } ;
typedef TYPE_2__ ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;



 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5 (
    char *VAR_3)
{
    UINT32 VAR_4;
    ACPI_TABLE_DESC *VAR_5;
    ACPI_STATUS VAR_6;




    FUNC_2 ("Idx ID    Status Type                    "
        "TableHeader (Sig, Address, Length, Misc)\n");



    for (VAR_4 = 0; VAR_4 < VAR_2.CurrentTableCount; VAR_4++)
    {
        VAR_5 = &VAR_2.Tables[VAR_4];



        FUNC_2 ("%3u %.2u ", VAR_4, VAR_5->OwnerId);



        if (!(VAR_5->Flags & VAR_0))
        {
            FUNC_2 ("NotLoaded ");
        }
        else
        {
            FUNC_2 ("   Loaded ");
        }

        switch (VAR_5->Flags & VAR_1)
        {
        case 130:

            FUNC_2 ("External/virtual  ");
            break;

        case 129:

            FUNC_2 ("Internal/physical ");
            break;

        case 128:

            FUNC_2 ("Internal/virtual  ");
            break;

        default:

            FUNC_2 ("INVALID TYPE      ");
            break;
        }



        VAR_6 = FUNC_4 (VAR_5);
        if (FUNC_0 (VAR_6))
        {
            return;
        }



        if (VAR_5->Pointer)
        {
            FUNC_3 (VAR_5->Address, VAR_5->Pointer);
        }
        else
        {


            FUNC_1 (("%4.4s - Table has been unloaded",
                VAR_5->Signature.Ascii));
        }
    }
}
