
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; void* meth_data; int * meth; } ;
typedef TYPE_1__ CONF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(CONF *VAR_2)
{
    if (VAR_2 == ((void*)0))
        return 0;

    VAR_2->meth = &VAR_1;
    VAR_2->meth_data = (void *)VAR_0;
    VAR_2->data = ((void*)0);

    return 1;
}
