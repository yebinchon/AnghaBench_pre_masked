
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* extensions; } ;
typedef TYPE_3__ hdb_entry ;
struct TYPE_7__ {unsigned int element; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
struct TYPE_8__ {size_t len; TYPE_4__* val; } ;
typedef TYPE_4__ HDB_extension ;



HDB_extension *
FUNC_0(const hdb_entry *VAR_0, int VAR_1)
{
    size_t VAR_2;

    if (VAR_0->extensions == ((void*)0))
 return ((void*)0);

    for (VAR_2 = 0; VAR_2 < VAR_0->extensions->len; VAR_2++)
 if (VAR_0->extensions->val[VAR_2].data.element == (unsigned)VAR_1)
     return &VAR_0->extensions->val[VAR_2];
    return ((void*)0);
}
