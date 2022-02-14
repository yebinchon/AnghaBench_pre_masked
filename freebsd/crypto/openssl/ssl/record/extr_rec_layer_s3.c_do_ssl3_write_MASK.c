
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_41__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;


typedef int wr ;
typedef int WPACKET ;
struct TYPE_45__ {size_t numwpipes; size_t wpend_tot; unsigned char const* wpend_buf; int wpend_type; size_t wpend_ret; int * wbuf; } ;
struct TYPE_43__ {scalar_t__ enc_write_state; } ;
struct TYPE_48__ {unsigned int version; scalar_t__ hello_retry_request; size_t (* record_padding_cb ) (TYPE_6__*,int,size_t,int ) ;int block_padding; TYPE_41__ rlayer; int msg_callback_arg; int (* msg_callback ) (int,unsigned int,int ,unsigned char*,int,TYPE_6__*,int ) ;int * enc_write_ctx; TYPE_4__* method; TYPE_2__ statem; int record_padding_arg; int * compress; int renegotiate; TYPE_1__* s3; int write_hash; int * session; } ;
struct TYPE_47__ {int length; int input; } ;
struct TYPE_46__ {int (* ssl_dispatch_alert ) (TYPE_6__*) ;TYPE_3__* ssl3_enc; } ;
struct TYPE_44__ {int (* enc ) (TYPE_6__*,TYPE_5__*,size_t,int) ;int (* mac ) (TYPE_6__*,TYPE_5__*,unsigned char*,int) ;} ;
struct TYPE_42__ {int empty_fragment_done; scalar_t__ need_empty_fragments; scalar_t__ alert_dispatch; } ;
typedef int SSL_SESSION ;
typedef TYPE_5__ SSL3_RECORD ;
typedef int SSL3_BUFFER ;
typedef TYPE_6__ SSL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_41__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (TYPE_5__*,size_t) ;
 size_t FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,unsigned char*) ;
 int FUNC_14 (TYPE_5__*,unsigned char*) ;
 int FUNC_15 (TYPE_5__*,size_t) ;
 int FUNC_16 (TYPE_5__*,unsigned int) ;
 int FUNC_17 (TYPE_5__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_18 (TYPE_6__*) ;
 scalar_t__ FUNC_19 (TYPE_6__*) ;
 scalar_t__ FUNC_20 (TYPE_6__*) ;
 scalar_t__ FUNC_21 (TYPE_6__*) ;
 int FUNC_22 (TYPE_6__*,int ,int ,int ) ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int FUNC_23 (TYPE_6__*) ;
 scalar_t__ VAR_24 ;
 int FUNC_24 (int *,int,unsigned char**) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 size_t FUNC_28 (int *) ;
 int FUNC_29 (int *,size_t*) ;
 int FUNC_30 (int *,scalar_t__,int ,int ) ;
 int FUNC_31 (int *,int ,int) ;
 int FUNC_32 (int *,int ,size_t) ;
 int FUNC_33 (int *,unsigned int) ;
 int FUNC_34 (int *,int) ;
 int FUNC_35 (int *,size_t,unsigned char**) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (TYPE_5__*,int ,int) ;
 int FUNC_38 (TYPE_6__*) ;
 int FUNC_39 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_40 (TYPE_6__*,size_t,int ) ;
 int FUNC_41 (TYPE_6__*,int,unsigned char const*,size_t,size_t*) ;
 size_t FUNC_42 (TYPE_6__*) ;
 int FUNC_43 (TYPE_6__*) ;
 size_t FUNC_44 (TYPE_6__*,int,size_t,int ) ;
 int FUNC_45 (TYPE_6__*,TYPE_5__*,unsigned char*,int) ;
 int FUNC_46 (TYPE_6__*,TYPE_5__*,size_t,int) ;
 int FUNC_47 (TYPE_6__*,TYPE_5__*,unsigned char*,int) ;
 int FUNC_48 (int,unsigned int,int ,unsigned char*,size_t,TYPE_6__*,int ) ;
 int FUNC_49 (int,unsigned int,int ,unsigned char*,int,TYPE_6__*,int ) ;
 int FUNC_50 (TYPE_6__*,TYPE_5__*,size_t,int) ;

int FUNC_51(SSL *VAR_25, int VAR_26, const unsigned char *VAR_27,
                  size_t *VAR_28, size_t VAR_29,
                  int VAR_30, size_t *VAR_31)
{
    WPACKET VAR_32[VAR_18];
    SSL3_RECORD VAR_33[VAR_18];
    WPACKET *VAR_34;
    SSL3_RECORD *VAR_35;
    unsigned char *VAR_36;
    int VAR_37, VAR_38, VAR_39 = 0;
    size_t VAR_40 = 0;
    int VAR_41 = 0;
    size_t VAR_42 = 0;
    SSL3_BUFFER *VAR_43;
    SSL_SESSION *VAR_44;
    size_t VAR_45 = 0, VAR_46, VAR_47 = 0;
    size_t VAR_48;

    for (VAR_48 = 0; VAR_48 < VAR_29; VAR_48++)
        VAR_45 += VAR_28[VAR_48];




    if (FUNC_4(&VAR_25->rlayer)) {

        return FUNC_41(VAR_25, VAR_26, VAR_27, VAR_45, VAR_31);
    }


    if (VAR_25->s3->alert_dispatch) {
        VAR_37 = VAR_25->method->ssl_dispatch_alert(VAR_25);
        if (VAR_37 <= 0) {

            return VAR_37;
        }

    }

    if (VAR_25->rlayer.numwpipes < VAR_29) {
        if (!FUNC_40(VAR_25, VAR_29, 0)) {

            return -1;
        }
    }

    if (VAR_45 == 0 && !VAR_30)
        return 0;

    VAR_44 = VAR_25->session;

    if ((VAR_44 == ((void*)0)) ||
        (VAR_25->enc_write_ctx == ((void*)0)) || (FUNC_2(VAR_25->write_hash) == ((void*)0))) {
        VAR_39 = VAR_25->enc_write_ctx ? 0 : 1;
        VAR_38 = 0;
    } else {

        VAR_38 = FUNC_3(VAR_25->write_hash);
        if (VAR_38 < 0) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }
    }




    if (!VAR_39 && !VAR_30 && !VAR_25->s3->empty_fragment_done) {





        if (VAR_25->s3->need_empty_fragments && VAR_26 == VAR_9) {






            size_t VAR_49 = 0;
            int VAR_50;

            VAR_50 = FUNC_51(VAR_25, VAR_26, VAR_27, &VAR_49, 1, 1, &VAR_40);
            if (VAR_50 <= 0) {

                goto err;
            }

            if (VAR_40 >
                (VAR_11 + VAR_14)) {

                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
        }

        VAR_25->s3->empty_fragment_done = 1;
    }

    if (VAR_30) {
        VAR_43 = &VAR_25->rlayer.wbuf[0];
        FUNC_9(VAR_43, VAR_42);
        if (!FUNC_30(&VAR_32[0], FUNC_5(VAR_43),
                                     FUNC_6(VAR_43), 0)
                || !FUNC_24(&VAR_32[0], VAR_42, ((void*)0))) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }
        VAR_47 = 1;
    } else if (VAR_40) {
        VAR_43 = &VAR_25->rlayer.wbuf[0];
        if (!FUNC_30(&VAR_32[0],
                                     FUNC_5(VAR_43),
                                     FUNC_6(VAR_43), 0)
                || !FUNC_24(&VAR_32[0], FUNC_7(VAR_43)
                                                    + VAR_40, ((void*)0))) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }
        VAR_47 = 1;
    } else {
        for (VAR_48 = 0; VAR_48 < VAR_29; VAR_48++) {
            VAR_34 = &VAR_32[VAR_48];

            VAR_43 = &VAR_25->rlayer.wbuf[VAR_48];




            FUNC_9(VAR_43, VAR_42);
            if (!FUNC_30(VAR_34, FUNC_5(VAR_43),
                                         FUNC_6(VAR_43), 0)
                    || !FUNC_24(VAR_34, VAR_42, ((void*)0))) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
            VAR_47++;
        }
    }


    if (VAR_25->enc_write_ctx && FUNC_19(VAR_25) && !FUNC_18(VAR_25)) {
        int VAR_51 = FUNC_1(VAR_25->enc_write_ctx);
        if (VAR_51 == VAR_3) {

            VAR_41 = FUNC_0(VAR_25->enc_write_ctx);
            if (VAR_41 <= 1)
                VAR_41 = 0;
        } else if (VAR_51 == VAR_5) {

            VAR_41 = VAR_6;
        } else if (VAR_51 == VAR_4) {
            VAR_41 = VAR_2;
        }
    }

    VAR_45 = 0;

    FUNC_37(VAR_33, 0, sizeof(VAR_33));
    for (VAR_48 = 0; VAR_48 < VAR_29; VAR_48++) {
        unsigned int VAR_52 = (VAR_25->version == VAR_22) ? VAR_21
                                                              : VAR_25->version;
        unsigned char *VAR_53 = ((void*)0);
        size_t VAR_54;
        unsigned int VAR_55;

        VAR_34 = &VAR_32[VAR_48];
        VAR_35 = &VAR_33[VAR_48];





        if (FUNC_18(VAR_25)
                && VAR_25->enc_write_ctx != ((void*)0)
                && (VAR_25->statem.enc_write_state != VAR_0
                    || VAR_26 != VAR_8))
            VAR_55 = VAR_9;
        else
            VAR_55 = VAR_26;
        FUNC_17(VAR_35, VAR_55);





        if (FUNC_21(VAR_25) == VAR_24
                && !VAR_25->renegotiate
                && FUNC_23(VAR_25) > VAR_23
                && VAR_25->hello_retry_request == VAR_17)
            VAR_52 = VAR_23;
        FUNC_16(VAR_35, VAR_52);

        VAR_54 = VAR_28[VAR_48];
        if (VAR_25->compress != ((void*)0))
            VAR_54 += VAR_13;


        if (!FUNC_34(VAR_34, VAR_55)
                || !FUNC_33(VAR_34, VAR_52)
                || !FUNC_36(VAR_34)
                || (VAR_41 > 0
                    && !FUNC_24(VAR_34, VAR_41, ((void*)0)))
                || (VAR_54 > 0
                    && !FUNC_35(VAR_34, VAR_54,
                                              &VAR_53))) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }


        FUNC_13(VAR_35, VAR_53);
        FUNC_15(VAR_35, VAR_28[VAR_48]);
        FUNC_14(VAR_35, (unsigned char *)&VAR_27[VAR_45]);
        VAR_45 += VAR_28[VAR_48];







        if (VAR_25->compress != ((void*)0)) {
            if (!FUNC_39(VAR_25, VAR_35)
                    || !FUNC_24(VAR_34, VAR_35->length, ((void*)0))) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_20);
                goto err;
            }
        } else {
            if (!FUNC_31(VAR_34, VAR_35->input, VAR_35->length)) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
            FUNC_12(&VAR_33[VAR_48]);
        }

        if (FUNC_18(VAR_25)
                && VAR_25->enc_write_ctx != ((void*)0)
                && (VAR_25->statem.enc_write_state != VAR_0
                    || VAR_26 != VAR_8)) {
            size_t VAR_56, VAR_57;

            if (!FUNC_34(VAR_34, VAR_26)) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
            FUNC_10(VAR_35, 1);


            VAR_57 = FUNC_42(VAR_25);
            VAR_56 = FUNC_11(VAR_35);
            if (VAR_56 < VAR_57) {
                size_t VAR_58 = 0;
                size_t VAR_59 = VAR_57 - VAR_56;
                if (VAR_25->record_padding_cb != ((void*)0)) {
                    VAR_58 = VAR_25->record_padding_cb(VAR_25, VAR_26, VAR_56, VAR_25->record_padding_arg);
                } else if (VAR_25->block_padding > 0) {
                    size_t VAR_60 = VAR_25->block_padding - 1;
                    size_t VAR_61;


                    if ((VAR_25->block_padding & VAR_60) == 0)
                        VAR_61 = VAR_56 & VAR_60;
                    else
                        VAR_61 = VAR_56 % VAR_25->block_padding;

                    if (VAR_61 == 0)
                        VAR_58 = 0;
                    else
                        VAR_58 = VAR_25->block_padding - VAR_61;
                }
                if (VAR_58 > 0) {

                    if (VAR_58 > VAR_59)
                        VAR_58 = VAR_59;
                    if (!FUNC_32(VAR_34, 0, VAR_58)) {
                        FUNC_22(VAR_25, VAR_15, VAR_16,
                                 VAR_1);
                        goto err;
                    }
                    FUNC_10(VAR_35, VAR_58);
                }
            }
        }







        if (!FUNC_20(VAR_25) && VAR_38 != 0) {
            unsigned char *VAR_62;

            if (!FUNC_24(VAR_34, VAR_38, &VAR_62)
                    || !VAR_25->method->ssl3_enc->mac(VAR_25, VAR_35, VAR_62, 1)) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
        }






        if (!FUNC_35(VAR_34, VAR_19,
                                   ((void*)0))




                || !FUNC_29(VAR_34, &VAR_46)) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }


        VAR_36 = FUNC_28(VAR_34) - VAR_46;

        FUNC_13(VAR_35, VAR_36);
        FUNC_12(VAR_35);
        FUNC_15(VAR_35, VAR_46);
    }

    if (VAR_25->statem.enc_write_state == VAR_0) {




        if (FUNC_50(VAR_25, VAR_33, VAR_29, 1) < 1) {
            if (!FUNC_38(VAR_25)) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
            }
            goto err;
        }
    } else {
        if (VAR_25->method->ssl3_enc->enc(VAR_25, VAR_33, VAR_29, 1) < 1) {
            if (!FUNC_38(VAR_25)) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
            }
            goto err;
        }
    }

    for (VAR_48 = 0; VAR_48 < VAR_29; VAR_48++) {
        size_t VAR_63;

        VAR_34 = &VAR_32[VAR_48];
        VAR_35 = &VAR_33[VAR_48];


        if (!FUNC_29(VAR_34, &VAR_63)

                || VAR_63 > VAR_35->length
                || (VAR_35->length > VAR_63
                    && !FUNC_24(VAR_34,
                                               VAR_35->length - VAR_63, ((void*)0)))) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }
        if (FUNC_20(VAR_25) && VAR_38 != 0) {
            unsigned char *VAR_64;

            if (!FUNC_24(VAR_34, VAR_38, &VAR_64)
                    || !VAR_25->method->ssl3_enc->mac(VAR_25, VAR_35, VAR_64, 1)) {
                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
            FUNC_10(VAR_35, VAR_38);
        }

        if (!FUNC_29(VAR_34, &VAR_46)
                || !FUNC_26(VAR_34)) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }

        if (VAR_25->msg_callback) {
            VAR_36 = FUNC_28(VAR_34) - VAR_46
                          - VAR_11;
            VAR_25->msg_callback(1, 0, VAR_10, VAR_36,
                            VAR_11, VAR_25,
                            VAR_25->msg_callback_arg);

            if (FUNC_18(VAR_25) && VAR_25->enc_write_ctx != ((void*)0)) {
                unsigned char VAR_65 = VAR_26;

                VAR_25->msg_callback(1, VAR_25->version, VAR_12,
                                &VAR_65, 1, VAR_25, VAR_25->msg_callback_arg);
            }
        }

        if (!FUNC_27(VAR_34)) {
            FUNC_22(VAR_25, VAR_15, VAR_16,
                     VAR_1);
            goto err;
        }





        FUNC_17(VAR_35, VAR_26);

        FUNC_10(VAR_35, VAR_11);

        if (VAR_30) {




            if (VAR_48 > 0) {

                FUNC_22(VAR_25, VAR_15, VAR_16,
                         VAR_1);
                goto err;
            }
            *VAR_31 = FUNC_11(VAR_35);
            return 1;
        }


        FUNC_8(&VAR_25->rlayer.wbuf[VAR_48],
                             VAR_40 + FUNC_11(VAR_35));
    }





    VAR_25->rlayer.wpend_tot = VAR_45;
    VAR_25->rlayer.wpend_buf = VAR_27;
    VAR_25->rlayer.wpend_type = VAR_26;
    VAR_25->rlayer.wpend_ret = VAR_45;


    return FUNC_41(VAR_25, VAR_26, VAR_27, VAR_45, VAR_31);
 err:
    for (VAR_48 = 0; VAR_48 < VAR_47; VAR_48++)
        FUNC_25(&VAR_32[VAR_48]);
    return -1;
}
