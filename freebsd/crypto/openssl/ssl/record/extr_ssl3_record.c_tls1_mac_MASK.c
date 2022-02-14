
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int header ;
struct TYPE_10__ {int mac_flags; int version; TYPE_1__* s3; int enc_read_ctx; int rlayer; int * read_hash; int * write_hash; } ;
struct TYPE_9__ {unsigned char type; int length; unsigned char* input; int* data; int orig_len; } ;
struct TYPE_8__ {int read_mac_secret_size; int read_mac_secret; } ;
typedef TYPE_2__ SSL3_RECORD ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *,unsigned char*,size_t*) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 unsigned char* FUNC_9 (int *) ;
 unsigned char* FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (unsigned char*,unsigned char*,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,unsigned char*) ;
 scalar_t__ FUNC_17 (int *,unsigned char*,size_t*,unsigned char*,unsigned char*,size_t,int ,int ,int ,int ) ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_3 ;

int FUNC_19(SSL *VAR_4, SSL3_RECORD *VAR_5, unsigned char *VAR_6, int VAR_7)
{
    unsigned char *VAR_8;
    EVP_MD_CTX *VAR_9;
    size_t VAR_10;
    int VAR_11;
    EVP_MD_CTX *VAR_12 = ((void*)0), *VAR_13;
    unsigned char VAR_14[13];
    int VAR_15 = (VAR_7 ? (VAR_4->mac_flags & VAR_2)
                      : (VAR_4->mac_flags & VAR_1));
    int VAR_16;

    if (VAR_7) {
        VAR_8 = FUNC_10(&VAR_4->rlayer);
        VAR_9 = VAR_4->write_hash;
    } else {
        VAR_8 = FUNC_9(&VAR_4->rlayer);
        VAR_9 = VAR_4->read_hash;
    }

    VAR_16 = FUNC_8(VAR_9);
    if (!FUNC_15(VAR_16 >= 0))
        return 0;
    VAR_10 = VAR_16;


    if (VAR_15) {
        VAR_13 = VAR_9;
    } else {
        VAR_12 = FUNC_7();
        if (VAR_12 == ((void*)0) || !FUNC_5(VAR_12, VAR_9)) {
            FUNC_6(VAR_12);
            return 0;
        }
        VAR_13 = VAR_12;
    }

    if (FUNC_11(VAR_4)) {
        unsigned char VAR_17[8], *VAR_18 = VAR_17;

        FUNC_16(VAR_7 ? FUNC_1(&VAR_4->rlayer) :
            FUNC_0(&VAR_4->rlayer), VAR_18);
        FUNC_14(VAR_18, &VAR_8[2], 6);

        FUNC_14(VAR_14, VAR_17, 8);
    } else
        FUNC_14(VAR_14, VAR_8, 8);

    VAR_14[8] = VAR_5->type;
    VAR_14[9] = (unsigned char)(VAR_4->version >> 8);
    VAR_14[10] = (unsigned char)(VAR_4->version);
    VAR_14[11] = (unsigned char)(VAR_5->length >> 8);
    VAR_14[12] = (unsigned char)(VAR_5->length & 0xff);

    if (!VAR_7 && !FUNC_12(VAR_4) &&
        FUNC_2(VAR_4->enc_read_ctx) == VAR_0 &&
        FUNC_18(VAR_13)) {






        if (FUNC_17(VAR_13,
                                   VAR_6, &VAR_10,
                                   VAR_14, VAR_5->input,
                                   VAR_5->length + VAR_10, VAR_5->orig_len,
                                   VAR_4->s3->read_mac_secret,
                                   VAR_4->s3->read_mac_secret_size, 0) <= 0) {
            FUNC_6(VAR_12);
            return 0;
        }
    } else {

        if (FUNC_4(VAR_13, VAR_14, sizeof(VAR_14)) <= 0
            || FUNC_4(VAR_13, VAR_5->input, VAR_5->length) <= 0
            || FUNC_3(VAR_13, VAR_6, &VAR_10) <= 0) {
            FUNC_6(VAR_12);
            return 0;
        }
    }

    FUNC_6(VAR_12);
    if (!FUNC_11(VAR_4)) {
        for (VAR_11 = 7; VAR_11 >= 0; VAR_11--) {
            ++VAR_8[VAR_11];
            if (VAR_8[VAR_11] != 0)
                break;
        }
    }
    return 1;
}
