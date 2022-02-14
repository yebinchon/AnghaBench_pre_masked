
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int items; } ;
typedef TYPE_1__ For ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int,int ,TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3(int VAR_2)
{
    For *VAR_3;

    VAR_3 = VAR_1;
    VAR_1 = ((void*)0);

    if (FUNC_2(&VAR_3->items) == 0) {

        FUNC_0(VAR_3);
        return;
    }

    FUNC_1(((void*)0), VAR_2, -1, VAR_0, VAR_3);
}
