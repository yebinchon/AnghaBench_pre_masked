
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* s3; int early_secret; int hit; } ;
struct TYPE_11__ {unsigned char* pms; size_t pmslen; } ;
struct TYPE_12__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (unsigned char*,size_t) ;
 unsigned char* FUNC_6 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*,unsigned char*,size_t,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_12 (TYPE_3__*,int ,int *,int *,int ,unsigned char*) ;

int FUNC_13(SSL *VAR_4, EVP_PKEY *VAR_5, EVP_PKEY *VAR_6, int VAR_7)
{
    int VAR_8 = 0;
    unsigned char *VAR_9 = ((void*)0);
    size_t VAR_10 = 0;
    EVP_PKEY_CTX *VAR_11;

    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        FUNC_8(VAR_4, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }

    VAR_11 = FUNC_1(VAR_5, ((void*)0));

    if (FUNC_3(VAR_11) <= 0
        || FUNC_4(VAR_11, VAR_6) <= 0
        || FUNC_2(VAR_11, ((void*)0), &VAR_10) <= 0) {
        FUNC_8(VAR_4, VAR_2, VAR_3,
                 VAR_0);
        goto err;
    }

    VAR_9 = FUNC_6(VAR_10);
    if (VAR_9 == ((void*)0)) {
        FUNC_8(VAR_4, VAR_2, VAR_3,
                 VAR_1);
        goto err;
    }

    if (FUNC_2(VAR_11, VAR_9, &VAR_10) <= 0) {
        FUNC_8(VAR_4, VAR_2, VAR_3,
                 VAR_0);
        goto err;
    }

    if (VAR_7) {

        if (FUNC_7(VAR_4)) {




            if (!VAR_4->hit)
                VAR_8 = FUNC_12(VAR_4, FUNC_10(VAR_4), ((void*)0), ((void*)0),
                                           0,
                                           (unsigned char *)&VAR_4->early_secret);
            else
                VAR_8 = 1;

            VAR_8 = VAR_8 && FUNC_11(VAR_4, VAR_9, VAR_10);
        } else {
            VAR_8 = FUNC_9(VAR_4, VAR_9, VAR_10, 0);
        }
    } else {

        VAR_4->s3->tmp.pms = VAR_9;
        VAR_4->s3->tmp.pmslen = VAR_10;
        VAR_9 = ((void*)0);
        VAR_8 = 1;
    }

 err:
    FUNC_5(VAR_9, VAR_10);
    FUNC_0(VAR_11);
    return VAR_8;
}
