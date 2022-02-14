
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_crl ;
typedef int hx509_context ;
struct TYPE_5__ {int revoked; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void
FUNC_3(hx509_context VAR_0, hx509_crl *VAR_1)
{
    if (*VAR_1 == ((void*)0))
 return;
    FUNC_1(&(*VAR_1)->revoked);
    FUNC_2(*VAR_1, 0, sizeof(**VAR_1));
    FUNC_0(*VAR_1);
    *VAR_1 = ((void*)0);
}
