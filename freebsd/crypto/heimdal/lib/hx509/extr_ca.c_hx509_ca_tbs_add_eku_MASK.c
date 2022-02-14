
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_ca_tbs ;
typedef int heim_oid ;
struct TYPE_4__ {unsigned int len; int * val; } ;
struct TYPE_5__ {TYPE_1__ eku; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 int FUNC_2 (int ,int ,int,char*) ;
 void* FUNC_3 (int *,int) ;

int
FUNC_4(hx509_context VAR_1,
       hx509_ca_tbs VAR_2,
       const heim_oid *VAR_3)
{
    void *VAR_4;
    int VAR_5;
    unsigned VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_2->eku.len; VAR_6++) {
 if (FUNC_1(VAR_3, &VAR_2->eku.val[VAR_6]) == 0)
     return 0;
    }

    VAR_4 = FUNC_3(VAR_2->eku.val, sizeof(VAR_2->eku.val[0]) * (VAR_2->eku.len + 1));
    if (VAR_4 == ((void*)0)) {
 FUNC_2(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_2->eku.val = VAR_4;
    VAR_5 = FUNC_0(VAR_3, &VAR_2->eku.val[VAR_2->eku.len]);
    if (VAR_5) {
 FUNC_2(VAR_1, 0, VAR_5, "out of memory");
 return VAR_5;
    }
    VAR_2->eku.len += 1;
    return 0;
}
