
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t keylen; int cipher; int * ctx_df; int * ctx; } ;
struct TYPE_5__ {TYPE_2__ ctr; } ;
struct TYPE_7__ {int type; size_t strength; size_t seedlen; int flags; size_t min_entropylen; int max_entropylen; int min_noncelen; int max_perslen; int max_adinlen; int max_request; void* max_noncelen; int * meth; TYPE_1__ data; } ;
typedef TYPE_2__ RAND_DRBG_CTR ;
typedef TYPE_3__ RAND_DRBG ;


 void* VAR_0 ;
 void* FUNC_0 () ;
 int FUNC_1 (int *,int ,int *,unsigned char const*,int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;



 int VAR_1 ;
 int VAR_2 ;

int FUNC_5(RAND_DRBG *VAR_3)
{
    RAND_DRBG_CTR *VAR_4 = &VAR_3->data.ctr;
    size_t VAR_5;

    switch (VAR_3->type) {
    default:

        return 0;
    case 130:
        VAR_5 = 16;
        VAR_4->cipher = FUNC_2();
        break;
    case 129:
        VAR_5 = 24;
        VAR_4->cipher = FUNC_3();
        break;
    case 128:
        VAR_5 = 32;
        VAR_4->cipher = FUNC_4();
        break;
    }

    VAR_3->meth = &VAR_2;

    VAR_4->keylen = VAR_5;
    if (VAR_4->ctx == ((void*)0))
        VAR_4->ctx = FUNC_0();
    if (VAR_4->ctx == ((void*)0))
        return 0;
    VAR_3->strength = VAR_5 * 8;
    VAR_3->seedlen = VAR_5 + 16;

    if ((VAR_3->flags & VAR_1) == 0) {

        static const unsigned char VAR_6[32] = {
            0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
            0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f,
            0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
            0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
        };

        if (VAR_4->ctx_df == ((void*)0))
            VAR_4->ctx_df = FUNC_0();
        if (VAR_4->ctx_df == ((void*)0))
            return 0;

        if (!FUNC_1(VAR_4->ctx_df, VAR_4->cipher, ((void*)0), VAR_6, ((void*)0), 1))
            return 0;

        VAR_3->min_entropylen = VAR_4->keylen;
        VAR_3->max_entropylen = VAR_0;
        VAR_3->min_noncelen = VAR_3->min_entropylen / 2;
        VAR_3->max_noncelen = VAR_0;
        VAR_3->max_perslen = VAR_0;
        VAR_3->max_adinlen = VAR_0;
    } else {
        VAR_3->min_entropylen = VAR_3->seedlen;
        VAR_3->max_entropylen = VAR_3->seedlen;

        VAR_3->min_noncelen = 0;
        VAR_3->max_noncelen = 0;
        VAR_3->max_perslen = VAR_3->seedlen;
        VAR_3->max_adinlen = VAR_3->seedlen;
    }

    VAR_3->max_request = 1 << 16;

    return 1;
}
