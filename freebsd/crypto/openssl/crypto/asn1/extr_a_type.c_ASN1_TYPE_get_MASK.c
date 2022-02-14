
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ptr; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ ASN1_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(const ASN1_TYPE *VAR_2)
{
    if (VAR_2->type == VAR_0
            || VAR_2->type == VAR_1
            || VAR_2->value.ptr != ((void*)0))
        return VAR_2->type;
    else
        return 0;
}
