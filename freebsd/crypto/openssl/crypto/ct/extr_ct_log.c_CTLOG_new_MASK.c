
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * public_key; int log_id; int * name; } ;
typedef int EVP_PKEY ;
typedef TYPE_1__ CTLOG ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;

CTLOG *FUNC_5(EVP_PKEY *VAR_2, const char *VAR_3)
{
    CTLOG *VAR_4 = FUNC_3(sizeof(*VAR_4));

    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return ((void*)0);
    }

    VAR_4->name = FUNC_2(VAR_3);
    if (VAR_4->name == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        goto err;
    }

    if (FUNC_4(VAR_2, VAR_4->log_id) != 1)
        goto err;

    VAR_4->public_key = VAR_2;
    return VAR_4;
err:
    FUNC_0(VAR_4);
    return ((void*)0);
}
