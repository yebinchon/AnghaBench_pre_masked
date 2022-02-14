
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {int Length; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 () ;

ACPI_STATUS
FUNC_5 (
    char *VAR_6,
    ACPI_TABLE_HEADER *VAR_7)
{


    if (!VAR_4)
    {
        return (VAR_1);
    }

    if (!VAR_3)
    {
        FUNC_3 (VAR_6, VAR_7);
    }

    FUNC_0 (((void*)0), VAR_4, VAR_0);
    FUNC_4 ();

    if (VAR_3)
    {
        FUNC_1 ("\n\nTable Header:\n");
        FUNC_2 ((UINT8 *) VAR_7, sizeof (ACPI_TABLE_HEADER),
            VAR_5, VAR_0);

        FUNC_1 ("Table Body (Length 0x%X)\n", VAR_7->Length);
        FUNC_2 (((UINT8 *) VAR_7 + sizeof (ACPI_TABLE_HEADER)),
            VAR_7->Length, VAR_5, VAR_0);
    }

    return (VAR_2);
}
