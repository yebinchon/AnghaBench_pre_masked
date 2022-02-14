
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int heim_oid ;
struct TYPE_6__ {int attrId; } ;
struct TYPE_5__ {size_t len; TYPE_2__ const* val; } ;
typedef TYPE_1__ PKCS12_Attributes ;
typedef TYPE_2__ PKCS12_Attribute ;


 scalar_t__ FUNC_0 (int const*,int *) ;

__attribute__((used)) static const PKCS12_Attribute *
FUNC_1(const PKCS12_Attributes *VAR_0, const heim_oid *VAR_1)
{
    size_t VAR_2;
    if (VAR_0 == ((void*)0))
 return ((void*)0);
    for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++)
 if (FUNC_0(VAR_1, &VAR_0->val[VAR_2].attrId) == 0)
     return &VAR_0->val[VAR_2];
    return ((void*)0);
}
