
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * sequence; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ ASN1_TYPE ;
typedef int ASN1_ITEM ;


 void* FUNC_0 (int *,int const*) ;
 scalar_t__ VAR_0 ;

void *FUNC_1(const ASN1_ITEM *VAR_1, const ASN1_TYPE *VAR_2)
{
    if (VAR_2 == ((void*)0) || VAR_2->type != VAR_0 || VAR_2->value.sequence == ((void*)0))
        return ((void*)0);
    return FUNC_0(VAR_2->value.sequence, VAR_1);
}
