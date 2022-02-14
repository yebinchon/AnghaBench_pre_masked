
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; int nid; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_8 (int ) ;

EVP_PKEY *FUNC_9(uint16_t VAR_3)
{
    EVP_PKEY_CTX *VAR_4 = ((void*)0);
    EVP_PKEY *VAR_5 = ((void*)0);
    const TLS_GROUP_INFO *VAR_6 = FUNC_8(VAR_3);

    if (VAR_6 == ((void*)0))
        goto err;

    if ((VAR_6->flags & VAR_2) == VAR_1) {
        VAR_5 = FUNC_4();
        if (VAR_5 != ((void*)0) && FUNC_7(VAR_5, VAR_6->nid))
            return VAR_5;
        FUNC_3(VAR_5);
        return ((void*)0);
    }

    VAR_4 = FUNC_1(VAR_0, ((void*)0));
    if (VAR_4 == ((void*)0))
        goto err;
    if (FUNC_6(VAR_4) <= 0)
        goto err;
    if (FUNC_2(VAR_4, VAR_6->nid) <= 0)
        goto err;
    if (FUNC_5(VAR_4, &VAR_5) <= 0) {
        FUNC_3(VAR_5);
        VAR_5 = ((void*)0);
    }

 err:
    FUNC_0(VAR_4);
    return VAR_5;
}
