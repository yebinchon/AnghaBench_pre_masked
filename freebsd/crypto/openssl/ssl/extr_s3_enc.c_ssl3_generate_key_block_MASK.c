
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int smd ;
typedef int buf ;
struct TYPE_8__ {TYPE_2__* session; TYPE_1__* s3; } ;
struct TYPE_7__ {unsigned char* master_key; int master_key_length; } ;
struct TYPE_6__ {unsigned char* server_random; unsigned char* client_random; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (unsigned char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_10 (unsigned char*,unsigned char*,int) ;
 unsigned char* VAR_8 ;

__attribute__((used)) static int FUNC_11(SSL *VAR_9, unsigned char *VAR_10, int VAR_11)
{
    EVP_MD_CTX *VAR_12;
    EVP_MD_CTX *VAR_13;
    unsigned char VAR_14[16], VAR_15[VAR_4];
    unsigned char VAR_16 = 'A';
    unsigned int VAR_17, VAR_18, VAR_19;
    int VAR_20 = 0;




    VAR_19 = 0;
    VAR_12 = FUNC_4();
    VAR_13 = FUNC_4();
    if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0)) {
        FUNC_9(VAR_9, VAR_6, VAR_7,
                 VAR_1);
        goto err;
    }
    FUNC_5(VAR_12, VAR_2);
    for (VAR_17 = 0; (int)VAR_17 < VAR_11; VAR_17 += VAR_3) {
        VAR_19++;
        if (VAR_19 > sizeof(VAR_14)) {

            FUNC_9(VAR_9, VAR_6, VAR_7,
                     VAR_0);
            goto err;
        }

        for (VAR_18 = 0; VAR_18 < VAR_19; VAR_18++)
            VAR_14[VAR_18] = VAR_16;
        VAR_16++;
        if (!FUNC_1(VAR_13, FUNC_7(), ((void*)0))
            || !FUNC_2(VAR_13, VAR_14, VAR_19)
            || !FUNC_2(VAR_13, VAR_9->session->master_key,
                                 VAR_9->session->master_key_length)
            || !FUNC_2(VAR_13, VAR_9->s3->server_random, VAR_5)
            || !FUNC_2(VAR_13, VAR_9->s3->client_random, VAR_5)
            || !FUNC_0(VAR_13, VAR_15, ((void*)0))
            || !FUNC_1(VAR_12, FUNC_6(), ((void*)0))
            || !FUNC_2(VAR_12, VAR_9->session->master_key,
                                 VAR_9->session->master_key_length)
            || !FUNC_2(VAR_12, VAR_15, VAR_4)) {
            FUNC_9(VAR_9, VAR_6, VAR_7,
                     VAR_0);
            goto err;
        }
        if ((int)(VAR_17 + VAR_3) > VAR_11) {
            if (!FUNC_0(VAR_12, VAR_15, ((void*)0))) {
                FUNC_9(VAR_9, VAR_6,
                         VAR_7, VAR_0);
                goto err;
            }
            FUNC_10(VAR_10, VAR_15, (VAR_11 - VAR_17));
        } else {
            if (!FUNC_0(VAR_12, VAR_10, ((void*)0))) {
                FUNC_9(VAR_9, VAR_6,
                         VAR_7, VAR_0);
                goto err;
            }
        }

        VAR_10 += VAR_3;
    }
    FUNC_8(VAR_15, sizeof(VAR_15));
    VAR_20 = 1;
 err:
    FUNC_3(VAR_12);
    FUNC_3(VAR_13);
    return VAR_20;
}
