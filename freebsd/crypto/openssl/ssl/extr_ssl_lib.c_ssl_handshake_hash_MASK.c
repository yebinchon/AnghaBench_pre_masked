
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* s3; } ;
struct TYPE_5__ {int * handshake_dgst; } ;
typedef TYPE_2__ SSL ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;

int FUNC_6(SSL *VAR_3, unsigned char *VAR_4, size_t VAR_5,
                       size_t *VAR_6)
{
    EVP_MD_CTX *VAR_7 = ((void*)0);
    EVP_MD_CTX *VAR_8 = VAR_3->s3->handshake_dgst;
    int VAR_9 = FUNC_4(VAR_8);
    int VAR_10 = 0;

    if (VAR_9 < 0 || (size_t)VAR_9 > VAR_5) {
        FUNC_5(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        goto err;
    }

    VAR_7 = FUNC_3();
    if (VAR_7 == ((void*)0))
        goto err;

    if (!FUNC_1(VAR_7, VAR_8)
        || FUNC_0(VAR_7, VAR_4, ((void*)0)) <= 0) {
        FUNC_5(VAR_3, VAR_1, VAR_2,
                 VAR_0);
        goto err;
    }

    *VAR_6 = VAR_9;

    VAR_10 = 1;
 err:
    FUNC_2(VAR_7);
    return VAR_10;
}
