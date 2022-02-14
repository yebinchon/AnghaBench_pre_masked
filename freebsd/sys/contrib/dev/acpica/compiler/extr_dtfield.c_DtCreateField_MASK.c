
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_8__ {int Column; int NameColumn; int ByteOffset; int Line; scalar_t__ StringLength; void* Value; void* Name; } ;
struct TYPE_7__ {int Column; int Line; scalar_t__ Value; } ;
typedef TYPE_1__ DT_TABLE_UNIT ;
typedef TYPE_2__ DT_FIELD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

void
FUNC_6 (
    DT_TABLE_UNIT *VAR_1,
    DT_TABLE_UNIT *VAR_2,
    UINT32 VAR_3)
{
    DT_FIELD *VAR_4 = FUNC_2 ();


    VAR_4->StringLength = 0;
    if (VAR_1->Value)
    {
        VAR_4->Name =
            FUNC_4 (FUNC_3 (FUNC_5 (VAR_1->Value) + 1), VAR_1->Value);
    }

    if (VAR_2->Value)
    {
        VAR_4->StringLength = FUNC_5 (VAR_2->Value);
        VAR_4->Value =
            FUNC_4 (FUNC_3 (VAR_4->StringLength + 1), VAR_2->Value);
    }

    VAR_4->Line = VAR_2->Line;
    VAR_4->ByteOffset = VAR_3;
    VAR_4->NameColumn = VAR_1->Column;
    VAR_4->Column = VAR_2->Column;
    FUNC_1 (VAR_4);

    FUNC_0 (VAR_0);
}
