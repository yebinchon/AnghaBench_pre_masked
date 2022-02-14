
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int premaster_secret ;
struct TYPE_18__ {int no_cert_verify; } ;
struct TYPE_19__ {TYPE_7__ statem; TYPE_6__* session; TYPE_5__* cert; TYPE_3__* s3; } ;
struct TYPE_17__ {int peer; } ;
struct TYPE_16__ {TYPE_4__* pkeys; } ;
struct TYPE_15__ {int * privatekey; } ;
struct TYPE_13__ {TYPE_1__* new_cipher; } ;
struct TYPE_14__ {TYPE_2__ tmp; } ;
struct TYPE_12__ {unsigned long algorithm_auth; } ;
typedef TYPE_8__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,int,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 unsigned char* FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,unsigned int*) ;
 int FUNC_11 (int *,unsigned int*) ;
 size_t FUNC_12 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_13 (TYPE_8__*,int ,int ,int ) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (TYPE_8__*,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_16(SSL *VAR_14, PACKET *VAR_15)
{

    EVP_PKEY_CTX *VAR_16;
    EVP_PKEY *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
    unsigned char VAR_19[32];
    const unsigned char *VAR_20;
    size_t VAR_21 = 32, VAR_22;
    unsigned long VAR_23;
    unsigned int VAR_24, VAR_25;
    int VAR_26 = 0;
    PACKET VAR_27;


    VAR_23 = VAR_14->s3->tmp.new_cipher->algorithm_auth;
    if (VAR_23 & VAR_11) {



        VAR_18 = VAR_14->cert->pkeys[VAR_8].privatekey;
        if (VAR_18 == ((void*)0)) {
            VAR_18 = VAR_14->cert->pkeys[VAR_7].privatekey;
        }
        if (VAR_18 == ((void*)0)) {
            VAR_18 = VAR_14->cert->pkeys[VAR_6].privatekey;
        }
    } else if (VAR_23 & VAR_10) {
        VAR_18 = VAR_14->cert->pkeys[VAR_6].privatekey;
    }

    VAR_16 = FUNC_3(VAR_18, ((void*)0));
    if (VAR_16 == ((void*)0)) {
        FUNC_13(VAR_14, VAR_4, VAR_5,
                 VAR_1);
        return 0;
    }
    if (FUNC_5(VAR_16) <= 0) {
        FUNC_13(VAR_14, VAR_4, VAR_5,
                 VAR_0);
        return 0;
    }






    VAR_17 = FUNC_14(VAR_14->session->peer);
    if (VAR_17) {
        if (FUNC_6(VAR_16, VAR_17) <= 0)
            FUNC_0();
    }

    if (!FUNC_10(VAR_15, &VAR_24)
            || VAR_24 != (VAR_13 | VAR_12)
            || !FUNC_11(VAR_15, &VAR_25)) {
        FUNC_13(VAR_14, VAR_3, VAR_5,
                 VAR_9);
        goto err;
    }
    if (VAR_25 == 0x81) {





        if (!FUNC_9(VAR_15, 1)) {
            FUNC_13(VAR_14, VAR_4, VAR_5,
                     VAR_9);
            goto err;
        }
    } else if (VAR_25 >= 0x80) {




        FUNC_13(VAR_14, VAR_3, VAR_5,
                 VAR_9);
        goto err;
    }

    if (!FUNC_7(VAR_15, &VAR_27)) {
        FUNC_13(VAR_14, VAR_3, VAR_5,
                 VAR_9);
        goto err;
    }
    VAR_22 = FUNC_12(&VAR_27);
    VAR_20 = FUNC_8(&VAR_27);

    if (FUNC_4(VAR_16, VAR_19, &VAR_21, VAR_20,
                         VAR_22) <= 0) {
        FUNC_13(VAR_14, VAR_3, VAR_5,
                 VAR_9);
        goto err;
    }

    if (!FUNC_15(VAR_14, VAR_19,
                                    sizeof(VAR_19), 0)) {

        goto err;
    }

    if (FUNC_1(VAR_16, -1, -1, VAR_2, 2,
                          ((void*)0)) > 0)
        VAR_14->statem.no_cert_verify = 1;

    VAR_26 = 1;
 err:
    FUNC_2(VAR_16);
    return VAR_26;






}
