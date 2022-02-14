
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* hx509_request ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_4__ {int len; int * val; } ;
struct TYPE_5__ {TYPE_1__ eku; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 void* FUNC_1 (int *,int) ;

int
FUNC_2(hx509_context VAR_1,
         hx509_request VAR_2,
         const heim_oid *VAR_3)
{
    void *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_1(VAR_2->eku.val, sizeof(VAR_2->eku.val[0]) * (VAR_2->eku.len + 1));
    if (VAR_4 == ((void*)0))
 return VAR_0;
    VAR_2->eku.val = VAR_4;

    VAR_5 = FUNC_0(VAR_3, &VAR_2->eku.val[VAR_2->eku.len]);
    if (VAR_5)
 return VAR_5;

    VAR_2->eku.len += 1;

    return 0;
}
