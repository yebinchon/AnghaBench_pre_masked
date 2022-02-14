
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ server; TYPE_6__* s3; TYPE_4__* session; TYPE_3__* method; } ;
struct TYPE_15__ {size_t psklen; unsigned char* psk; int * pms; TYPE_1__* new_cipher; } ;
struct TYPE_16__ {TYPE_5__ tmp; } ;
struct TYPE_14__ {int master_key_length; int master_key; } ;
struct TYPE_13__ {TYPE_2__* ssl3_enc; } ;
struct TYPE_12__ {int (* generate_master_secret ) (TYPE_7__*,int ,unsigned char*,size_t,int *) ;} ;
struct TYPE_11__ {unsigned long algorithm_mkey; } ;
typedef TYPE_7__ SSL ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (size_t) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*,int ,size_t) ;
 int FUNC_5 (size_t,unsigned char*) ;
 int FUNC_6 (TYPE_7__*,int ,unsigned char*,size_t,int *) ;
 int FUNC_7 (TYPE_7__*,int ,unsigned char*,size_t,int *) ;

int FUNC_8(SSL *VAR_2, unsigned char *VAR_3, size_t VAR_4,
                               int VAR_5)
{
    unsigned long VAR_6 = VAR_2->s3->tmp.new_cipher->algorithm_mkey;
    int VAR_7 = 0;

    if (VAR_6 & VAR_0) {

        unsigned char *VAR_8, *VAR_9;
        size_t VAR_10 = VAR_2->s3->tmp.psklen;
        size_t VAR_11;




        if (VAR_6 & VAR_1)
            VAR_4 = VAR_10;

        VAR_11 = 4 + VAR_4 + VAR_10;
        VAR_8 = FUNC_2(VAR_11);
        if (VAR_8 == ((void*)0))
            goto err;
        VAR_9 = VAR_8;
        FUNC_5(VAR_4, VAR_9);
        if (VAR_6 & VAR_1)
            FUNC_4(VAR_9, 0, VAR_4);
        else
            FUNC_3(VAR_9, VAR_3, VAR_4);
        VAR_9 += VAR_4;
        FUNC_5(VAR_10, VAR_9);
        FUNC_3(VAR_9, VAR_2->s3->tmp.psk, VAR_10);

        FUNC_1(VAR_2->s3->tmp.psk, VAR_10);
        VAR_2->s3->tmp.psk = ((void*)0);
        if (!VAR_2->method->ssl3_enc->generate_master_secret(VAR_2,
                    VAR_2->session->master_key,VAR_8, VAR_11,
                    &VAR_2->session->master_key_length)) {
            FUNC_1(VAR_8, VAR_11);

            goto err;
        }
        FUNC_1(VAR_8, VAR_11);




    } else {
        if (!VAR_2->method->ssl3_enc->generate_master_secret(VAR_2,
                VAR_2->session->master_key, VAR_3, VAR_4,
                &VAR_2->session->master_key_length)) {

            goto err;
        }
    }

    VAR_7 = 1;
 err:
    if (VAR_3) {
        if (VAR_5)
            FUNC_1(VAR_3, VAR_4);
        else
            FUNC_0(VAR_3, VAR_4);
    }
    if (VAR_2->server == 0)
        VAR_2->s3->tmp.pms = ((void*)0);
    return VAR_7;
}
