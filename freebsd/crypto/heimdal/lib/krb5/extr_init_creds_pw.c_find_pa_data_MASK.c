
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t len; TYPE_1__* val; } ;
struct TYPE_5__ {unsigned int padata_type; } ;
typedef TYPE_1__ PA_DATA ;
typedef TYPE_2__ METHOD_DATA ;



__attribute__((used)) static PA_DATA *
FUNC_0(const METHOD_DATA *VAR_0, unsigned VAR_1)
{
    size_t VAR_2;
    if (VAR_0 == ((void*)0))
 return ((void*)0);
    for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++)
 if (VAR_0->val[VAR_2].padata_type == VAR_1)
     return &VAR_0->val[VAR_2];
    return ((void*)0);
}
