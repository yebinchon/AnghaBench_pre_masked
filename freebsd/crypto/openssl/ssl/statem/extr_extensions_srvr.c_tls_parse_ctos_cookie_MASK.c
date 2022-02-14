
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int hrr ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_15__ {int cookieok; } ;
struct TYPE_21__ {unsigned int version; int hello_retry_request; TYPE_2__ ext; TYPE_7__* s3; TYPE_1__* method; int tmp_session_id_len; int tmp_session_id; TYPE_3__* ctx; TYPE_5__* session_ctx; } ;
struct TYPE_19__ {scalar_t__ new_cipher; } ;
struct TYPE_20__ {int flags; unsigned int group_id; TYPE_6__ tmp; } ;
struct TYPE_17__ {int cookie_hmac_key; } ;
struct TYPE_18__ {TYPE_4__ ext; } ;
struct TYPE_16__ {scalar_t__ (* verify_stateless_cookie_cb ) (TYPE_8__*,unsigned char*,int) ;} ;
struct TYPE_14__ {int (* put_cipher_by_char ) (scalar_t__,int *,size_t*) ;} ;
typedef TYPE_8__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;
typedef int EVP_MD_CTX ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int *,int ,int) ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (int *,int *) ;
 unsigned char* FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,unsigned int*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,unsigned int*) ;
 int FUNC_15 (int *,unsigned long*) ;
 int FUNC_16 (int *) ;
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
 int VAR_15 ;
 int FUNC_17 (TYPE_8__*,int ,int ,int ) ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,size_t*) ;
 int FUNC_22 (int *,unsigned char*,int,int ) ;
 int FUNC_23 (int *,int ,int ) ;
 int FUNC_24 (int *,unsigned int) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *,unsigned char const*,size_t) ;
 int FUNC_29 (int *,int ,int ) ;
 int FUNC_30 (TYPE_8__*,unsigned char*,int,unsigned char*,size_t) ;
 int VAR_22 ;
 scalar_t__ FUNC_31 (TYPE_8__*,unsigned char const*,int ) ;
 scalar_t__ FUNC_32 (TYPE_8__*,unsigned char*,int) ;
 int FUNC_33 (scalar_t__,int *,size_t*) ;
 scalar_t__ FUNC_34 (int *) ;

