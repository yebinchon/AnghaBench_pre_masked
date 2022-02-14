
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cipher_data_st {int flags; int blocksize; int keylen; int devcryptoid; } ;
struct TYPE_3__ {scalar_t__ ses; void* key; int keylen; int cipher; } ;
struct cipher_ctx {int mode; TYPE_1__ sess; int blocksize; int op; } ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 struct cipher_data_st* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(EVP_CIPHER_CTX *VAR_7, const unsigned char *VAR_8,
                       const unsigned char *VAR_9, int VAR_10)
{
    struct cipher_ctx *VAR_11 =
        (struct cipher_ctx *)FUNC_0(VAR_7);
    const struct cipher_data_st *VAR_12 =
        FUNC_4(FUNC_1(VAR_7));


    if (VAR_11->sess.ses != 0 &&
        FUNC_3(&VAR_11->sess) == 0)
        return 0;

    VAR_11->sess.cipher = VAR_12->devcryptoid;
    VAR_11->sess.keylen = VAR_12->keylen;
    VAR_11->sess.key = (void *)VAR_8;
    VAR_11->op = VAR_10 ? VAR_2 : VAR_1;
    VAR_11->mode = VAR_12->flags & VAR_3;
    VAR_11->blocksize = VAR_12->blocksize;
    if (FUNC_5(VAR_5, VAR_0, &VAR_11->sess) < 0) {
        FUNC_2(VAR_4, VAR_6);
        return 0;
    }

    return 1;
}
