
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* session; TYPE_3__* s3; } ;
struct TYPE_12__ {int peer; } ;
struct TYPE_10__ {TYPE_1__* new_cipher; } ;
struct TYPE_11__ {TYPE_2__ tmp; int * peer_tmp; } ;
struct TYPE_9__ {int algorithm_auth; } ;
typedef TYPE_5__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;
typedef int DH ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (TYPE_5__*,int ,int ,int ) ;
 int * FUNC_16 (int ) ;
 int FUNC_17 (TYPE_5__*,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_18(SSL *VAR_15, PACKET *VAR_16, EVP_PKEY **VAR_17)
{

    PACKET VAR_18, VAR_19, VAR_20;
    EVP_PKEY *VAR_21 = ((void*)0);

    DH *VAR_22 = ((void*)0);
    BIGNUM *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);

    int VAR_26 = 0;

    if (!FUNC_13(VAR_16, &VAR_18)
        || !FUNC_13(VAR_16, &VAR_19)
        || !FUNC_13(VAR_16, &VAR_20)) {
        FUNC_15(VAR_15, VAR_4, VAR_8,
                 VAR_11);
        return 0;
    }

    VAR_21 = FUNC_11();
    VAR_22 = FUNC_5();

    if (VAR_21 == ((void*)0) || VAR_22 == ((void*)0)) {
        FUNC_15(VAR_15, VAR_7, VAR_8,
                 VAR_3);
        goto err;
    }


    VAR_23 = FUNC_0(FUNC_12(&VAR_18), (int)FUNC_14(&VAR_18), ((void*)0));
    VAR_24 = FUNC_0(FUNC_12(&VAR_19), (int)FUNC_14(&VAR_19),
                  ((void*)0));
    VAR_25 = FUNC_0(FUNC_12(&VAR_20),
                          (int)FUNC_14(&VAR_20), ((void*)0));
    if (VAR_23 == ((void*)0) || VAR_24 == ((void*)0) || VAR_25 == ((void*)0)) {
        FUNC_15(VAR_15, VAR_7, VAR_8,
                 VAR_0);
        goto err;
    }


    if (FUNC_2(VAR_25)) {
        FUNC_15(VAR_15, VAR_6, VAR_8,
                 VAR_9);
        goto err;
    }

    if (!FUNC_8(VAR_22, VAR_23, ((void*)0), VAR_24)) {
        FUNC_15(VAR_15, VAR_7, VAR_8,
                 VAR_0);
        goto err;
    }
    VAR_23 = VAR_24 = ((void*)0);

    if (FUNC_3(VAR_22, &VAR_26) == 0 || VAR_26 != 0) {
        FUNC_15(VAR_15, VAR_6, VAR_8,
                 VAR_9);
        goto err;
    }

    if (!FUNC_7(VAR_22, VAR_25, ((void*)0))) {
        FUNC_15(VAR_15, VAR_7, VAR_8,
                 VAR_0);
        goto err;
    }
    VAR_25 = ((void*)0);

    if (!FUNC_17(VAR_15, VAR_12, FUNC_6(VAR_22), 0, VAR_22)) {
        FUNC_15(VAR_15, VAR_5, VAR_8,
                 VAR_10);
        goto err;
    }

    if (FUNC_9(VAR_21, VAR_22) == 0) {
        FUNC_15(VAR_15, VAR_7, VAR_8,
                 VAR_1);
        goto err;
    }

    VAR_15->s3->peer_tmp = VAR_21;





    if (VAR_15->s3->tmp.new_cipher->algorithm_auth & (VAR_14 | VAR_13))
        *VAR_17 = FUNC_16(VAR_15->session->peer);


    return 1;

 err:
    FUNC_1(VAR_23);
    FUNC_1(VAR_24);
    FUNC_1(VAR_25);
    FUNC_4(VAR_22);
    FUNC_10(VAR_21);

    return 0;





}
