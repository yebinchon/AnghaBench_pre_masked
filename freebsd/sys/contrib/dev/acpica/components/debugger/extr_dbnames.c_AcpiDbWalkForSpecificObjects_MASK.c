
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {scalar_t__ Pointer; int Length; } ;
struct TYPE_5__ {int Count; } ;
typedef TYPE_1__ ACPI_WALK_INFO ;
typedef int ACPI_STATUS ;
typedef char* ACPI_HANDLE ;
typedef TYPE_2__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,TYPE_1__*,int *) ;
 int FUNC_3 (char*,TYPE_2__*,int ) ;
 int FUNC_4 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_HANDLE VAR_3,
    UINT32 VAR_4,
    void *VAR_5,
    void **VAR_6)
{
    ACPI_WALK_INFO *VAR_7 = (ACPI_WALK_INFO *) VAR_5;
    ACPI_BUFFER VAR_8;
    ACPI_STATUS VAR_9;


    VAR_7->Count++;



    VAR_8.Length = VAR_0;
    VAR_9 = FUNC_3 (VAR_3, &VAR_8, VAR_2);
    if (FUNC_0 (VAR_9))
    {
        FUNC_4 ("Could Not get pathname for object %p\n", VAR_3);
        return (VAR_1);
    }

    FUNC_4 ("%32s", (char *) VAR_8.Pointer);
    FUNC_1 (VAR_8.Pointer);



    (void) FUNC_2 (VAR_3, VAR_4, VAR_7, ((void*)0));
    return (VAR_1);
}
