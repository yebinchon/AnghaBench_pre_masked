
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_11__ {int client_version; scalar_t__ version; TYPE_3__* s3; TYPE_1__* session; } ;
struct TYPE_9__ {unsigned char* pms; size_t pmslen; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_8__ {int * peer; } ;
typedef TYPE_4__ SSL ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t*,unsigned char*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (unsigned char*,size_t) ;
 unsigned char* FUNC_6 (size_t) ;
 scalar_t__ FUNC_7 (unsigned char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_9 (int *,size_t,unsigned char**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (TYPE_4__*,unsigned char*,size_t,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_14(SSL *VAR_8, WPACKET *VAR_9)
{

    unsigned char *VAR_10 = ((void*)0);
    EVP_PKEY *VAR_11 = ((void*)0);
    EVP_PKEY_CTX *VAR_12 = ((void*)0);
    size_t VAR_13;
    unsigned char *VAR_14 = ((void*)0);
    size_t VAR_15 = 0;

    if (VAR_8->session->peer == ((void*)0)) {



        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_1);
        return 0;
    }

    VAR_11 = FUNC_12(VAR_8->session->peer);
    if (FUNC_4(VAR_11) == ((void*)0)) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_1);
        return 0;
    }

    VAR_15 = VAR_6;
    VAR_14 = FUNC_6(VAR_15);
    if (VAR_14 == ((void*)0)) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_2);
        return 0;
    }

    VAR_14[0] = VAR_8->client_version >> 8;
    VAR_14[1] = VAR_8->client_version & 0xff;

    if (FUNC_7(VAR_14 + 2, (int)(VAR_15 - 2)) <= 0) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_2);
        goto err;
    }


    if (VAR_8->version > VAR_3 && !FUNC_11(VAR_9)) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_1);
        goto err;
    }
    VAR_12 = FUNC_1(VAR_11, ((void*)0));
    if (VAR_12 == ((void*)0) || FUNC_3(VAR_12) <= 0
        || FUNC_2(VAR_12, ((void*)0), &VAR_13, VAR_14, VAR_15) <= 0) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_0);
        goto err;
    }
    if (!FUNC_9(VAR_9, VAR_13, &VAR_10)
            || FUNC_2(VAR_12, VAR_10, &VAR_13, VAR_14, VAR_15) <= 0) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_7);
        goto err;
    }
    FUNC_0(VAR_12);
    VAR_12 = ((void*)0);


    if (VAR_8->version > VAR_3 && !FUNC_10(VAR_9)) {
        FUNC_8(VAR_8, VAR_4, VAR_5,
                 VAR_1);
        goto err;
    }


    if (!FUNC_13(VAR_8, VAR_10, VAR_13, VAR_14, VAR_15)) {

        goto err;
    }

    VAR_8->s3->tmp.pms = VAR_14;
    VAR_8->s3->tmp.pmslen = VAR_15;

    return 1;
 err:
    FUNC_5(VAR_14, VAR_15);
    FUNC_0(VAR_12);

    return 0;





}
