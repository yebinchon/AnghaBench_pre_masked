
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {void* Flags; int Value; struct TYPE_3__* Next; } ;
typedef TYPE_1__ DT_FIELD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0 (
    DT_FIELD *VAR_4)
{
    DT_FIELD *VAR_5;
    UINT32 VAR_6;






    if (VAR_1)
    {
        return;
    }



    VAR_5 = VAR_4;
    for (VAR_6 = 0; VAR_6 < 7; VAR_6++)
    {
        VAR_5 = VAR_5->Next;
    }

    VAR_5->Value = VAR_0;
    VAR_5->Flags = VAR_2;

    VAR_5 = VAR_5->Next;
    VAR_5->Value = VAR_3;
    VAR_5->Flags = VAR_2;
}
