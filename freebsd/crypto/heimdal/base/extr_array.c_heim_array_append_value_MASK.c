
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int heim_object_t ;
typedef TYPE_1__* heim_array_t ;
struct TYPE_3__ {int len; int * val; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int) ;

int
FUNC_2(heim_array_t VAR_1, heim_object_t VAR_2)
{
    heim_object_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1->val, (VAR_1->len + 1) * sizeof(VAR_1->val[0]));
    if (VAR_3 == ((void*)0))
 return VAR_0;
    VAR_1->val = VAR_3;
    VAR_1->val[VAR_1->len++] = FUNC_0(VAR_2);

    return 0;
}
