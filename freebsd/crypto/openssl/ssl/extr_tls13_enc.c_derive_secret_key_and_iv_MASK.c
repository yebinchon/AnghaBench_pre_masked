
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int key ;
struct TYPE_17__ {TYPE_5__* s3; TYPE_2__* session; } ;
struct TYPE_15__ {TYPE_3__* new_cipher; } ;
struct TYPE_16__ {TYPE_4__ tmp; } ;
struct TYPE_14__ {int algorithm_enc; } ;
struct TYPE_13__ {TYPE_1__* cipher; } ;
struct TYPE_12__ {int algorithm_enc; } ;
typedef TYPE_6__ SSL ;
typedef int EVP_MD ;
typedef int EVP_CIPHER_CTX ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int ,size_t,int *) ;
 size_t FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int const*,int *,unsigned char*,int *,int) ;
 int VAR_7 ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (unsigned char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_6__*,int const*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_10 (TYPE_6__*,int const*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_11 (TYPE_6__*,int const*,unsigned char const*,unsigned char const*,size_t,unsigned char const*,size_t,unsigned char*,size_t,int) ;

__attribute__((used)) static int FUNC_12(SSL *VAR_12, int VAR_13, const EVP_MD *VAR_14,
                                    const EVP_CIPHER *VAR_15,
                                    const unsigned char *VAR_16,
                                    const unsigned char *VAR_17,
                                    const unsigned char *VAR_18,
                                    size_t VAR_19, unsigned char *VAR_20,
                                    unsigned char *VAR_21, EVP_CIPHER_CTX *VAR_22)
{
    unsigned char VAR_23[VAR_7];
    size_t VAR_24, VAR_25, VAR_26;
    int VAR_27 = FUNC_5(VAR_14);
    size_t VAR_28;


    if (!FUNC_8(VAR_27 >= 0)) {
        FUNC_7(VAR_12, VAR_8, VAR_11,
                 VAR_0);
        goto err;
    }
    VAR_28 = (size_t)VAR_27;

    if (!FUNC_11(VAR_12, VAR_14, VAR_16, VAR_18, VAR_19, VAR_17, VAR_28,
                           VAR_20, VAR_28, 1)) {

        goto err;
    }


    VAR_25 = FUNC_2(VAR_15);
    if (FUNC_3(VAR_15) == VAR_4) {
        uint32_t VAR_29;

        VAR_24 = VAR_2;
        if (VAR_12->s3->tmp.new_cipher == ((void*)0)) {

            VAR_29 = VAR_12->session->cipher->algorithm_enc;
        } else {
            VAR_29 = VAR_12->s3->tmp.new_cipher->algorithm_enc;
        }
        if (VAR_29 & (VAR_9 | VAR_10))
            VAR_26 = VAR_1;
         else
            VAR_26 = VAR_3;
    } else {
        VAR_24 = FUNC_1(VAR_15);
        VAR_26 = 0;
    }

    if (!FUNC_10(VAR_12, VAR_14, VAR_20, VAR_23, VAR_25)
            || !FUNC_9(VAR_12, VAR_14, VAR_20, VAR_21, VAR_24)) {

        goto err;
    }

    if (FUNC_4(VAR_22, VAR_15, ((void*)0), ((void*)0), ((void*)0), VAR_13) <= 0
        || !FUNC_0(VAR_22, VAR_5, VAR_24, ((void*)0))
        || (VAR_26 != 0 && !FUNC_0(VAR_22, VAR_6,
                                                VAR_26, ((void*)0)))
        || FUNC_4(VAR_22, ((void*)0), ((void*)0), VAR_23, ((void*)0), -1) <= 0) {
        FUNC_7(VAR_12, VAR_8, VAR_11,
                 VAR_0);
        goto err;
    }

    return 1;
 err:
    FUNC_6(VAR_23, sizeof(VAR_23));
    return 0;
}
