
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ ASL_ERROR_MSG ;


 int FUNC_0 (int ,TYPE_1__*,int *) ;
 TYPE_1__* VAR_0 ;

void
FUNC_1 (
    UINT32 VAR_1)
{
    ASL_ERROR_MSG *VAR_2 = VAR_0;




    while (VAR_2)
    {
        FUNC_0 (VAR_1, VAR_2, ((void*)0));
        VAR_2 = VAR_2->Next;
    }
}
