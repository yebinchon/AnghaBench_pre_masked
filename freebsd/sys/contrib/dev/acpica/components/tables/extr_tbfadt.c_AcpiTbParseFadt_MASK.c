
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {scalar_t__ XFacs; scalar_t__ Facs; scalar_t__ XDsdt; } ;
struct TYPE_7__ {TYPE_1__* Tables; } ;
struct TYPE_6__ {int Length; } ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;
typedef int ACPI_PHYSICAL_ADDRESS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int **) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_6 (
    void)
{
    UINT32 VAR_10;
    ACPI_TABLE_HEADER *VAR_11;
    ACPI_TABLE_DESC *VAR_12;
    ACPI_STATUS VAR_13;
    VAR_12 = &VAR_6.Tables[VAR_4];
    VAR_13 = FUNC_2 (VAR_12, &VAR_11);
    if (FUNC_0 (VAR_13))
    {
        return;
    }
    VAR_10 = VAR_12->Length;





    (void) FUNC_5 (VAR_11, VAR_10);



    FUNC_1 (VAR_11, VAR_10);



    FUNC_4 (VAR_12);



    FUNC_3 (
        (ACPI_PHYSICAL_ADDRESS) VAR_2.XDsdt,
        VAR_0, VAR_8, VAR_9,
        &VAR_1);



    if (!VAR_5)
    {
        if (VAR_2.Facs)
        {
            FUNC_3 (
                (ACPI_PHYSICAL_ADDRESS) VAR_2.Facs,
                VAR_0, VAR_8, VAR_9,
                &VAR_3);
        }
        if (VAR_2.XFacs)
        {
            FUNC_3 (
                (ACPI_PHYSICAL_ADDRESS) VAR_2.XFacs,
                VAR_0, VAR_8, VAR_9,
                &VAR_7);
        }
    }
}
