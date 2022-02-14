
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_1__ ASN1_TIME ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_2(const ASN1_TIME *VAR_2)
{
    if (VAR_2->type == VAR_0)
        return FUNC_0(VAR_2);
    else if (VAR_2->type == VAR_1)
        return FUNC_1(VAR_2);
    return 0;
}
