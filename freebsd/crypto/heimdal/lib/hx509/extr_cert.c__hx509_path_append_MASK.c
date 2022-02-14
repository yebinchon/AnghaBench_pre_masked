
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * val; } ;
typedef TYPE_1__ hx509_path ;
typedef int hx509_context ;
typedef int hx509_cert ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int * FUNC_2 (int *,int) ;

int
FUNC_3(hx509_context VAR_1, hx509_path *VAR_2, hx509_cert VAR_3)
{
    hx509_cert *VAR_4;
    VAR_4 = FUNC_2(VAR_2->val, (VAR_2->len + 1) * sizeof(VAR_2->val[0]));
    if (VAR_4 == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }

    VAR_2->val = VAR_4;
    VAR_2->val[VAR_2->len] = FUNC_0(VAR_3);
    VAR_2->len++;

    return 0;
}
