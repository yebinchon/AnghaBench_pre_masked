
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; int nid; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_7 (int) ;

EVP_PKEY *FUNC_8(SSL *VAR_8, uint16_t VAR_9)
{
    EVP_PKEY_CTX *VAR_10 = ((void*)0);
    EVP_PKEY *VAR_11 = ((void*)0);
    const TLS_GROUP_INFO *VAR_12 = FUNC_7(VAR_9);
    uint16_t VAR_13;

    if (VAR_12 == ((void*)0)) {
        FUNC_6(VAR_8, VAR_4, VAR_5,
                 VAR_1);
        goto err;
    }
    VAR_13 = VAR_12->flags & VAR_7;
    if (VAR_13 == VAR_6)
        VAR_10 = FUNC_1(VAR_12->nid, ((void*)0));
    else
        VAR_10 = FUNC_1(VAR_3, ((void*)0));
    if (VAR_10 == ((void*)0)) {
        FUNC_6(VAR_8, VAR_4, VAR_5,
                 VAR_2);
        goto err;
    }
    if (FUNC_5(VAR_10) <= 0) {
        FUNC_6(VAR_8, VAR_4, VAR_5,
                 VAR_0);
        goto err;
    }
    if (VAR_13 != VAR_6
            && FUNC_2(VAR_10, VAR_12->nid) <= 0) {
        FUNC_6(VAR_8, VAR_4, VAR_5,
                 VAR_0);
        goto err;
    }
    if (FUNC_4(VAR_10, &VAR_11) <= 0) {
        FUNC_6(VAR_8, VAR_4, VAR_5,
                 VAR_0);
        FUNC_3(VAR_11);
        VAR_11 = ((void*)0);
    }

 err:
    FUNC_0(VAR_10);
    return VAR_11;
}
