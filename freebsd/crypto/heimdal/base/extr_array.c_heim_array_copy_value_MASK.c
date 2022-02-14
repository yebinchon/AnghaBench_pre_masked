
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int heim_object_t ;
typedef TYPE_1__* heim_array_t ;
struct TYPE_3__ {size_t len; int * val; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

heim_object_t
FUNC_2(heim_array_t VAR_0, size_t VAR_1)
{
    if (VAR_1 >= VAR_0->len)
 FUNC_0("index too large");
    return FUNC_1(VAR_0->val[VAR_1]);
}
