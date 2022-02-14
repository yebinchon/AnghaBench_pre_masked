
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_9__ {int * Tables; } ;
struct TYPE_8__ {int Revision; } ;
struct TYPE_7__ {TYPE_2__* Pointer; int Address; int Flags; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ACPI_TABLE_DESC ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_1 (size_t*,int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;

void
FUNC_6 (
    ACPI_TABLE_DESC *VAR_2,
    BOOLEAN VAR_3,
    UINT32 *VAR_4)
{
    UINT32 VAR_5;
    ACPI_STATUS VAR_6;


    VAR_6 = FUNC_1 (&VAR_5, ((void*)0));
    if (FUNC_0 (VAR_6))
    {
        return;
    }
    if (VAR_3)
    {
        FUNC_3 (VAR_2);
    }

    FUNC_2 (&VAR_1.Tables[VAR_5],
        VAR_2->Address, VAR_2->Flags, VAR_2->Pointer);

    FUNC_4 (VAR_2->Address, VAR_2->Pointer);



    *VAR_4 = VAR_5;



    if (VAR_5 == VAR_0)
    {
        FUNC_5 (VAR_2->Pointer->Revision);
    }
}
