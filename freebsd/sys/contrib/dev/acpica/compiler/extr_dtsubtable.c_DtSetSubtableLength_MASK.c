
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SizeOfLengthField; int TotalLength; int LengthField; } ;
typedef TYPE_1__ DT_SUBTABLE ;


 int FUNC_0 (int ,int *,int ) ;

void
FUNC_1 (
    DT_SUBTABLE *VAR_0)
{

    if (!VAR_0->LengthField)
    {
        return;
    }

    FUNC_0 (VAR_0->LengthField, &VAR_0->TotalLength,
        VAR_0->SizeOfLengthField);
}
