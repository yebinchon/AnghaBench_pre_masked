
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {int OemTableId; int Length; int Signature; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;

ACPI_STATUS
FUNC_6 (
    void)
{
    ACPI_STATUS VAR_4;
    ACPI_TABLE_HEADER VAR_5;
    ACPI_TABLE_HEADER *VAR_6;
    UINT32 VAR_7;




    FUNC_1 (VAR_5.Signature, VAR_0);
    VAR_4 = FUNC_2 (&VAR_5, &VAR_6);
    if (FUNC_0 (VAR_4) || !VAR_6)
    {
        FUNC_5 (VAR_3, "Could not obtain DSDT\n");
        return (VAR_1);
    }

    FUNC_4 (VAR_6, VAR_6->Length,
        VAR_0, VAR_6->OemTableId);



    VAR_4 = FUNC_3 (VAR_6, &VAR_7);
    if (FUNC_0 (VAR_4))
    {
        FUNC_5 (VAR_3, "Could not store DSDT\n");
        return (VAR_1);
    }

    return (VAR_2);
}
