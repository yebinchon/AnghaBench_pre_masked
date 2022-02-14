
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* heim_array_t ;
typedef int (* heim_array_iterator_f_t ) (int ,void*) ;
struct TYPE_3__ {size_t len; int * val; } ;



void
FUNC_0(heim_array_t VAR_0, heim_array_iterator_f_t VAR_1, void *VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0->len; VAR_3++)
 VAR_1(VAR_0->val[VAR_3], VAR_2);
}
