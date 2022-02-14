
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_10__ {scalar_t__ Length; int Pointer; } ;
struct TYPE_9__ {int Pathname; scalar_t__** Args; int * Types; } ;
struct TYPE_8__ {size_t Count; int * Pointer; } ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_1__ ACPI_OBJECT_LIST ;
typedef int ACPI_OBJECT ;
typedef TYPE_2__ ACPI_DB_METHOD_INFO ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,int *) ;
 int FUNC_5 (size_t,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int *,int ,TYPE_1__*,TYPE_3__*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_7 (char*) ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    ACPI_DB_METHOD_INFO *VAR_15,
    ACPI_BUFFER *VAR_16)
{
    ACPI_STATUS VAR_17;
    ACPI_OBJECT_LIST VAR_18;
    ACPI_OBJECT VAR_19[VAR_0 + 1];
    UINT32 VAR_20;


    FUNC_3 (VAR_12);


    if (VAR_10 && !VAR_6)
    {
        FUNC_7 ("Warning: debug output is not enabled!\n");
    }

    VAR_18.Count = 0;
    VAR_18.Pointer = ((void*)0);



    if (VAR_15->Args && VAR_15->Args[0])
    {


        for (VAR_20 = 0; (VAR_15->Args[VAR_20] && *(VAR_15->Args[VAR_20])); VAR_20++)
        {


            VAR_17 = FUNC_4 (VAR_15->Types[VAR_20],
                VAR_15->Args[VAR_20], &VAR_19[VAR_20]);
            if (FUNC_2 (VAR_17))
            {
                FUNC_1 ((VAR_4, VAR_17,
                    "While parsing method arguments"));
                goto Cleanup;
            }
        }

        VAR_18.Count = VAR_20;
        VAR_18.Pointer = VAR_19;
    }



    VAR_16->Pointer = VAR_9;
    VAR_16->Length = VAR_1;



    VAR_11 = VAR_14;
    VAR_17 = FUNC_6 (((void*)0), VAR_15->Pathname,
        &VAR_18, VAR_16);

    VAR_8 = VAR_13;
    VAR_11 = VAR_13;

    if (FUNC_2 (VAR_17))
    {
        if ((VAR_17 == VAR_2) || VAR_7)
        {


            FUNC_1 ((VAR_4, VAR_17,
                "Aborting top-level method"));

            VAR_7 = VAR_13;
            VAR_17 = VAR_5;
            goto Cleanup;
        }

        FUNC_1 ((VAR_4, VAR_17,
            "while executing %s from AML Debugger", VAR_15->Pathname));

        if (VAR_17 == VAR_3)
        {
            FUNC_0 ((VAR_4,
                "Possible buffer overflow within AML Debugger "
                "buffer (size 0x%X needed 0x%X)",
                VAR_1, (UINT32) VAR_16->Length));
        }
    }

Cleanup:
    FUNC_5 (VAR_18.Count, VAR_19);
    FUNC_8 (VAR_17);
}
