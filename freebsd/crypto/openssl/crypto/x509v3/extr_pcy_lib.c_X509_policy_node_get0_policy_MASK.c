
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
typedef TYPE_2__ X509_POLICY_NODE ;
struct TYPE_4__ {int const* valid_policy; } ;
typedef int ASN1_OBJECT ;



const ASN1_OBJECT *FUNC_0(const X509_POLICY_NODE *VAR_0)
{
    if (!VAR_0)
        return ((void*)0);
    return VAR_0->data->valid_policy;
}
