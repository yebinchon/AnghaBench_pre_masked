
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Identifier; struct TYPE_4__* Replacement; struct TYPE_4__* Next; int Persist; } ;
typedef TYPE_1__ PR_DEFINE_INFO ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1 (
    void)
{
    PR_DEFINE_INFO *VAR_1;






    while ((VAR_0) && (!VAR_0->Persist))
    {
        VAR_1 = VAR_0;
        VAR_0 = VAR_1->Next;

        FUNC_0 (VAR_1->Replacement);
        FUNC_0 (VAR_1->Identifier);
        FUNC_0 (VAR_1);
    }
}
