
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ LogicalLineNumber; struct TYPE_4__* Next; } ;
typedef TYPE_1__ ASL_ERROR_MSG ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_0 (
    ASL_ERROR_MSG *VAR_1)
{
    ASL_ERROR_MSG *VAR_2;
    ASL_ERROR_MSG *VAR_3;




    if (!VAR_0)
    {
        VAR_0 = VAR_1;
        return;
    }





    VAR_3 = ((void*)0);
    VAR_2 = VAR_0;

    while ((VAR_2) && (VAR_2->LogicalLineNumber <= VAR_1->LogicalLineNumber))
    {
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->Next;
    }



    VAR_1->Next = VAR_2;

    if (VAR_3)
    {
        VAR_3->Next = VAR_1;
    }
    else
    {
        VAR_0 = VAR_1;
    }
}
