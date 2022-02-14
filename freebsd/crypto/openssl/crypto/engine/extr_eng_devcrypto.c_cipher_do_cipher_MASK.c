
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct crypt_op {size_t len; scalar_t__ flags; int op; void* iv; void* dst; void* src; int ses; } ;
struct TYPE_2__ {int ses; } ;
struct cipher_ctx {int mode; size_t blocksize; int op; TYPE_1__ sess; } ;
typedef int cryp ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 unsigned char* FUNC_3 (int *) ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int ,int ,struct crypt_op*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_8 (struct crypt_op*,int ,int) ;

__attribute__((used)) static int FUNC_9(EVP_CIPHER_CTX *VAR_6, unsigned char *VAR_7,
                            const unsigned char *VAR_8, size_t VAR_9)
{
    struct cipher_ctx *VAR_10 =
        (struct cipher_ctx *)FUNC_1(VAR_6);
    struct crypt_op VAR_11;
    unsigned char *VAR_12 = FUNC_3(VAR_6);

    unsigned char VAR_13[VAR_2];
    const unsigned char *VAR_14;
    size_t VAR_15, VAR_16;


    FUNC_8(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.ses = VAR_10->sess.ses;
    VAR_11.len = VAR_9;
    VAR_11.src = (void *)VAR_8;
    VAR_11.dst = (void *)VAR_7;
    VAR_11.iv = (void *)VAR_12;
    VAR_11.op = VAR_10->op;

    VAR_11.flags = 0;

    VAR_16 = FUNC_2(VAR_6);
    if (VAR_16 > 0)
        switch (VAR_10->mode) {
        case 129:
            FUNC_5(VAR_9 >= VAR_16);
            if (!FUNC_0(VAR_6)) {
                VAR_14 = VAR_8 + VAR_9 - VAR_16;
                FUNC_7(VAR_13, VAR_14, VAR_16);
            }
            break;

        case 128:
            break;

        default:
            return 0;
        }




    if (FUNC_6(VAR_4, VAR_0, &VAR_11) < 0) {
        FUNC_4(VAR_3, VAR_5);
        return 0;
    }


    if (VAR_16 > 0)
        switch (VAR_10->mode) {
        case 129:
            FUNC_5(VAR_9 >= VAR_16);
            if (FUNC_0(VAR_6))
                VAR_14 = VAR_7 + VAR_9 - VAR_16;
            else
                VAR_14 = VAR_13;

            FUNC_7(VAR_12, VAR_14, VAR_16);
            break;

        case 128:
            VAR_15 = (VAR_9 + VAR_10->blocksize - 1)
                      / VAR_10->blocksize;
            do {
                VAR_16--;
                VAR_15 += VAR_12[VAR_16];
                VAR_12[VAR_16] = (uint8_t) VAR_15;
                VAR_15 >>= 8;
            } while (VAR_16);
            break;

        default:
            return 0;
        }


    return 1;
}
