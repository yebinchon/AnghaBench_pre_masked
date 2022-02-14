
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* heim_object_t ;
typedef TYPE_1__* heim_array_t ;
struct TYPE_4__ {size_t len; int * val; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(heim_object_t VAR_0)
{
    heim_array_t VAR_1 = VAR_0;
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++)
 FUNC_1(VAR_1->val[VAR_2]);
    FUNC_0(VAR_1->val);
}
