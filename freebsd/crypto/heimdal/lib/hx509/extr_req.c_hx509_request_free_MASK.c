
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_request ;
struct TYPE_5__ {int san; int eku; int key; scalar_t__ name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void
FUNC_6(hx509_request *VAR_0)
{
    if ((*VAR_0)->name)
 FUNC_4(&(*VAR_0)->name);
    FUNC_3(&(*VAR_0)->key);
    FUNC_1(&(*VAR_0)->eku);
    FUNC_2(&(*VAR_0)->san);
    FUNC_5(*VAR_0, 0, sizeof(**VAR_0));
    FUNC_0(*VAR_0);
    *VAR_0 = ((void*)0);
}
