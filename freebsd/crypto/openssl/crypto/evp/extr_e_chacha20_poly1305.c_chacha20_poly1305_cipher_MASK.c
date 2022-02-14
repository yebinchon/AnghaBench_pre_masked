
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int aad; int text; } ;
struct TYPE_12__ {int d; } ;
struct TYPE_13__ {int* counter; scalar_t__ partial_len; int buf; TYPE_1__ key; } ;
struct TYPE_16__ {size_t tls_payload_length; int mac_inited; unsigned char* tls_aad; int aad; unsigned char* tag; size_t tag_len; TYPE_3__ len; TYPE_2__ key; } ;
struct TYPE_15__ {scalar_t__ encrypt; } ;
typedef TYPE_4__ EVP_CIPHER_CTX ;
typedef TYPE_5__ EVP_CHACHA_AEAD_CTX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (int ,unsigned char*,int ,int ,int*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,unsigned char const*,size_t) ;
 TYPE_5__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_8 (TYPE_4__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_9 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_10 (unsigned char*,int ,size_t) ;
 unsigned char* VAR_4 ;

__attribute__((used)) static int FUNC_11(EVP_CIPHER_CTX *VAR_5, unsigned char *VAR_6,
                                    const unsigned char *VAR_7, size_t VAR_8)
{
    EVP_CHACHA_AEAD_CTX *VAR_9 = FUNC_6(VAR_5);
    size_t VAR_10, VAR_11 = VAR_9->tls_payload_length;

    if (!VAR_9->mac_inited) {

        if (VAR_11 != VAR_2 && VAR_6 != ((void*)0))
            return FUNC_7(VAR_5, VAR_6, VAR_7, VAR_8);

        VAR_9->key.counter[0] = 0;
        FUNC_1(VAR_9->key.buf, VAR_4, VAR_0,
                       VAR_9->key.key.d, VAR_9->key.counter);
        FUNC_4(FUNC_2(VAR_9), VAR_9->key.buf);
        VAR_9->key.counter[0] = 1;
        VAR_9->key.partial_len = 0;
        VAR_9->len.aad = VAR_9->len.text = 0;
        VAR_9->mac_inited = 1;
        if (VAR_11 != VAR_2) {
            FUNC_5(FUNC_2(VAR_9), VAR_9->tls_aad,
                            VAR_1);
            VAR_9->len.aad = VAR_1;
            VAR_9->aad = 1;
        }
    }

    if (VAR_7) {
        if (VAR_6 == ((void*)0)) {
            FUNC_5(FUNC_2(VAR_9), VAR_7, VAR_8);
            VAR_9->len.aad += VAR_8;
            VAR_9->aad = 1;
            return VAR_8;
        } else {
            if (VAR_9->aad) {
                if ((VAR_10 = (size_t)VAR_9->len.aad % VAR_3))
                    FUNC_5(FUNC_2(VAR_9), VAR_4,
                                    VAR_3 - VAR_10);
                VAR_9->aad = 0;
            }

            VAR_9->tls_payload_length = VAR_2;
            if (VAR_11 == VAR_2)
                VAR_11 = VAR_8;
            else if (VAR_8 != VAR_11 + VAR_3)
                return -1;

            if (VAR_5->encrypt) {
                FUNC_8(VAR_5, VAR_6, VAR_7, VAR_11);
                FUNC_5(FUNC_2(VAR_9), VAR_6, VAR_11);
                VAR_7 += VAR_11;
                VAR_6 += VAR_11;
                VAR_9->len.text += VAR_11;
            } else {
                FUNC_5(FUNC_2(VAR_9), VAR_7, VAR_11);
                FUNC_8(VAR_5, VAR_6, VAR_7, VAR_11);
                VAR_7 += VAR_11;
                VAR_6 += VAR_11;
                VAR_9->len.text += VAR_11;
            }
        }
    }
    if (VAR_7 == ((void*)0)
        || VAR_11 != VAR_8) {
        const union {
            long one;
            char little;
        } VAR_12 = { 1 };
        unsigned char VAR_13[VAR_3];

        if (VAR_9->aad) {
            if ((VAR_10 = (size_t)VAR_9->len.aad % VAR_3))
                FUNC_5(FUNC_2(VAR_9), VAR_4,
                                VAR_3 - VAR_10);
            VAR_9->aad = 0;
        }

        if ((VAR_10 = (size_t)VAR_9->len.text % VAR_3))
            FUNC_5(FUNC_2(VAR_9), VAR_4,
                            VAR_3 - VAR_10);

        if (VAR_12.little) {
            FUNC_5(FUNC_2(VAR_9),
                            (unsigned char *)&VAR_9->len, VAR_3);
        } else {
            VAR_13[0] = (unsigned char)(VAR_9->len.aad);
            VAR_13[1] = (unsigned char)(VAR_9->len.aad>>8);
            VAR_13[2] = (unsigned char)(VAR_9->len.aad>>16);
            VAR_13[3] = (unsigned char)(VAR_9->len.aad>>24);
            VAR_13[4] = (unsigned char)(VAR_9->len.aad>>32);
            VAR_13[5] = (unsigned char)(VAR_9->len.aad>>40);
            VAR_13[6] = (unsigned char)(VAR_9->len.aad>>48);
            VAR_13[7] = (unsigned char)(VAR_9->len.aad>>56);

            VAR_13[8] = (unsigned char)(VAR_9->len.text);
            VAR_13[9] = (unsigned char)(VAR_9->len.text>>8);
            VAR_13[10] = (unsigned char)(VAR_9->len.text>>16);
            VAR_13[11] = (unsigned char)(VAR_9->len.text>>24);
            VAR_13[12] = (unsigned char)(VAR_9->len.text>>32);
            VAR_13[13] = (unsigned char)(VAR_9->len.text>>40);
            VAR_13[14] = (unsigned char)(VAR_9->len.text>>48);
            VAR_13[15] = (unsigned char)(VAR_9->len.text>>56);

            FUNC_5(FUNC_2(VAR_9), VAR_13, VAR_3);
        }
        FUNC_3(FUNC_2(VAR_9), VAR_5->encrypt ? VAR_9->tag
                                                        : VAR_13);
        VAR_9->mac_inited = 0;

        if (VAR_7 != ((void*)0) && VAR_8 != VAR_11) {
            if (VAR_5->encrypt) {
                FUNC_9(VAR_6, VAR_9->tag, VAR_3);
            } else {
                if (FUNC_0(VAR_13, VAR_7, VAR_3)) {
                    FUNC_10(VAR_6 - VAR_11, 0, VAR_11);
                    return -1;
                }
            }
        }
        else if (!VAR_5->encrypt) {
            if (FUNC_0(VAR_13, VAR_9->tag, VAR_9->tag_len))
                return -1;
        }
    }
    return VAR_8;
}
