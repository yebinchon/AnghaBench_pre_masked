
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * policies; } ;
typedef TYPE_1__ TS_RESP_CTX ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;

int FUNC_5(TS_RESP_CTX *VAR_2, const ASN1_OBJECT *VAR_3)
{
    ASN1_OBJECT *VAR_4 = ((void*)0);

    if (VAR_2->policies == ((void*)0)
        && (VAR_2->policies = FUNC_3()) == ((void*)0))
        goto err;
    if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
        goto err;
    if (!FUNC_4(VAR_2->policies, VAR_4))
        goto err;

    return 1;
 err:
    FUNC_2(VAR_1, VAR_0);
    FUNC_0(VAR_4);
    return 0;
}
