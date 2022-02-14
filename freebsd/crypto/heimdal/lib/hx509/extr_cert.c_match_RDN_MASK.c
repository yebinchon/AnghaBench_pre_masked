
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t len; TYPE_1__* val; } ;
struct TYPE_5__ {int value; int type; } ;
typedef TYPE_2__ RelativeDistinguishedName ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(const RelativeDistinguishedName *VAR_1,
   const RelativeDistinguishedName *VAR_2)
{
    size_t VAR_3;

    if (VAR_1->len != VAR_2->len)
 return VAR_0;

    for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
 int VAR_4, VAR_5;

 if (FUNC_1(&VAR_1->val[VAR_3].type, &VAR_2->val[VAR_3].type) != 0)
     return VAR_0;
 VAR_5 = FUNC_0(&VAR_1->val[VAR_3].value, &VAR_2->val[VAR_3].value, &VAR_4);
 if (VAR_5)
     return VAR_5;
 if (VAR_4 != 0)
     return VAR_0;
    }
    return 0;
}
