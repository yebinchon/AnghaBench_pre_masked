
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Pointer; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int FUNC_0 (scalar_t__,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (int ) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;

ACPI_STATUS
FUNC_8 (
    ACPI_HANDLE VAR_6,
    ACPI_BUFFER *VAR_7)
{
    ACPI_STATUS VAR_8;
    ACPI_NAMESPACE_NODE *VAR_9;
    const char *VAR_10;


    FUNC_3 (VAR_5, VAR_6);


    VAR_9 = FUNC_4 (VAR_6);
    if (!VAR_9)
    {
        FUNC_7 (VAR_3);
    }



    VAR_8 = FUNC_6 (VAR_7, VAR_2);
    if (FUNC_2 (VAR_8))
    {
        FUNC_7 (VAR_8);
    }



    VAR_10 = FUNC_5 (VAR_9);
    FUNC_0 (VAR_7->Pointer, VAR_10);
    ((char *) VAR_7->Pointer) [VAR_1] = 0;

    FUNC_1 ((VAR_0, "%4.4s\n", (char *) VAR_7->Pointer));
    FUNC_7 (VAR_4);
}
