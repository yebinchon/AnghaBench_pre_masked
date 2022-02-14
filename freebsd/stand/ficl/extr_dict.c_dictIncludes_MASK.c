
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int dict; } ;
typedef TYPE_1__ FICL_DICT ;



int FUNC_0(FICL_DICT *VAR_0, void *VAR_1)
{
    return ((VAR_1 >= (void *) &VAR_0->dict)
        && (VAR_1 < (void *)(&VAR_0->dict + VAR_0->size))
           );
}
