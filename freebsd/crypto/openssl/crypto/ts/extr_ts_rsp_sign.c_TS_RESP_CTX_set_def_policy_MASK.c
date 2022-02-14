
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * default_policy; } ;
typedef TYPE_1__ TS_RESP_CTX ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(TS_RESP_CTX *VAR_2, const ASN1_OBJECT *VAR_3)
{
    FUNC_0(VAR_2->default_policy);
    if ((VAR_2->default_policy = FUNC_1(VAR_3)) == ((void*)0))
        goto err;
    return 1;
 err:
    FUNC_2(VAR_1, VAR_0);
    return 0;
}
