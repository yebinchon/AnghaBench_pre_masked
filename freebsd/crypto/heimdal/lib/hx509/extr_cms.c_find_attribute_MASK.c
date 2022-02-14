
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int heim_oid ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {size_t len; TYPE_2__ const* val; } ;
typedef TYPE_1__ CMSAttributes ;
typedef TYPE_2__ Attribute ;


 scalar_t__ FUNC_0 (int *,int const*) ;

__attribute__((used)) static const Attribute *
FUNC_1(const CMSAttributes *VAR_0, const heim_oid *VAR_1)
{
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->len; VAR_2++)
 if (FUNC_0(&VAR_0->val[VAR_2].type, VAR_1) == 0)
     return &VAR_0->val[VAR_2];
    return ((void*)0);
}
