
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {scalar_t__ Opcode; } ;
struct TYPE_8__ {struct TYPE_8__* Next; int TableOffset; int Name; } ;
typedef TYPE_1__ DT_FIELD ;
typedef TYPE_2__ ACPI_DMTABLE_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3 (
    DT_FIELD *VAR_2)
{
    ACPI_DMTABLE_INFO *VAR_3;
    DT_FIELD *VAR_4;
    UINT32 VAR_5;


    VAR_5 = VAR_1;
    VAR_4 = VAR_2;
    while (VAR_4)
    {
        VAR_3 = FUNC_1 (VAR_4->Name);
        if (VAR_3)
        {


            VAR_4->TableOffset = VAR_5;
            VAR_5 += FUNC_0 (VAR_4, VAR_3);



            if (VAR_3->Opcode == VAR_0)
            {
                FUNC_2 (VAR_4);
            }
        }

        VAR_4 = VAR_4->Next;
    }
}
