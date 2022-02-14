
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_10__ {scalar_t__ Pointer; int Length; } ;
struct TYPE_7__ {char* Ascii; } ;
struct TYPE_9__ {TYPE_1__ Name; } ;
struct TYPE_8__ {int DisplayType; int DebugLevel; int OwnerId; scalar_t__ Count; } ;
typedef TYPE_2__ ACPI_WALK_INFO ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;
typedef char* ACPI_HANDLE ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int,TYPE_2__*,int *) ;
 int FUNC_3 (char*,TYPE_4__*,int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_6 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_HANDLE VAR_7,
    UINT32 VAR_8,
    void *VAR_9,
    void **VAR_10)
{
    ACPI_STATUS VAR_11;
    char *VAR_12 = (char *) VAR_9;
    UINT32 VAR_13;
    ACPI_BUFFER VAR_14;
    ACPI_WALK_INFO VAR_15;




    for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
    {


        if ((VAR_12[VAR_13] != '?') &&
            (VAR_12[VAR_13] != ((ACPI_NAMESPACE_NODE *)
                VAR_7)->Name.Ascii[VAR_13]))
        {


            return (VAR_5);
        }
    }



    VAR_14.Length = VAR_0;
    VAR_11 = FUNC_3 (VAR_7, &VAR_14, VAR_6);
    if (FUNC_0 (VAR_11))
    {
        FUNC_4 ("Could Not get pathname for object %p\n",
            VAR_7);
    }
    else
    {
        VAR_15.Count = 0;
        VAR_15.OwnerId = VAR_3;
        VAR_15.DebugLevel = VAR_4;
        VAR_15.DisplayType = VAR_2 | VAR_1;

        FUNC_4 ("%32s", (char *) VAR_14.Pointer);
        (void) FUNC_2 (VAR_7, VAR_8, &VAR_15, ((void*)0));
        FUNC_1 (VAR_14.Pointer);
    }

    return (VAR_5);
}
