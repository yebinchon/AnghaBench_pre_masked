
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef size_t UINT32 ;
typedef int UINT16 ;
struct TYPE_13__ {size_t ParamCount; TYPE_5__* Node; int FullPathname; TYPE_4__** Parameters; TYPE_2__* Predefined; } ;
struct TYPE_12__ {int Flags; } ;
struct TYPE_10__ {size_t Type; } ;
struct TYPE_11__ {TYPE_3__ Common; } ;
struct TYPE_8__ {int ArgumentList; } ;
struct TYPE_9__ {TYPE_1__ Info; } ;
typedef TYPE_6__ ACPI_EVALUATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

void
FUNC_4 (
    ACPI_EVALUATE_INFO *VAR_3)
{
    UINT16 VAR_4;
    UINT8 VAR_5;
    UINT8 VAR_6;
    UINT8 VAR_7;
    UINT32 VAR_8;
    if (!VAR_3->Predefined || (VAR_3->Node->Flags & VAR_2))
    {
        return;
    }

    VAR_4 = VAR_3->Predefined->Info.ArgumentList;
    VAR_5 = FUNC_2 (VAR_4);



    for (VAR_8 = 0; ((VAR_8 < VAR_5) && (VAR_8 < VAR_3->ParamCount)); VAR_8++)
    {
        VAR_6 = FUNC_3 (VAR_4);
        VAR_7 = VAR_3->Parameters[VAR_8]->Common.Type;

        if (VAR_7 != VAR_6)
        {
            FUNC_0 ((VAR_1, VAR_3->FullPathname, VAR_0,
                "Argument #%u type mismatch - "
                "Found [%s], ACPI requires [%s]", (VAR_8 + 1),
                FUNC_1 (VAR_7),
                FUNC_1 (VAR_6)));



            VAR_3->Node->Flags |= VAR_2;
        }
    }
}
