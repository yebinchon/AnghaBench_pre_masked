
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* hx509_crl ;
typedef int hx509_context ;
struct TYPE_5__ {scalar_t__ expire; int revoked; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int *,int *) ;
 int FUNC_3 (int ,int ,int,char*) ;

int
FUNC_4(hx509_context VAR_1, hx509_crl *VAR_2)
{
    int VAR_3;

    *VAR_2 = FUNC_0(1, sizeof(**VAR_2));
    if (*VAR_2 == ((void*)0)) {
 FUNC_3(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }

    VAR_3 = FUNC_2(VAR_1, "MEMORY:crl", 0, ((void*)0), &(*VAR_2)->revoked);
    if (VAR_3) {
 FUNC_1(*VAR_2);
 *VAR_2 = ((void*)0);
 return VAR_3;
    }
    (*VAR_2)->expire = 0;
    return VAR_3;
}