int FUNC_35(SSL *VAR_23, PACKET *VAR_24, unsigned int VAR_25, X509 *VAR_26,
                          size_t VAR_27)
{

    unsigned int VAR_28, VAR_29, VAR_30, VAR_31;
    EVP_MD_CTX *VAR_32;
    EVP_PKEY *VAR_33;
    PACKET VAR_34, VAR_35, VAR_36, VAR_37;
    WPACKET VAR_38;
    const unsigned char *VAR_39, *VAR_40, *VAR_41;
    unsigned char VAR_42[VAR_5];
    unsigned char VAR_43[VAR_4];
    size_t VAR_44, VAR_45, VAR_46, VAR_47;
    unsigned long VAR_48, VAR_49;


    if (VAR_23->ctx->verify_stateless_cookie_cb == ((void*)0)
            || (VAR_23->s3->flags & VAR_18) == 0)
        return 1;

    if (!FUNC_8(VAR_24, &VAR_34)) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }

    VAR_35 = VAR_34;
    VAR_39 = FUNC_9(&VAR_35);
    VAR_44 = FUNC_16(&VAR_35);
    if (VAR_44 < VAR_5
            || !FUNC_10(&VAR_35, VAR_44 - VAR_5)) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }
    VAR_40 = FUNC_9(&VAR_35);


    VAR_32 = FUNC_3();
    VAR_33 = FUNC_6(VAR_3, ((void*)0),
                                        VAR_23->session_ctx->ext.cookie_hmac_key,
                                        sizeof(VAR_23->session_ctx->ext
                                               .cookie_hmac_key));
    if (VAR_32 == ((void*)0) || VAR_33 == ((void*)0)) {
        FUNC_4(VAR_32);
        FUNC_5(VAR_33);
        FUNC_17(VAR_23, VAR_10, VAR_11,
                 VAR_2);
        return 0;
    }

    VAR_45 = VAR_5;
    if (FUNC_2(VAR_32, ((void*)0), FUNC_7(), ((void*)0), VAR_33) <= 0
            || FUNC_1(VAR_32, VAR_42, &VAR_45, VAR_39,
                              VAR_44 - VAR_5) <= 0
            || VAR_45 != VAR_5) {
        FUNC_4(VAR_32);
        FUNC_5(VAR_33);
        FUNC_17(VAR_23, VAR_10, VAR_11,
                 VAR_1);
        return 0;
    }

    FUNC_4(VAR_32);
    FUNC_5(VAR_33);

    if (FUNC_0(VAR_42, VAR_40, VAR_5) != 0) {
        FUNC_17(VAR_23, VAR_9, VAR_11,
                 VAR_14);
        return 0;
    }

    if (!FUNC_14(&VAR_34, &VAR_28)) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }

    if (VAR_28 != VAR_0)
        return 1;







    if (!FUNC_14(&VAR_34, &VAR_29)) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }
    if (VAR_29 != VAR_17) {
        FUNC_17(VAR_23, VAR_9, VAR_11,
                 VAR_13);
        return 0;
    }

    if (!FUNC_14(&VAR_34, &VAR_31)) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }

    VAR_41 = FUNC_9(&VAR_34);
    if (!FUNC_10(&VAR_34, 2)) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }
    if (VAR_31 != VAR_23->s3->group_id
            || VAR_23->s3->tmp.new_cipher
               != FUNC_31(VAR_23, VAR_41, 0)) {




        FUNC_17(VAR_23, VAR_9, VAR_11,
                 VAR_12);
        return 0;
    }

    if (!FUNC_11(&VAR_34, &VAR_30)
            || !FUNC_15(&VAR_34, &VAR_48)
            || !FUNC_13(&VAR_34, &VAR_36)
            || !FUNC_12(&VAR_34, &VAR_37)
            || FUNC_16(&VAR_34) != VAR_5) {
        FUNC_17(VAR_23, VAR_8, VAR_11,
                 VAR_15);
        return 0;
    }


    VAR_49 = (unsigned long)FUNC_34(((void*)0));
    if (VAR_48 > VAR_49 || (VAR_49 - VAR_48) > 600) {

        return 1;
    }


    if (VAR_23->ctx->verify_stateless_cookie_cb(VAR_23, FUNC_9(&VAR_37),
                                     FUNC_16(&VAR_37)) == 0) {
        FUNC_17(VAR_23, VAR_9, VAR_11,
                 VAR_14);
        return 0;
    }






    if (!FUNC_22(&VAR_38, VAR_43, sizeof(VAR_43), 0)) {
        FUNC_17(VAR_23, VAR_10, VAR_11,
                 VAR_1);
        return 0;
    }
    if (!FUNC_25(&VAR_38, VAR_6)
            || !FUNC_27(&VAR_38)
            || !FUNC_24(&VAR_38, VAR_16)
            || !FUNC_23(&VAR_38, VAR_22, VAR_7)
            || !FUNC_29(&VAR_38, VAR_23->tmp_session_id,
                                      VAR_23->tmp_session_id_len)
            || !VAR_23->method->put_cipher_by_char(VAR_23->s3->tmp.new_cipher, &VAR_38,
                                              &VAR_47)
            || !FUNC_25(&VAR_38, 0)
            || !FUNC_26(&VAR_38)) {
        FUNC_18(&VAR_38);
        FUNC_17(VAR_23, VAR_10, VAR_11,
                 VAR_1);
        return 0;
    }
    if (!FUNC_24(&VAR_38, VAR_21)
            || !FUNC_26(&VAR_38)
            || !FUNC_24(&VAR_38, VAR_23->version)
            || !FUNC_19(&VAR_38)) {
        FUNC_18(&VAR_38);
        FUNC_17(VAR_23, VAR_10, VAR_11,
                 VAR_1);
        return 0;
    }
    if (VAR_30) {
        if (!FUNC_24(&VAR_38, VAR_20)
                || !FUNC_26(&VAR_38)
                || !FUNC_24(&VAR_38, VAR_23->s3->group_id)
                || !FUNC_19(&VAR_38)) {
            FUNC_18(&VAR_38);
            FUNC_17(VAR_23, VAR_10, VAR_11,
                     VAR_1);
            return 0;
        }
    }
    if (!FUNC_24(&VAR_38, VAR_19)
            || !FUNC_26(&VAR_38)
            || !FUNC_28(&VAR_38, VAR_39, VAR_44)
            || !FUNC_19(&VAR_38)
            || !FUNC_19(&VAR_38)
            || !FUNC_19(&VAR_38)
            || !FUNC_21(&VAR_38, &VAR_46)
            || !FUNC_20(&VAR_38)) {
        FUNC_18(&VAR_38);
        FUNC_17(VAR_23, VAR_10, VAR_11,
                 VAR_1);
        return 0;
    }


    if (!FUNC_30(VAR_23, FUNC_9(&VAR_36),
                                       FUNC_16(&VAR_36), VAR_43,
                                       VAR_46)) {

        return 0;
    }


    VAR_23->hello_retry_request = 1;

    VAR_23->ext.cookieok = 1;


    return 1;
}
