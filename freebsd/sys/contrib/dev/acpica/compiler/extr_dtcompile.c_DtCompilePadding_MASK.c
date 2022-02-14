
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {scalar_t__ TotalLength; scalar_t__ Length; int Buffer; } ;
typedef TYPE_1__ DT_SUBTABLE ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 () ;

ACPI_STATUS
FUNC_3 (
    UINT32 VAR_2,
    DT_SUBTABLE **VAR_3)
{
    DT_SUBTABLE *VAR_4;

    char *VAR_5;


    VAR_4 = FUNC_2 ();

    if (VAR_2 > 0)
    {
        VAR_5 = FUNC_1 (VAR_2);
        VAR_4->Buffer = FUNC_0 (VAR_1, VAR_5);
    }

    VAR_4->Length = VAR_2;
    VAR_4->TotalLength = VAR_2;


    *VAR_3 = VAR_4;
    return (VAR_0);
}
