
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int const uint16_t ;
struct TYPE_20__ {scalar_t__ hash; int sig; int sig_idx; int curve; } ;
struct TYPE_19__ {TYPE_3__* s3; TYPE_1__* cert; } ;
struct TYPE_17__ {TYPE_5__ const* peer_sigalg; } ;
struct TYPE_18__ {TYPE_2__ tmp; } ;
struct TYPE_16__ {int cert_flags; } ;
typedef TYPE_4__ SSL ;
typedef TYPE_5__ SIGALG_LOOKUP ;
typedef int EVP_PKEY ;
typedef int EVP_MD ;
typedef int EC_KEY ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ) ;
 int const VAR_16 ;
 int const VAR_17 ;
 int FUNC_8 (int,size_t*) ;
 int FUNC_9 (TYPE_4__*,int ,int,int ,void*) ;
 size_t FUNC_10 (TYPE_4__*,int,int const**) ;
 int FUNC_11 (TYPE_4__*,int ,int) ;
 int FUNC_12 (TYPE_4__*,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_5__ const*,int const**) ;
 TYPE_5__* FUNC_15 (int const) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;

int FUNC_17(SSL *VAR_18, uint16_t VAR_19, EVP_PKEY *VAR_20)
{
    const uint16_t *VAR_21;
    const EVP_MD *VAR_22 = ((void*)0);
    char VAR_23[2];
    size_t VAR_24, VAR_25, VAR_26;
    int VAR_27 = FUNC_5(VAR_20);
    const SIGALG_LOOKUP *VAR_28;


    if (VAR_27 == -1)
        return -1;
    if (FUNC_6(VAR_18)) {

        if (VAR_27 == VAR_0) {
            FUNC_7(VAR_18, VAR_8, VAR_10,
                     VAR_14);
            return 0;
        }

        if (VAR_27 == VAR_2)
            VAR_27 = VAR_3;
    }
    VAR_28 = FUNC_15(VAR_19);




    if (VAR_28 == ((void*)0)
        || (FUNC_6(VAR_18) && (VAR_28->hash == VAR_4 || VAR_28->hash == VAR_5))
        || (VAR_27 != VAR_28->sig
        && (VAR_28->sig != VAR_3 || VAR_27 != VAR_2))) {
        FUNC_7(VAR_18, VAR_8, VAR_10,
                 VAR_14);
        return 0;
    }

    if (!FUNC_8(FUNC_5(VAR_20), &VAR_26)
            || VAR_28->sig_idx != (int)VAR_26) {
        FUNC_7(VAR_18, VAR_8, VAR_10,
                 VAR_14);
        return 0;
    }


    if (VAR_27 == VAR_1) {


        if (!FUNC_12(VAR_18, VAR_20)) {
            FUNC_7(VAR_18, VAR_8,
                     VAR_10,
                     VAR_11);
            return 0;
        }


        if (FUNC_6(VAR_18) || FUNC_16(VAR_18)) {
            EC_KEY *VAR_29 = FUNC_4(VAR_20);
            int VAR_30 = FUNC_0(FUNC_1(VAR_29));

            if (VAR_28->curve != VAR_6 && VAR_30 != VAR_28->curve) {
                FUNC_7(VAR_18, VAR_8,
                         VAR_10, VAR_13);
                return 0;
            }
        }
        if (!FUNC_6(VAR_18)) {

            if (!FUNC_11(VAR_18, FUNC_13(VAR_20), 1)) {
                FUNC_7(VAR_18, VAR_8,
                         VAR_10, VAR_13);
                return 0;
            }
            if (FUNC_16(VAR_18)) {

                if (VAR_19 != VAR_16
                    && VAR_19 != VAR_17) {
                    FUNC_7(VAR_18, VAR_7,
                             VAR_10,
                             VAR_14);
                    return 0;
                }
            }
        }
    } else if (FUNC_16(VAR_18)) {
        FUNC_7(VAR_18, VAR_7, VAR_10,
                 VAR_14);
        return 0;
    }



    VAR_24 = FUNC_10(VAR_18, 1, &VAR_21);
    for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++, VAR_21++) {
        if (VAR_19 == *VAR_21)
            break;
    }

    if (VAR_25 == VAR_24 && (VAR_28->hash != VAR_4
        || VAR_18->cert->cert_flags & VAR_9)) {
        FUNC_7(VAR_18, VAR_7, VAR_10,
                 VAR_14);
        return 0;
    }
    if (!FUNC_14(VAR_28, &VAR_22)) {
        FUNC_7(VAR_18, VAR_7, VAR_10,
                 VAR_12);
        return 0;
    }
    if (VAR_22 != ((void*)0)) {




        VAR_23[0] = (VAR_19 >> 8) & 0xff;
        VAR_23[1] = VAR_19 & 0xff;
        if (!FUNC_9(VAR_18, VAR_15,
                    FUNC_2(VAR_22) * 4, FUNC_3(VAR_22),
                    (void *)VAR_23)) {
            FUNC_7(VAR_18, VAR_7, VAR_10,
                     VAR_14);
            return 0;
        }
    }

    VAR_18->s3->tmp.peer_sigalg = VAR_28;
    return 1;
}
