
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* hx509_lock ;
typedef int hx509_context ;
typedef int hx509_certs ;
struct TYPE_3__ {int certs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int *,int *) ;

void
FUNC_2(hx509_context VAR_0, hx509_lock VAR_1)
{
    hx509_certs VAR_2 = VAR_1->certs;
    int VAR_3;

    VAR_3 = FUNC_1(VAR_0,
      "MEMORY:locks-internal",
      0,
      ((void*)0),
      &VAR_1->certs);
    if (VAR_3 == 0)
 FUNC_0(&VAR_2);
    else
 VAR_1->certs = VAR_2;
}
