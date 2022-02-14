
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_30__ {int sig_idx; scalar_t__ sig; int curve; scalar_t__ const sigalg; } ;
struct TYPE_29__ {size_t shared_sigalgslen; TYPE_5__* s3; TYPE_2__* cert; scalar_t__ server; TYPE_7__** shared_sigalgs; } ;
struct TYPE_27__ {TYPE_7__ const* sigalg; TYPE_3__* cert; int * peer_sigalgs; TYPE_1__* new_cipher; } ;
struct TYPE_28__ {TYPE_4__ tmp; } ;
struct TYPE_26__ {int * privatekey; } ;
struct TYPE_25__ {TYPE_3__* key; TYPE_3__* pkeys; } ;
struct TYPE_24__ {int algorithm_auth; } ;
typedef TYPE_6__ SSL ;
typedef TYPE_7__ SIGALG_LOOKUP ;
typedef int EVP_PKEY ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int VAR_9 ;
 int FUNC_6 (TYPE_6__*,int ,int ,int ) ;
 TYPE_7__* FUNC_7 (TYPE_6__*,int *,int *) ;
 scalar_t__ FUNC_8 (TYPE_6__*,TYPE_7__ const*,int) ;
 int FUNC_9 (int ,TYPE_7__ const*) ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (TYPE_6__*,TYPE_7__ const*) ;
 size_t FUNC_12 (TYPE_6__*,int,scalar_t__ const**) ;
 TYPE_7__* FUNC_13 (TYPE_6__*,int) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;

int FUNC_15(SSL *VAR_10, int VAR_11)
{
    const SIGALG_LOOKUP *VAR_12 = ((void*)0);
    int VAR_13 = -1;

    VAR_10->s3->tmp.cert = ((void*)0);
    VAR_10->s3->tmp.sigalg = ((void*)0);

    if (FUNC_4(VAR_10)) {
        VAR_12 = FUNC_7(VAR_10, ((void*)0), ((void*)0));
        if (VAR_12 == ((void*)0)) {
            if (!VAR_11)
                return 1;
            FUNC_6(VAR_10, VAR_2, VAR_5,
                     VAR_7);
            return 0;
        }
    } else {

        if (!(VAR_10->s3->tmp.new_cipher->algorithm_auth & VAR_9))
            return 1;
        if (!VAR_10->server && !FUNC_10(VAR_10, VAR_10->cert->key - VAR_10->cert->pkeys))
                return 1;

        if (FUNC_5(VAR_10)) {
            size_t VAR_14;
            if (VAR_10->s3->tmp.peer_sigalgs != ((void*)0)) {

                int VAR_15;


                if (FUNC_14(VAR_10)) {
                    EC_KEY *VAR_16 = FUNC_3(VAR_10->cert->pkeys[VAR_6].privatekey);
                    VAR_15 = FUNC_0(FUNC_1(VAR_16));
                } else {
                    VAR_15 = -1;
                }






                for (VAR_14 = 0; VAR_14 < VAR_10->shared_sigalgslen; VAR_14++) {
                    VAR_12 = VAR_10->shared_sigalgs[VAR_14];

                    if (VAR_10->server) {
                        if ((VAR_13 = FUNC_11(VAR_10, VAR_12)) == -1)
                            continue;
                    } else {
                        int VAR_17 = VAR_10->cert->key - VAR_10->cert->pkeys;

                        VAR_13 = VAR_12->sig_idx;
                        if (VAR_17 != VAR_13)
                            continue;
                    }

                    if (!FUNC_8(VAR_10, VAR_12, VAR_13))
                        continue;
                    if (VAR_12->sig == VAR_1) {

                        EVP_PKEY *VAR_18 = VAR_10->cert->pkeys[VAR_13].privatekey;

                        if (!FUNC_9(FUNC_2(VAR_18), VAR_12))
                            continue;
                    }

                    if (VAR_15 == -1 || VAR_12->curve == VAR_15)

                        break;
                }
                if (VAR_14 == VAR_10->shared_sigalgslen) {
                    if (!VAR_11)
                        return 1;
                    FUNC_6(VAR_10, VAR_2,
                             VAR_5,
                             VAR_7);
                    return 0;
                }
            } else {



                const uint16_t *VAR_19;
                size_t VAR_20;

                if ((VAR_12 = FUNC_13(VAR_10, -1)) == ((void*)0)) {
                    if (!VAR_11)
                        return 1;
                    FUNC_6(VAR_10, VAR_4, VAR_5,
                             VAR_0);
                    return 0;
                }


                VAR_20 = FUNC_12(VAR_10, 1, &VAR_19);
                for (VAR_14 = 0; VAR_14 < VAR_20; VAR_14++, VAR_19++) {
                    if (VAR_12->sigalg == *VAR_19
                            && FUNC_8(VAR_10, VAR_12, VAR_12->sig_idx))
                        break;
                }
                if (VAR_14 == VAR_20) {
                    if (!VAR_11)
                        return 1;
                    FUNC_6(VAR_10, VAR_3,
                             VAR_5,
                             VAR_8);
                    return 0;
                }
            }
        } else {
            if ((VAR_12 = FUNC_13(VAR_10, -1)) == ((void*)0)) {
                if (!VAR_11)
                    return 1;
                FUNC_6(VAR_10, VAR_4, VAR_5,
                         VAR_0);
                return 0;
            }
        }
    }
    if (VAR_13 == -1)
        VAR_13 = VAR_12->sig_idx;
    VAR_10->s3->tmp.cert = &VAR_10->cert->pkeys[VAR_13];
    VAR_10->cert->key = VAR_10->s3->tmp.cert;
    VAR_10->s3->tmp.sigalg = VAR_12;
    return 1;
}
