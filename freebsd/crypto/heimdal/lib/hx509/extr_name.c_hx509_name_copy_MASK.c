
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* hx509_name ;
typedef int hx509_context ;
struct TYPE_6__ {int der_name; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(hx509_context VAR_1, const hx509_name VAR_2, hx509_name *VAR_3)
{
    int VAR_4;

    *VAR_3 = FUNC_0(1, sizeof(**VAR_3));
    if (*VAR_3 == ((void*)0))
 return VAR_0;
    VAR_4 = FUNC_1(&VAR_2->der_name, &(*VAR_3)->der_name);
    if (VAR_4) {
 FUNC_2(*VAR_3);
 *VAR_3 = ((void*)0);
 return VAR_0;
    }
    return 0;
}
