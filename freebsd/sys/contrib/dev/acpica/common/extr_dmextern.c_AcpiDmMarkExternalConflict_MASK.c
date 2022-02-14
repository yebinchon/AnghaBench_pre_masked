
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* InternalPath; struct TYPE_7__* Next; int Flags; } ;
struct TYPE_6__ {int Flags; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;
typedef TYPE_2__ ACPI_EXTERNAL_LIST ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,char**,char**) ;
 int FUNC_4 (char**) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__*,char*) ;

void
FUNC_6 (
    ACPI_NAMESPACE_NODE *VAR_6)
{
    ACPI_EXTERNAL_LIST *VAR_7 = VAR_3;
    char *VAR_8;
    char *VAR_9;
    char *VAR_10;
    ACPI_STATUS VAR_11;


    FUNC_2 (VAR_4);


    if (VAR_6->Flags & VAR_2)
    {
        VAR_5;
    }



    VAR_11 = FUNC_3 (VAR_6,
        &VAR_8, &VAR_9);
    if (FUNC_0 (VAR_11))
    {
        VAR_5;
    }



    VAR_11 = FUNC_4 (&VAR_9);
    if (FUNC_0 (VAR_11))
    {
        FUNC_1 (VAR_9);
        FUNC_1 (VAR_8);
        VAR_5;
    }

    while (VAR_7)
    {
        VAR_10 = VAR_7->InternalPath;
        if ((*VAR_7->InternalPath == VAR_1) &&
            (VAR_7->InternalPath[1]))
        {
            VAR_10++;
        }

        if (!FUNC_5 (VAR_7->InternalPath, VAR_9))
        {
            VAR_7->Flags |= VAR_0;
        }
        VAR_7 = VAR_7->Next;
    }

    FUNC_1 (VAR_9);
    FUNC_1 (VAR_8);

    VAR_5;
}
