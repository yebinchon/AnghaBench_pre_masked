
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_13__ {scalar_t__ Integer; } ;
struct TYPE_14__ {scalar_t__ ParseOpcode; TYPE_1__ Value; TYPE_5__* Next; TYPE_5__* Child; } ;
struct TYPE_17__ {TYPE_2__ Asl; } ;
struct TYPE_15__ {int Name; } ;
struct TYPE_16__ {TYPE_3__ Info; } ;
typedef TYPE_4__ ACPI_PREDEFINED_INFO ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int ,TYPE_5__*,int ,int,int ,int) ;
 int FUNC_1 (int ,TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_5__*,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_6,
    const ACPI_PREDEFINED_INFO *VAR_7)
{
    ACPI_PARSE_OBJECT *VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;




    VAR_8 = VAR_6->Asl.Child;
    VAR_9 = (UINT32) VAR_8->Asl.Value.Integer;



    VAR_8 = VAR_8->Asl.Next;
    VAR_11 = (UINT32) VAR_8->Asl.Value.Integer;
    if (VAR_8->Asl.ParseOpcode != VAR_5)
    {
        FUNC_3 (VAR_2, VAR_3, VAR_8, VAR_4);
        return;
    }



    VAR_10 = 21;
    if (VAR_11 == 0)
    {
        VAR_10 = 20;
    }

    if (VAR_9 < VAR_10)
    {
        FUNC_2 (VAR_7->Info.Name, VAR_6,
            VAR_9, VAR_10);
        return;
    }
    else if (VAR_9 > VAR_10)
    {
        FUNC_1 (VAR_7->Info.Name, VAR_6,
            VAR_9, VAR_10);
    }



    VAR_8 = FUNC_0 (VAR_7->Info.Name, VAR_8,
        VAR_0, 16,
        VAR_1, 4);



    if (VAR_11 > 0)
    {
        FUNC_0 (VAR_7->Info.Name, VAR_8,
            VAR_0, 1, 0, 0);
    }
}
