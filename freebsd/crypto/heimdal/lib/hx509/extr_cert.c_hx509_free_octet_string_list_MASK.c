
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int * val; } ;
typedef TYPE_1__ hx509_octet_string_list ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(hx509_octet_string_list *VAR_0)
{
    size_t VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->len; VAR_1++)
 FUNC_0(&VAR_0->val[VAR_1]);
    FUNC_1(VAR_0->val);
    VAR_0->val = ((void*)0);
    VAR_0->len = 0;
}
