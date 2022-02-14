
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ enc_read_state; } ;
struct TYPE_33__ {size_t max_pipelines; scalar_t__ hello_retry_request; int version; scalar_t__ early_data_state; int rlayer; int * session; int msg_callback_arg; int (* msg_callback ) (int ,unsigned short,int ,scalar_t__*,int,TYPE_5__*,int ) ;int * enc_read_ctx; int * expand; TYPE_3__* method; scalar_t__ read_hash; TYPE_1__ statem; int write_hash; int enc_write_ctx; int first_packet; scalar_t__ server; } ;
struct TYPE_32__ {scalar_t__ type; unsigned int rec_version; size_t length; unsigned char* input; int* data; size_t orig_len; int read; scalar_t__ off; } ;
struct TYPE_31__ {TYPE_2__* ssl3_enc; } ;
struct TYPE_30__ {int (* mac ) (TYPE_5__*,TYPE_4__*,unsigned char*,int ) ;int (* enc ) (TYPE_5__*,TYPE_4__*,size_t,int ) ;} ;
typedef int SSL_SESSION ;
typedef TYPE_4__ SSL3_RECORD ;
typedef int SSL3_BUFFER ;
typedef TYPE_5__ SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 int FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int *,unsigned int*) ;
 int FUNC_9 (int *,unsigned int*) ;
 int FUNC_10 (int *,size_t*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 unsigned char* FUNC_13 (int *) ;
 size_t FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 TYPE_4__* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,size_t) ;
 int FUNC_24 (int *,scalar_t__) ;
 unsigned int VAR_9 ;
 size_t VAR_10 ;
 unsigned int VAR_11 ;
 size_t FUNC_25 (int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 scalar_t__ VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 unsigned int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_26 (TYPE_5__*) ;
 scalar_t__ FUNC_27 (TYPE_5__*) ;
 scalar_t__ FUNC_28 (TYPE_5__*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ FUNC_29 (TYPE_5__*) ;
 int FUNC_30 (TYPE_5__*,int ,int ,int ) ;
 unsigned int VAR_57 ;
 scalar_t__ FUNC_31 (int *) ;
 int FUNC_32 (TYPE_5__*,size_t,int ,int ) ;
 int FUNC_33 (int) ;
 scalar_t__ FUNC_34 (TYPE_5__*) ;
 scalar_t__ FUNC_35 (TYPE_5__*) ;
 int FUNC_36 (char*,...) ;
 int FUNC_37 (unsigned char*,TYPE_4__*,size_t) ;
 int FUNC_38 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_39 (TYPE_5__*,size_t,size_t,int,int,size_t*) ;
 scalar_t__ FUNC_40 (TYPE_5__*) ;
 scalar_t__ FUNC_41 (char*,char*,int) ;
 int FUNC_42 (int ,unsigned short,int ,unsigned char*,int,TYPE_5__*,int ) ;
 int FUNC_43 (TYPE_5__*,TYPE_4__*,unsigned char*,int ) ;
 int FUNC_44 (TYPE_5__*,TYPE_4__*,size_t,int ) ;
 int FUNC_45 (TYPE_5__*,TYPE_4__*,unsigned char*,int ) ;
 int FUNC_46 (int ,unsigned short,int ,scalar_t__*,int,TYPE_5__*,int ) ;

int FUNC_47(SSL *VAR_58)
{
    int VAR_59, VAR_60;
    int VAR_61;
    size_t VAR_62, VAR_63;
    SSL3_RECORD *VAR_64, *VAR_65;
    SSL3_BUFFER *VAR_66;
    SSL_SESSION *VAR_67;
    unsigned char *VAR_68;
    unsigned char VAR_69[VAR_6];
    unsigned int VAR_70;
    size_t VAR_71;
    int VAR_72;
    size_t VAR_73 = 0, VAR_74, VAR_75;
    PACKET VAR_76, VAR_77;
    size_t VAR_78;

    VAR_64 = FUNC_16(&VAR_58->rlayer);
    VAR_66 = FUNC_15(&VAR_58->rlayer);
    VAR_74 = VAR_58->max_pipelines;
    if (VAR_74 == 0)
        VAR_74 = 1;
    VAR_67 = VAR_58->session;

    do {
        VAR_65 = &VAR_64[VAR_73];


        if ((FUNC_17(&VAR_58->rlayer) != VAR_55) ||
            (FUNC_14(&VAR_58->rlayer)
             < VAR_17)) {
            size_t VAR_79;
            unsigned int VAR_80;

            VAR_60 = FUNC_39(VAR_58, VAR_17,
                               FUNC_25(VAR_66), 0,
                               VAR_73 == 0 ? 1 : 0, &VAR_63);
            if (VAR_60 <= 0)
                return VAR_60;
            FUNC_24(&VAR_58->rlayer, VAR_55);

            VAR_68 = FUNC_13(&VAR_58->rlayer);
            if (!FUNC_7(&VAR_76, FUNC_13(&VAR_58->rlayer),
                                 FUNC_14(&VAR_58->rlayer))) {
                FUNC_30(VAR_58, VAR_30, VAR_36,
                         VAR_3);
                return -1;
            }
            VAR_77 = VAR_76;
            if (!FUNC_10(&VAR_77, &VAR_79)
                    || !FUNC_8(&VAR_77, &VAR_80)) {
                FUNC_30(VAR_58, VAR_26, VAR_36,
                         VAR_3);
                return -1;
            }



            if (VAR_58->server && FUNC_19(&VAR_58->rlayer)
                    && (VAR_79 & 0x8000) != 0
                    && (VAR_80 == VAR_9)) {
                VAR_65->type = VAR_15;
                VAR_65->rec_version = VAR_11;

                VAR_65->length = VAR_79 & 0x7fff;

                if (VAR_65->length > FUNC_25(VAR_66)
                    - VAR_10) {
                    FUNC_30(VAR_58, VAR_33, VAR_36,
                             VAR_51);
                    return -1;
                }

                if (VAR_65->length < VAR_8) {
                    FUNC_30(VAR_58, VAR_26, VAR_36,
                             VAR_50);
                    return -1;
                }
            } else {

                if (VAR_58->msg_callback)
                    VAR_58->msg_callback(0, 0, VAR_16, VAR_68, 5, VAR_58,
                                    VAR_58->msg_callback_arg);


                if (!FUNC_8(&VAR_76, &VAR_80)
                        || !FUNC_9(&VAR_76, &VAR_70)
                        || !FUNC_10(&VAR_76, &VAR_65->length)) {
                    FUNC_30(VAR_58, VAR_26, VAR_36,
                             VAR_3);
                    return -1;
                }
                VAR_65->type = VAR_80;
                VAR_65->rec_version = VAR_70;
                if (!VAR_58->first_packet && !FUNC_27(VAR_58)
                        && VAR_58->hello_retry_request != VAR_38
                        && VAR_70 != (unsigned int)VAR_58->version) {
                    if ((VAR_58->version & 0xFF00) == (VAR_70 & 0xFF00)
                        && !VAR_58->enc_write_ctx && !VAR_58->write_hash) {
                        if (VAR_65->type == VAR_12) {
                            FUNC_30(VAR_58, VAR_31, VAR_36,
                                     VAR_54);
                            return -1;
                        }



                        VAR_58->version = (unsigned short)VAR_70;
                    }
                    FUNC_30(VAR_58, VAR_32, VAR_36,
                             VAR_54);
                    return -1;
                }

                if ((VAR_70 >> 8) != VAR_24) {
                    if (FUNC_19(&VAR_58->rlayer)) {


                        VAR_68 = FUNC_13(&VAR_58->rlayer);
                        if (FUNC_41((char *)VAR_68, "GET ", 4) == 0 ||
                            FUNC_41((char *)VAR_68, "POST ", 5) == 0 ||
                            FUNC_41((char *)VAR_68, "HEAD ", 5) == 0 ||
                            FUNC_41((char *)VAR_68, "PUT ", 4) == 0) {
                            FUNC_30(VAR_58, VAR_31, VAR_36,
                                     VAR_48);
                            return -1;
                        } else if (FUNC_41((char *)VAR_68, "CONNE", 5) == 0) {
                            FUNC_30(VAR_58, VAR_31, VAR_36,
                                     VAR_47);
                            return -1;
                        }


                        FUNC_30(VAR_58, VAR_31, VAR_36,
                                 VAR_54);
                        return -1;
                    } else {
                        FUNC_30(VAR_58, VAR_32,
                                 VAR_36,
                                 VAR_54);
                        return -1;
                    }
                }

                if (FUNC_27(VAR_58) && VAR_58->enc_read_ctx != ((void*)0)) {
                    if (VAR_65->type != VAR_13
                            && (VAR_65->type != VAR_14
                                || !FUNC_26(VAR_58))
                            && (VAR_65->type != VAR_12
                                || VAR_58->statem.enc_read_state
                                   != VAR_1)) {
                        FUNC_30(VAR_58, VAR_34,
                                 VAR_36, VAR_41);
                        return -1;
                    }
                    if (VAR_65->rec_version != VAR_57) {
                        FUNC_30(VAR_58, VAR_26, VAR_36,
                                 VAR_54);
                        return -1;
                    }
                }

                if (VAR_65->length >
                    FUNC_25(VAR_66) - VAR_17) {
                    FUNC_30(VAR_58, VAR_33, VAR_36,
                             VAR_51);
                    return -1;
                }
            }


        }

        if (FUNC_27(VAR_58)) {
            if (VAR_65->length > VAR_23) {
                FUNC_30(VAR_58, VAR_33, VAR_36,
                         VAR_46);
                return -1;
            }
        } else {
            size_t VAR_81 = VAR_21;






            if (VAR_58->expand == ((void*)0))
                VAR_81 -= VAR_20;


            if (VAR_65->length > VAR_81) {
                FUNC_30(VAR_58, VAR_33, VAR_36,
                         VAR_46);
                return -1;
            }
        }






        if (VAR_65->rec_version == VAR_11) {
            VAR_62 = VAR_65->length + VAR_10
                - VAR_17;
        } else {
            VAR_62 = VAR_65->length;
        }
        if (VAR_62 > 0) {


            VAR_60 = FUNC_39(VAR_58, VAR_62, VAR_62, 1, 0, &VAR_63);
            if (VAR_60 <= 0)
                return VAR_60;
        }


        FUNC_24(&VAR_58->rlayer, VAR_56);






        if (VAR_65->rec_version == VAR_11) {
            VAR_65->input =
                &(FUNC_13(&VAR_58->rlayer)[VAR_10]);
        } else {
            VAR_65->input =
                &(FUNC_13(&VAR_58->rlayer)[VAR_17]);
        }
        VAR_65->data = VAR_65->input;
        VAR_65->orig_len = VAR_65->length;


        VAR_65->read = 0;

        VAR_73++;


        FUNC_21(&VAR_58->rlayer);
        FUNC_11(&VAR_58->rlayer);
    } while (VAR_73 < VAR_74
             && VAR_65->type == VAR_13
             && FUNC_29(VAR_58)
             && VAR_58->enc_read_ctx != ((void*)0)
             && (FUNC_3(FUNC_1(VAR_58->enc_read_ctx))
                 & VAR_5)
             && FUNC_40(VAR_58));

    if (VAR_73 == 1
            && VAR_65->type == VAR_14
            && (FUNC_27(VAR_58) || VAR_58->hello_retry_request != VAR_37)
            && FUNC_26(VAR_58)) {



        if (VAR_65->length != 1 || VAR_65->data[0] != 0x01) {
            FUNC_30(VAR_58, VAR_29, VAR_36,
                     VAR_49);
            return -1;
        }




        VAR_65->type = VAR_15;
        FUNC_18(&VAR_58->rlayer);
        if (FUNC_12(&VAR_58->rlayer)
            > VAR_7) {
            FUNC_30(VAR_58, VAR_34, VAR_36,
                     VAR_53);
            return -1;
        }
        VAR_65->read = 1;
        FUNC_23(&VAR_58->rlayer, 1);

        return 1;
    }





    if (FUNC_28(VAR_58) && VAR_58->read_hash) {
        unsigned char *VAR_82;

        VAR_72 = FUNC_5(VAR_58->read_hash);
        if (!FUNC_33(VAR_72 >= 0 && VAR_72 <= VAR_6)) {
                FUNC_30(VAR_58, VAR_30, VAR_36,
                         VAR_2);
                return -1;
        }
        VAR_71 = (size_t)VAR_72;
        for (VAR_75 = 0; VAR_75 < VAR_73; VAR_75++) {
            VAR_65 = &VAR_64[VAR_75];

            if (VAR_65->length < VAR_71) {
                FUNC_30(VAR_58, VAR_26, VAR_36,
                         VAR_50);
                return -1;
            }
            VAR_65->length -= VAR_71;
            VAR_82 = VAR_65->data + VAR_65->length;
            VAR_61 = VAR_58->method->ssl3_enc->mac(VAR_58, VAR_65, VAR_69, 0 );
            if (VAR_61 == 0 || FUNC_0(VAR_69, VAR_82, VAR_71) != 0) {
                FUNC_30(VAR_58, VAR_25, VAR_36,
                       VAR_45);
                return -1;
            }
        }
    }

    VAR_78 = VAR_64[0].length;

    VAR_59 = VAR_58->method->ssl3_enc->enc(VAR_58, VAR_64, VAR_73, 0);







    if (VAR_59 == 0) {
        if (FUNC_34(VAR_58)) {

            return -1;
        }
        if (VAR_73 == 1 && FUNC_35(VAR_58)) {





            VAR_65 = &VAR_64[0];

            if (!FUNC_32(VAR_58, VAR_65->length,
                                     VAR_0, 0)) {

                return -1;
            }

            VAR_65->length = 0;
            VAR_65->read = 1;
            FUNC_23(&VAR_58->rlayer, 1);
            FUNC_22(&VAR_58->rlayer);
            return 1;
        }
        FUNC_30(VAR_58, VAR_28, VAR_36,
                 VAR_42);
        return -1;
    }
    if ((VAR_67 != ((void*)0)) &&
        (VAR_58->enc_read_ctx != ((void*)0)) &&
        (!FUNC_28(VAR_58) && FUNC_4(VAR_58->read_hash) != ((void*)0))) {

        unsigned char *VAR_83 = ((void*)0);
        unsigned char VAR_84[VAR_6];

        VAR_71 = FUNC_5(VAR_58->read_hash);
        if (!FUNC_33(VAR_71 <= VAR_6)) {
            FUNC_30(VAR_58, VAR_30, VAR_36,
                     VAR_3);
            return -1;
        }

        for (VAR_75 = 0; VAR_75 < VAR_73; VAR_75++) {
            VAR_65 = &VAR_64[VAR_75];






            if (VAR_65->orig_len < VAR_71 ||

                (FUNC_2(VAR_58->enc_read_ctx) == VAR_4 &&
                 VAR_65->orig_len < VAR_71 + 1)) {
                FUNC_30(VAR_58, VAR_26, VAR_36,
                         VAR_50);
                return -1;
            }

            if (FUNC_2(VAR_58->enc_read_ctx) == VAR_4) {






                VAR_83 = VAR_84;
                if (!FUNC_37(VAR_84, VAR_65, VAR_71)) {
                    FUNC_30(VAR_58, VAR_30, VAR_36,
                             VAR_3);
                    return -1;
                }
                VAR_65->length -= VAR_71;
            } else {





                VAR_65->length -= VAR_71;
                VAR_83 = &VAR_65->data[VAR_65->length];
            }

            VAR_61 = VAR_58->method->ssl3_enc->mac(VAR_58, VAR_65, VAR_69, 0 );
            if (VAR_61 == 0 || VAR_83 == ((void*)0)
                || FUNC_0(VAR_69, VAR_83, (size_t)VAR_71) != 0)
                VAR_59 = -1;
            if (VAR_65->length > VAR_19 + VAR_71)
                VAR_59 = -1;
        }
    }

    if (VAR_59 < 0) {
        if (FUNC_34(VAR_58)) {

            return -1;
        }
        if (VAR_73 == 1 && FUNC_35(VAR_58)) {
            if (!FUNC_32(VAR_58, VAR_78,
                                     VAR_0, 0)) {

                return -1;
            }

            VAR_65 = &VAR_64[0];
            VAR_65->length = 0;
            VAR_65->read = 1;
            FUNC_23(&VAR_58->rlayer, 1);
            FUNC_22(&VAR_58->rlayer);
            return 1;
        }







        FUNC_30(VAR_58, VAR_25, VAR_36,
                 VAR_45);
        return -1;
    }

    for (VAR_75 = 0; VAR_75 < VAR_73; VAR_75++) {
        VAR_65 = &VAR_64[VAR_75];


        if (VAR_58->expand != ((void*)0)) {
            if (VAR_65->length > VAR_19) {
                FUNC_30(VAR_58, VAR_33, VAR_36,
                         VAR_43);
                return -1;
            }
            if (!FUNC_38(VAR_58, VAR_65)) {
                FUNC_30(VAR_58, VAR_27, VAR_36,
                         VAR_39);
                return -1;
            }
        }

        if (FUNC_27(VAR_58)
                && VAR_58->enc_read_ctx != ((void*)0)
                && VAR_65->type != VAR_12) {
            size_t VAR_85;

            if (VAR_65->length == 0
                    || VAR_65->type != VAR_13) {
                FUNC_30(VAR_58, VAR_34, VAR_36,
                         VAR_41);
                return -1;
            }


            for (VAR_85 = VAR_65->length - 1; VAR_85 > 0 && VAR_65->data[VAR_85] == 0;
                 VAR_85--)
                continue;

            VAR_65->length = VAR_85;
            VAR_65->type = VAR_65->data[VAR_85];
            if (VAR_65->type != VAR_13
                    && VAR_65->type != VAR_12
                    && VAR_65->type != VAR_15) {
                FUNC_30(VAR_58, VAR_34, VAR_36,
                         VAR_41);
                return -1;
            }
            if (VAR_58->msg_callback)
                VAR_58->msg_callback(0, VAR_58->version, VAR_18,
                                &VAR_65->data[VAR_85], 1, VAR_58, VAR_58->msg_callback_arg);
        }





        if (FUNC_27(VAR_58)
                && (VAR_65->type == VAR_15
                    || VAR_65->type == VAR_12)
                && VAR_65->length == 0) {
            FUNC_30(VAR_58, VAR_34, VAR_36,
                     VAR_40);
            return -1;
        }

        if (VAR_65->length > VAR_22) {
            FUNC_30(VAR_58, VAR_33, VAR_36,
                     VAR_44);
            return -1;
        }


        if (VAR_58->session != ((void*)0) && FUNC_31(VAR_58->session)
                && VAR_65->length > FUNC_6(VAR_58->session)) {
            FUNC_30(VAR_58, VAR_33, VAR_36,
                     VAR_44);
            return -1;
        }

        VAR_65->off = 0;
        if (VAR_65->length == 0) {
            FUNC_18(&VAR_58->rlayer);
            if (FUNC_12(&VAR_58->rlayer)
                > VAR_7) {
                FUNC_30(VAR_58, VAR_34, VAR_36,
                         VAR_52);
                return -1;
            }
        } else {
            FUNC_20(&VAR_58->rlayer);
        }
    }

    if (VAR_58->early_data_state == VAR_35) {
        VAR_65 = &VAR_64[0];
        if (VAR_65->type == VAR_13
                && !FUNC_32(VAR_58, VAR_65->length, 0, 0)) {

            return -1;
        }
    }

    FUNC_23(&VAR_58->rlayer, VAR_73);
    return 1;
}
