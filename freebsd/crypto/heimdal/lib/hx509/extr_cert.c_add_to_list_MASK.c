
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * val; } ;
typedef TYPE_1__ hx509_octet_string_list ;
typedef int heim_octet_string ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static int
FUNC_2(hx509_octet_string_list *VAR_1, const heim_octet_string *VAR_2)
{
    void *VAR_3;
    int VAR_4;

    VAR_3 = FUNC_1(VAR_1->val, (VAR_1->len + 1) * sizeof(VAR_1->val[0]));
    if (VAR_3 == ((void*)0))
 return VAR_0;
    VAR_1->val = VAR_3;
    VAR_4 = FUNC_0(VAR_2, &VAR_1->val[VAR_1->len]);
    if (VAR_4)
 return VAR_4;
    VAR_1->len++;
    return 0;
}
