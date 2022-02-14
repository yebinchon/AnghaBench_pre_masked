
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {size_t master_key_length; unsigned char* master_key; TYPE_4__* cipher; } ;
struct TYPE_12__ {int use_etm; } ;
struct TYPE_17__ {int options; TYPE_5__* s3; TYPE_9__* session; TYPE_3__* method; TYPE_1__ ext; } ;
struct TYPE_13__ {size_t key_block_length; int new_mac_pkey_type; size_t new_mac_secret_size; unsigned char* key_block; int const* new_hash; int const* new_sym_enc; } ;
struct TYPE_16__ {unsigned char* client_random; unsigned char* server_random; int need_empty_fragments; TYPE_2__ tmp; } ;
struct TYPE_15__ {scalar_t__ algorithm_enc; } ;
struct TYPE_14__ {scalar_t__ version; } ;
typedef int SSL_COMP ;
typedef TYPE_6__ SSL ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;
 int VAR_1 ;
 unsigned char* FUNC_2 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_6__*,int ,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_9__*,int const**,int const**,int*,size_t*,int **,int ) ;
 int FUNC_7 (TYPE_6__*,unsigned char*,size_t) ;

int FUNC_8(SSL *VAR_10)
{
    unsigned char *VAR_11;
    const EVP_CIPHER *VAR_12;
    const EVP_MD *VAR_13;
    SSL_COMP *VAR_14;
    int VAR_15 = VAR_1;
    size_t VAR_16, VAR_17 = 0;
    int VAR_18 = 0;

    if (VAR_10->s3->tmp.key_block_length != 0)
        return 1;

    if (!FUNC_6(VAR_10->session, &VAR_12, &VAR_13, &VAR_15, &VAR_17,
                            &VAR_14, VAR_10->ext.use_etm)) {
        FUNC_3(VAR_10, VAR_3, VAR_4,
                 VAR_7);
        return 0;
    }

    VAR_10->s3->tmp.new_sym_enc = VAR_12;
    VAR_10->s3->tmp.new_hash = VAR_13;
    VAR_10->s3->tmp.new_mac_pkey_type = VAR_15;
    VAR_10->s3->tmp.new_mac_secret_size = VAR_17;
    VAR_16 = FUNC_1(VAR_12) + VAR_17 + FUNC_0(VAR_12);
    VAR_16 *= 2;

    FUNC_5(VAR_10);

    if ((VAR_11 = FUNC_2(VAR_16)) == ((void*)0)) {
        FUNC_3(VAR_10, VAR_3, VAR_4,
                 VAR_0);
        goto err;
    }

    VAR_10->s3->tmp.key_block_length = VAR_16;
    VAR_10->s3->tmp.key_block = VAR_11;
    if (!FUNC_7(VAR_10, VAR_11, VAR_16)) {

        goto err;
    }
    if (!(VAR_10->options & VAR_5)
        && VAR_10->method->version <= VAR_9) {




        VAR_10->s3->need_empty_fragments = 1;

        if (VAR_10->session->cipher != ((void*)0)) {
            if (VAR_10->session->cipher->algorithm_enc == VAR_8)
                VAR_10->s3->need_empty_fragments = 0;


            if (VAR_10->session->cipher->algorithm_enc == VAR_6)
                VAR_10->s3->need_empty_fragments = 0;

        }
    }

    VAR_18 = 1;
 err:
    return VAR_18;
}
