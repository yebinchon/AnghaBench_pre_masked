
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_lock ;
typedef int hx509_context ;
struct TYPE_5__ {int certs; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int *,int *) ;

int
FUNC_3(hx509_context VAR_1, hx509_lock *VAR_2)
{
    hx509_lock VAR_3;
    int VAR_4;

    *VAR_2 = ((void*)0);

    VAR_3 = FUNC_0(1, sizeof(*VAR_3));
    if (VAR_3 == ((void*)0))
 return VAR_0;

    VAR_4 = FUNC_2(VAR_1,
      "MEMORY:locks-internal",
      0,
      ((void*)0),
      &VAR_3->certs);
    if (VAR_4) {
 FUNC_1(VAR_3);
 return VAR_4;
    }

    *VAR_2 = VAR_3;

    return 0;
}
