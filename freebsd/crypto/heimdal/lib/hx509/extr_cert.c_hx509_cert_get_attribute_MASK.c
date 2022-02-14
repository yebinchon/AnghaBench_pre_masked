
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_cert_attribute ;
typedef TYPE_3__* hx509_cert ;
typedef int heim_oid ;
struct TYPE_6__ {size_t len; TYPE_2__** val; } ;
struct TYPE_8__ {TYPE_1__ attrs; } ;
struct TYPE_7__ {int oid; } ;


 scalar_t__ FUNC_0 (int const*,int *) ;

hx509_cert_attribute
FUNC_1(hx509_cert VAR_0, const heim_oid *VAR_1)
{
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->attrs.len; VAR_2++)
 if (FUNC_0(VAR_1, &VAR_0->attrs.val[VAR_2]->oid) == 0)
     return VAR_0->attrs.val[VAR_2];
    return ((void*)0);
}
