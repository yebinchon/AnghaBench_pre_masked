
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_8__ {int * Handle; } ;
struct TYPE_7__ {int Level; scalar_t__ MessageId; char* Message; struct TYPE_7__* SubError; int Filename; } ;
typedef int FILE ;
typedef int BOOLEAN ;
typedef TYPE_1__ ASL_ERROR_MSG ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;





 int FUNC_1 (int *,TYPE_1__*,int ,size_t) ;
 int FUNC_2 (int *,TYPE_1__*,int *,size_t*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,char*,...) ;

void
FUNC_5 (
    UINT32 VAR_6,
    ASL_ERROR_MSG *VAR_7,
    char *VAR_8)
{
    FILE *VAR_9;
    BOOLEAN VAR_10 = VAR_5;
    UINT32 VAR_11 = 0;
    ACPI_STATUS VAR_12;
    ASL_ERROR_MSG *VAR_13 = VAR_7->SubError;


    if (VAR_4)
    {
        return;
    }





    if (!VAR_8)
    {


        switch (VAR_7->Level)
        {
        case 130:
        case 129:
        case 128:

            if (!VAR_2)
            {
                return;
            }
            break;

        case 131:

            if (!VAR_1)
            {
                return;
            }
            break;

        case 132:

            if (!VAR_0)
            {
                return;
            }
            break;

        default:

            break;
        }
    }



    VAR_9 = VAR_3[VAR_6].Handle;

    if (VAR_8)
    {
        FUNC_4 (VAR_9, "%s", VAR_8);
    }

    if (!VAR_7->Filename)
    {
        FUNC_1 (VAR_9, VAR_7, VAR_10, VAR_11);
        return;
    }

    VAR_12 = FUNC_2 (VAR_9, VAR_7, &VAR_10, &VAR_11);
    if (FUNC_0 (VAR_12))
    {
        return;
    }



    if (VAR_7->MessageId == 0)
    {
        FUNC_4 (VAR_9, "%s\n", VAR_7->Message);
        return;
    }

    FUNC_1 (VAR_9, VAR_7, VAR_10, VAR_11);

    while (VAR_13)
    {
        FUNC_4 (VAR_9, "\n");
        FUNC_3 (VAR_9, VAR_13);
        VAR_13 = VAR_13->SubError;
    }
}
