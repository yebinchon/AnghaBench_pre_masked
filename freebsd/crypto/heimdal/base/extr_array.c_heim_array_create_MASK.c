
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* heim_array_t ;
struct TYPE_4__ {scalar_t__ len; int * val; } ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;

heim_array_t
FUNC_1(void)
{
    heim_array_t VAR_1;

    VAR_1 = FUNC_0(&VAR_0, sizeof(*VAR_1));
    if (VAR_1 == ((void*)0))
 return ((void*)0);

    VAR_1->val = ((void*)0);
    VAR_1->len = 0;

    return VAR_1;
}
