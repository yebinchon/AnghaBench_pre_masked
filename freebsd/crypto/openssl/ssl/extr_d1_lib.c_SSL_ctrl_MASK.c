
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


typedef int WPACKET ;
struct TYPE_27__ {int version; int rlayer; TYPE_3__* d1; int msg_callback_arg; int (* msg_callback ) (int,int,unsigned int,unsigned char*,int,TYPE_4__*,int ) ;TYPE_2__* method; TYPE_1__* ctx; int * handshake_func; } ;
struct TYPE_26__ {int handshake_read_seq; int handshake_write_seq; int next_handshake_write_seq; } ;
struct TYPE_25__ {scalar_t__ version; } ;
struct TYPE_24__ {unsigned char* buf; } ;
struct TYPE_23__ {scalar_t__ (* app_verify_cookie_cb ) (TYPE_4__*,unsigned char*,unsigned int) ;scalar_t__ (* app_gen_cookie_cb ) (TYPE_4__*,unsigned char*,unsigned int*) ;} ;
struct TYPE_22__ {unsigned char* buf; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int BIO_ADDR ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *,unsigned char*) ;
 scalar_t__ FUNC_10 (unsigned int,unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *,unsigned char*,int) ;
 int FUNC_13 (int *,unsigned char*,int) ;
 unsigned char* FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,unsigned int*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,unsigned int*) ;
 int FUNC_20 (int *,size_t*) ;
 int FUNC_21 (int *,int *,size_t) ;
 size_t FUNC_22 (int *) ;
 TYPE_20__* FUNC_23 (int *) ;
 TYPE_19__* FUNC_24 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 size_t VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_25 (TYPE_4__*) ;
 int * FUNC_26 (TYPE_4__*) ;
 int * FUNC_27 (TYPE_4__*) ;
 int FUNC_28 (TYPE_4__*) ;
 int FUNC_29 (TYPE_4__*,int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *,size_t*) ;
 int FUNC_35 (int *,unsigned char*,scalar_t__,int ) ;
 int FUNC_36 (int *,unsigned char*,int) ;
 int FUNC_37 (int *,unsigned int) ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int *,unsigned int) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (int *) ;
 int FUNC_42 () ;
 int FUNC_43 (TYPE_4__*,size_t,unsigned char*,size_t) ;
 int FUNC_44 (int *,unsigned char*,unsigned int) ;
 int FUNC_45 (unsigned char*,unsigned char*,int) ;
 int FUNC_46 (TYPE_4__*) ;
 int FUNC_47 (TYPE_4__*) ;
 scalar_t__ FUNC_48 (TYPE_4__*) ;
 int FUNC_49 (int,int,unsigned int,unsigned char*,int,TYPE_4__*,int ) ;
 int FUNC_50 (int,int,unsigned int,unsigned char const*,size_t,TYPE_4__*,int ) ;
 scalar_t__ FUNC_51 (TYPE_4__*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_52 (TYPE_4__*,unsigned char*,unsigned int*) ;
 int FUNC_53 (int,int,unsigned int,unsigned char*,int,TYPE_4__*,int ) ;

int FUNC_54(SSL *VAR_32, BIO_ADDR *VAR_33)
{
    int VAR_34, VAR_35, VAR_36 = 0;
    unsigned char VAR_37[VAR_0];
    unsigned char VAR_38[VAR_11];
    const unsigned char *VAR_39;
    unsigned char *VAR_40, *VAR_41;
    size_t VAR_42, VAR_43, VAR_44, VAR_45, VAR_46 = 0;
    unsigned int VAR_47, VAR_48, VAR_49, VAR_50, VAR_51, VAR_52;
    BIO *VAR_53, *VAR_54;
    BIO_ADDR *VAR_55 = ((void*)0);
    PACKET VAR_56, VAR_57, VAR_58, VAR_59, VAR_60;

    if (VAR_32->handshake_func == ((void*)0)) {

        FUNC_28(VAR_32);
    }


    if (!FUNC_25(VAR_32))
        return -1;

    FUNC_11();

    VAR_53 = FUNC_26(VAR_32);
    VAR_54 = FUNC_27(VAR_32);

    if (!VAR_53 || !VAR_54) {
        FUNC_30(VAR_19, VAR_22);
        return -1;
    }
    if ((VAR_32->version & 0xff00) != (VAR_4 & 0xff00)) {
        FUNC_30(VAR_19, VAR_30);
        return -1;
    }

    if (!FUNC_47(VAR_32)) {

        return -1;
    }
    VAR_40 = FUNC_23(&VAR_32->rlayer)->buf;
    VAR_41 = FUNC_24(&VAR_32->rlayer)[0].buf;
    VAR_40 += VAR_46;

    do {


        FUNC_42();
        VAR_35 = FUNC_6(VAR_53, VAR_40, VAR_18
                                + VAR_3);
        if (VAR_35 <= 0) {
            if (FUNC_7(VAR_53)) {

                goto end;
            }
            return -1;
        }

        if (!FUNC_12(&VAR_56, VAR_40, VAR_35)) {
            FUNC_30(VAR_19, VAR_7);
            return -1;
        }
        if (VAR_35 < VAR_3) {
            FUNC_30(VAR_19, VAR_28);
            goto end;
        }

        if (VAR_32->msg_callback)
            VAR_32->msg_callback(0, 0, VAR_16, VAR_40,
                            VAR_3, VAR_32, VAR_32->msg_callback_arg);


        if (!FUNC_16(&VAR_56, &VAR_47)
            || !FUNC_16(&VAR_56, &VAR_48)) {
            FUNC_30(VAR_19, VAR_26);
            goto end;
        }

        if (VAR_47 != VAR_15) {
            FUNC_30(VAR_19, VAR_29);
            goto end;
        }





        if (VAR_48 != VAR_5) {
            FUNC_30(VAR_19, VAR_21);
            goto end;
        }

        if (!FUNC_15(&VAR_56, 1)

            || !FUNC_13(&VAR_56, VAR_38, VAR_11)
            || !FUNC_18(&VAR_56, &VAR_57)) {
            FUNC_30(VAR_19, VAR_26);
            goto end;
        }
        VAR_45 = FUNC_22(&VAR_57);






        if (VAR_38[0] != 0 || VAR_38[1] != 0) {
            FUNC_30(VAR_19, VAR_29);
            goto end;
        }


        VAR_39 = FUNC_14(&VAR_57);


        if (!FUNC_16(&VAR_57, &VAR_50)
            || !FUNC_20(&VAR_57, &VAR_44)
            || !FUNC_19(&VAR_57, &VAR_49)
            || !FUNC_20(&VAR_57, &VAR_42)
            || !FUNC_20(&VAR_57, &VAR_43)
            || !FUNC_21(&VAR_57, &VAR_58, VAR_43)
            || FUNC_22(&VAR_57) != 0) {
            FUNC_30(VAR_19, VAR_26);
            goto end;
        }

        if (VAR_50 != VAR_13) {
            FUNC_30(VAR_19, VAR_29);
            goto end;
        }


        if (VAR_49 > 2) {
            FUNC_30(VAR_19, VAR_25);
            goto end;
        }
        if (VAR_42 != 0 || VAR_43 > VAR_44) {

            FUNC_30(VAR_19, VAR_24);
            goto end;
        }

        if (VAR_32->msg_callback)
            VAR_32->msg_callback(0, VAR_32->version, VAR_15, VAR_39,
                            VAR_43 + VAR_1, VAR_32,
                            VAR_32->msg_callback_arg);

        if (!FUNC_19(&VAR_58, &VAR_51)) {
            FUNC_30(VAR_19, VAR_26);
            goto end;
        }




        if (FUNC_10(VAR_51, (unsigned int)VAR_32->method->version) &&
            VAR_32->method->version != VAR_6) {
            FUNC_30(VAR_19, VAR_31);
            goto end;
        }

        if (!FUNC_15(&VAR_58, VAR_14)
            || !FUNC_17(&VAR_58, &VAR_59)
            || !FUNC_17(&VAR_58, &VAR_60)) {




            FUNC_30(VAR_19, VAR_26);
            goto end;
        }





        if (FUNC_22(&VAR_60) == 0) {
            VAR_34 = VAR_9;
        } else {



            if (VAR_32->ctx->app_verify_cookie_cb == ((void*)0)) {
                FUNC_30(VAR_19, VAR_27);

                return -1;
            }
            if (VAR_32->ctx->app_verify_cookie_cb(VAR_32, FUNC_14(&VAR_60),
                    (unsigned int)FUNC_22(&VAR_60)) == 0) {




                VAR_34 = VAR_9;
            } else {

                VAR_34 = VAR_10;
            }
        }

        if (VAR_34 == VAR_9) {
            WPACKET VAR_61;
            unsigned int VAR_62;
            size_t VAR_63;
            if (VAR_32->ctx->app_gen_cookie_cb == ((void*)0) ||
                VAR_32->ctx->app_gen_cookie_cb(VAR_32, VAR_37, &VAR_52) == 0 ||
                VAR_52 > 255) {
                FUNC_30(VAR_19, VAR_23);

                return -1;
            }






            VAR_62 = (VAR_32->method->version == VAR_6) ? VAR_4
                                                               : VAR_32->version;


            if (!FUNC_35(&VAR_61,
                                         VAR_41,
                                         FUNC_48(VAR_32)
                                         + VAR_3,
                                         0)
                    || !FUNC_39(&VAR_61, VAR_15)
                    || !FUNC_37(&VAR_61, VAR_62)




                    || !FUNC_36(&VAR_61, VAR_38, VAR_11)

                    || !FUNC_40(&VAR_61)

                    || !FUNC_39(&VAR_61,
                                             VAR_2)






                    || !FUNC_38(&VAR_61, 0)




                    || !FUNC_37(&VAR_61, 0)




                    || !FUNC_38(&VAR_61, 0)






                    || !FUNC_41(&VAR_61)

                    || !FUNC_44(&VAR_61, VAR_37, VAR_52)

                    || !FUNC_32(&VAR_61)

                    || !FUNC_32(&VAR_61)
                    || !FUNC_34(&VAR_61, &VAR_63)
                    || !FUNC_33(&VAR_61)) {
                FUNC_30(VAR_19, VAR_7);
                FUNC_31(&VAR_61);

                return -1;
            }
            FUNC_45(&VAR_41[VAR_3 + 1],
                   &VAR_41[VAR_3 + VAR_1 - 3],
                   3);

            if (VAR_32->msg_callback)
                VAR_32->msg_callback(1, 0, VAR_16, VAR_40,
                                VAR_3, VAR_32, VAR_32->msg_callback_arg);

            if ((VAR_55 = FUNC_2()) == ((void*)0)) {
                FUNC_30(VAR_19, VAR_8);
                goto end;
            }






            if (FUNC_3(VAR_53, VAR_55) > 0) {
                (void)FUNC_4(VAR_54, VAR_55);
            }
            FUNC_1(VAR_55);
            VAR_55 = ((void*)0);


            if (FUNC_8(VAR_54, VAR_41, VAR_63) < (int)VAR_63) {
                if (FUNC_7(VAR_54)) {




                    goto end;
                }
                return -1;
            }

            if (FUNC_5(VAR_54) <= 0) {
                if (FUNC_7(VAR_54)) {




                    goto end;
                }
                return -1;
            }
        }
    } while (VAR_34 != VAR_10);




    VAR_32->d1->handshake_read_seq = 1;
    VAR_32->d1->handshake_write_seq = 1;
    VAR_32->d1->next_handshake_write_seq = 1;
    FUNC_9(&VAR_32->rlayer, VAR_38);





    FUNC_29(VAR_32, VAR_20);





    FUNC_46(VAR_32);




    if (FUNC_3(VAR_53, VAR_33) <= 0)
        FUNC_0(VAR_33);


    if (!FUNC_43(VAR_32, VAR_45, VAR_38, VAR_46))
        return -1;

    VAR_36 = 1;
 end:
    FUNC_1(VAR_55);
    return VAR_36;
}
