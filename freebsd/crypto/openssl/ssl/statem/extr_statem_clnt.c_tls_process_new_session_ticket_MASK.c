
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int nonce_label ;
struct TYPE_20__ {TYPE_2__* session; int resumption_master_secret; TYPE_15__* session_ctx; } ;
struct TYPE_18__ {unsigned int ticklen; unsigned long tick_lifetime_hint; unsigned long tick_age_add; int * tick; } ;
struct TYPE_19__ {unsigned int session_id_length; long time; size_t master_key_length; int master_key; scalar_t__ not_resumable; int session_id; TYPE_1__ ext; } ;
struct TYPE_17__ {int session_cache_mode; } ;
typedef TYPE_2__ SSL_SESSION ;
typedef TYPE_3__ SSL ;
typedef int RAW_EXTENSION ;
typedef int PACKET ;
typedef int MSG_PROCESS_RETURN ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned int,int ,unsigned int*,int ,int *) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,unsigned int*) ;
 int FUNC_10 (int *,unsigned long*) ;
 int FUNC_11 (int *) ;
 unsigned int FUNC_12 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (TYPE_15__*,TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_15 (TYPE_2__*) ;
 int VAR_11 ;
 int FUNC_16 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_17 (int) ;
 int * FUNC_18 (TYPE_3__*) ;
 TYPE_2__* FUNC_19 (TYPE_2__*,int ) ;
 int FUNC_20 (TYPE_3__*,int) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (TYPE_3__*,int const*,int ,unsigned char const*,int,int ,unsigned int,int ,size_t,int) ;
 int FUNC_23 (TYPE_3__*,int *,int ,int **,int *,int) ;
 int FUNC_24 (TYPE_3__*,int ,int *,int *,int ,int) ;

MSG_PROCESS_RETURN FUNC_25(SSL *VAR_12, PACKET *VAR_13)
{
    unsigned int VAR_14;
    unsigned long VAR_15, VAR_16 = 0;
    unsigned int VAR_17;
    RAW_EXTENSION *VAR_18 = ((void*)0);
    PACKET VAR_19;

    FUNC_11(&VAR_19);

    if (!FUNC_10(VAR_13, &VAR_15)
        || (FUNC_14(VAR_12)
            && (!FUNC_10(VAR_13, &VAR_16)
                || !FUNC_8(VAR_13, &VAR_19)))
        || !FUNC_9(VAR_13, &VAR_14)
        || (FUNC_14(VAR_12) ? (VAR_14 == 0 || FUNC_12(VAR_13) < VAR_14)
                            : FUNC_12(VAR_13) != VAR_14)) {
        FUNC_16(VAR_12, VAR_6, VAR_9,
                 VAR_10);
        goto err;
    }






    if (VAR_14 == 0)
        return VAR_3;
    if (FUNC_14(VAR_12) || VAR_12->session->session_id_length > 0) {
        SSL_SESSION *VAR_20;





        if ((VAR_20 = FUNC_19(VAR_12->session, 0)) == 0) {
            FUNC_16(VAR_12, VAR_7,
                     VAR_9,
                     VAR_2);
            goto err;
        }

        if ((VAR_12->session_ctx->session_cache_mode & VAR_11) != 0
                && !FUNC_14(VAR_12)) {





            FUNC_13(VAR_12->session_ctx, VAR_12->session);
        }

        FUNC_15(VAR_12->session);
        VAR_12->session = VAR_20;
    }





    VAR_12->session->time = (long)FUNC_21(((void*)0));

    FUNC_3(VAR_12->session->ext.tick);
    VAR_12->session->ext.tick = ((void*)0);
    VAR_12->session->ext.ticklen = 0;

    VAR_12->session->ext.tick = FUNC_4(VAR_14);
    if (VAR_12->session->ext.tick == ((void*)0)) {
        FUNC_16(VAR_12, VAR_7, VAR_9,
                 VAR_2);
        goto err;
    }
    if (!FUNC_6(VAR_13, VAR_12->session->ext.tick, VAR_14)) {
        FUNC_16(VAR_12, VAR_6, VAR_9,
                 VAR_10);
        goto err;
    }

    VAR_12->session->ext.tick_lifetime_hint = VAR_15;
    VAR_12->session->ext.tick_age_add = VAR_16;
    VAR_12->session->ext.ticklen = VAR_14;

    if (FUNC_14(VAR_12)) {
        PACKET VAR_21;

        if (!FUNC_5(VAR_13, &VAR_21)
                || FUNC_12(VAR_13) != 0) {
            FUNC_16(VAR_12, VAR_6,
                     VAR_9,
                     VAR_10);
            goto err;
        }

        if (!FUNC_23(VAR_12, &VAR_21,
                                    VAR_8, &VAR_18,
                                    ((void*)0), 1)
                || !FUNC_24(VAR_12,
                                             VAR_8,
                                             VAR_18, ((void*)0), 0, 1)) {

            goto err;
        }
    }
    if (!FUNC_0(VAR_12->session->ext.tick, VAR_14,
                    VAR_12->session->session_id, &VAR_17,
                    FUNC_2(), ((void*)0))) {
        FUNC_16(VAR_12, VAR_7, VAR_9,
                 VAR_0);
        goto err;
    }
    VAR_12->session->session_id_length = VAR_17;
    VAR_12->session->not_resumable = 0;


    if (FUNC_14(VAR_12)) {
        const EVP_MD *VAR_22 = FUNC_18(VAR_12);
        int VAR_23 = FUNC_1(VAR_22);
        size_t VAR_24;
        static const unsigned char VAR_25[] = "resumption";


        if (!FUNC_17(VAR_23 >= 0)) {
            FUNC_16(VAR_12, VAR_7,
                     VAR_9,
                     VAR_1);
            goto err;
        }
        VAR_24 = (size_t)VAR_23;

        if (!FUNC_22(VAR_12, VAR_22, VAR_12->resumption_master_secret,
                               VAR_25,
                               sizeof(VAR_25) - 1,
                               FUNC_7(&VAR_19),
                               FUNC_12(&VAR_19),
                               VAR_12->session->master_key,
                               VAR_24, 1)) {

            goto err;
        }
        VAR_12->session->master_key_length = VAR_24;

        FUNC_3(VAR_18);
        FUNC_20(VAR_12, VAR_11);
        return VAR_5;
    }

    return VAR_3;
 err:
    FUNC_3(VAR_18);
    return VAR_4;
}
