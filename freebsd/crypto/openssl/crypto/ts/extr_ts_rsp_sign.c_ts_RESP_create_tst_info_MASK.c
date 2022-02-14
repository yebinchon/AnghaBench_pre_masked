
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int dirn; } ;
struct TYPE_15__ {TYPE_2__ d; int type; } ;
struct TYPE_14__ {int flags; int signer_cert; TYPE_1__* request; int micros; int millis; int seconds; int clock_precision_digits; int time_cb_data; int (* time_cb ) (TYPE_3__*,int ,long*,long*) ;int serial_cb_data; int * (* serial_cb ) (TYPE_3__*,int ) ;} ;
struct TYPE_12__ {int * nonce; int msg_imprint; } ;
typedef int TS_TST_INFO ;
typedef TYPE_3__ TS_RESP_CTX ;
typedef int TS_ACCURACY ;
typedef TYPE_4__ GENERAL_NAME ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (TYPE_3__*,int ,char*) ;
 int * FUNC_10 (int *,long,long,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int const*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,TYPE_4__*) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int * FUNC_25 (TYPE_3__*,int ) ;
 int FUNC_26 (TYPE_3__*,int ,long*,long*) ;

__attribute__((used)) static TS_TST_INFO *FUNC_27(TS_RESP_CTX *VAR_6,
                                            ASN1_OBJECT *VAR_7)
{
    int VAR_8 = 0;
    TS_TST_INFO *VAR_9 = ((void*)0);
    ASN1_INTEGER *VAR_10 = ((void*)0);
    ASN1_GENERALIZEDTIME *VAR_11 = ((void*)0);
    long VAR_12, VAR_13;
    TS_ACCURACY *VAR_14 = ((void*)0);
    const ASN1_INTEGER *VAR_15;
    GENERAL_NAME *VAR_16 = ((void*)0);

    if ((VAR_9 = FUNC_12()) == ((void*)0))
        goto end;
    if (!FUNC_21(VAR_9, 1))
        goto end;
    if (!FUNC_17(VAR_9, VAR_7))
        goto end;
    if (!FUNC_14(VAR_9, VAR_6->request->msg_imprint))
        goto end;
    if ((VAR_10 = VAR_6->serial_cb(VAR_6, VAR_6->serial_cb_data)) == ((void*)0)
        || !FUNC_18(VAR_9, VAR_10))
        goto end;
    if (!VAR_6->time_cb(VAR_6, VAR_6->time_cb_data, &VAR_12, &VAR_13)
        || (VAR_11 =
            FUNC_10(((void*)0), VAR_12, VAR_13,
                                        VAR_6->clock_precision_digits)) == ((void*)0)
        || !FUNC_19(VAR_9, VAR_11))
        goto end;

    if ((VAR_6->seconds || VAR_6->millis || VAR_6->micros)
        && (VAR_14 = FUNC_5()) == ((void*)0))
        goto end;
    if (VAR_6->seconds && !FUNC_8(VAR_14, VAR_6->seconds))
        goto end;
    if (VAR_6->millis && !FUNC_7(VAR_14, VAR_6->millis))
        goto end;
    if (VAR_6->micros && !FUNC_6(VAR_14, VAR_6->micros))
        goto end;
    if (VAR_14 && !FUNC_13(VAR_9, VAR_14))
        goto end;

    if ((VAR_6->flags & VAR_2)
        && !FUNC_16(VAR_9, 1))
        goto end;

    if ((VAR_15 = VAR_6->request->nonce) != ((void*)0)
        && !FUNC_15(VAR_9, VAR_15))
        goto end;

    if (VAR_6->flags & VAR_5) {
        if ((VAR_16 = FUNC_3()) == ((void*)0))
            goto end;
        VAR_16->type = VAR_0;
        VAR_16->d.dirn =
            FUNC_23(FUNC_24(VAR_6->signer_cert));
        if (!VAR_16->d.dirn)
            goto end;
        if (!FUNC_20(VAR_9, VAR_16))
            goto end;
    }

    VAR_8 = 1;
 end:
    if (!VAR_8) {
        FUNC_11(VAR_9);
        VAR_9 = ((void*)0);
        FUNC_22(VAR_1, VAR_3);
        FUNC_9(VAR_6, VAR_4,
                                         "Error during TSTInfo "
                                         "generation.");
    }
    FUNC_2(VAR_16);
    FUNC_4(VAR_14);
    FUNC_0(VAR_11);
    FUNC_1(VAR_10);

    return VAR_9;
}
