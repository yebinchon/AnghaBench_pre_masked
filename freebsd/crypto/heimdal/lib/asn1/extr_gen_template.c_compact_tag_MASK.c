
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* subtype; } ;
typedef TYPE_1__ Type ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const Type *
FUNC_0(const Type *VAR_1)
{
    while (VAR_1->type == VAR_0)
 VAR_1 = VAR_1->subtype;
    return VAR_1;
}
