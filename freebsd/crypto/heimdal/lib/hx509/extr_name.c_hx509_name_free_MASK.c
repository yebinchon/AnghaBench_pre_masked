
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_name ;
struct TYPE_5__ {int der_name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(hx509_name *VAR_0)
{
    FUNC_1(&(*VAR_0)->der_name);
    FUNC_2(*VAR_0, 0, sizeof(**VAR_0));
    FUNC_0(*VAR_0);
    *VAR_0 = ((void*)0);
}
