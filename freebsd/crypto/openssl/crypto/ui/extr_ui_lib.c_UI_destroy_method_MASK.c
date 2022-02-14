
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* name; int ex_data; } ;
typedef TYPE_1__ UI_METHOD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(UI_METHOD *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    FUNC_0(VAR_0, VAR_1,
                        &VAR_1->ex_data);
    FUNC_1(VAR_1->name);
    VAR_1->name = ((void*)0);
    FUNC_1(VAR_1);
}
