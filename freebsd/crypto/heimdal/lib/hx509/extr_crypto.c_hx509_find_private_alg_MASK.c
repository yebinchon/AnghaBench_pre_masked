
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * key_oid; } ;
typedef TYPE_1__ hx509_private_key_ops ;
typedef int heim_oid ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 TYPE_1__** VAR_0 ;

hx509_private_key_ops *
FUNC_1(const heim_oid *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_0[VAR_2]; VAR_2++) {
 if (VAR_0[VAR_2]->key_oid == ((void*)0))
     continue;
 if (FUNC_0(VAR_0[VAR_2]->key_oid, VAR_1) == 0)
     return VAR_0[VAR_2];
    }
    return ((void*)0);
}
