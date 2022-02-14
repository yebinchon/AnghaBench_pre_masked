
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {int rlayer; int * expand; TYPE_2__* method; int * enc_read_ctx; scalar_t__ read_hash; int * session; } ;
struct TYPE_22__ {unsigned char* input; size_t length; unsigned char* data; size_t orig_len; scalar_t__ off; } ;
struct TYPE_21__ {TYPE_1__* ssl3_enc; } ;
struct TYPE_20__ {int (* mac ) (TYPE_4__*,TYPE_3__*,unsigned char*,int ) ;int (* enc ) (TYPE_4__*,TYPE_3__*,int,int ) ;} ;
typedef int SSL_SESSION ;
typedef TYPE_3__ SSL3_RECORD ;
typedef TYPE_4__ SSL ;
typedef int DTLS1_BITMAP ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned char*,size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 unsigned char* FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (unsigned char*,TYPE_3__*,size_t) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,TYPE_3__*,unsigned char*,int ) ;
 int FUNC_16 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_17 (TYPE_4__*,TYPE_3__*,unsigned char*,int ) ;

int FUNC_18(SSL *VAR_20, DTLS1_BITMAP *VAR_21)
{
    int VAR_22;
    int VAR_23;
    SSL_SESSION *VAR_24;
    SSL3_RECORD *VAR_25;
    int VAR_26;
    size_t VAR_27;
    unsigned char VAR_28[VAR_4];

    VAR_25 = FUNC_5(&VAR_20->rlayer);
    VAR_24 = VAR_20->session;





    VAR_25->input = &(FUNC_4(&VAR_20->rlayer)[VAR_0]);
    if (VAR_25->length > VAR_6) {
        FUNC_8(VAR_20, VAR_12, VAR_13,
                 VAR_18);
        return 0;
    }


    VAR_25->data = VAR_25->input;
    VAR_25->orig_len = VAR_25->length;

    if (FUNC_7(VAR_20) && VAR_20->read_hash) {
        unsigned char *VAR_29;
        VAR_27 = FUNC_3(VAR_20->read_hash);
        if (!FUNC_10(VAR_27 <= VAR_4)) {
            FUNC_8(VAR_20, VAR_11, VAR_13,
                     VAR_2);
            return 0;
        }
        if (VAR_25->orig_len < VAR_27) {
            FUNC_8(VAR_20, VAR_9, VAR_13,
                     VAR_19);
            return 0;
        }
        VAR_25->length -= VAR_27;
        VAR_29 = VAR_25->data + VAR_25->length;
        VAR_22 = VAR_20->method->ssl3_enc->mac(VAR_20, VAR_25, VAR_28, 0 );
        if (VAR_22 == 0 || FUNC_0(VAR_28, VAR_29, (size_t)VAR_27) != 0) {
            FUNC_8(VAR_20, VAR_8, VAR_13,
                   VAR_17);
            return 0;
        }
    }

    VAR_23 = VAR_20->method->ssl3_enc->enc(VAR_20, VAR_25, 1, 0);






    if (VAR_23 == 0) {
        if (FUNC_11(VAR_20)) {

            return 0;
        }

        VAR_25->length = 0;
        FUNC_6(&VAR_20->rlayer);
        return 0;
    }
    if ((VAR_24 != ((void*)0)) && !FUNC_7(VAR_20) &&
        (VAR_20->enc_read_ctx != ((void*)0)) && (FUNC_2(VAR_20->read_hash) != ((void*)0))) {

        unsigned char *VAR_30 = ((void*)0);
        unsigned char VAR_31[VAR_4];


        VAR_26 = FUNC_3(VAR_20->read_hash);
        if (VAR_26 < 0) {
            FUNC_8(VAR_20, VAR_11, VAR_13,
                     VAR_1);
            return 0;
        }
        VAR_27 = (size_t)VAR_26;
        if (!FUNC_10(VAR_27 <= VAR_4)) {
            FUNC_8(VAR_20, VAR_11, VAR_13,
                     VAR_2);
            return 0;
        }







        if (VAR_25->orig_len < VAR_27 ||

            (FUNC_1(VAR_20->enc_read_ctx) == VAR_3 &&
             VAR_25->orig_len < VAR_27 + 1)) {
            FUNC_8(VAR_20, VAR_9, VAR_13,
                     VAR_19);
            return 0;
        }

        if (FUNC_1(VAR_20->enc_read_ctx) == VAR_3) {






            VAR_30 = VAR_31;
            if (!FUNC_13(VAR_31, VAR_25, VAR_27)) {
                FUNC_8(VAR_20, VAR_11, VAR_13,
                         VAR_2);
                return 0;
            }
            VAR_25->length -= VAR_27;
        } else {





            VAR_25->length -= VAR_27;
            VAR_30 = &VAR_25->data[VAR_25->length];
        }

        VAR_22 = VAR_20->method->ssl3_enc->mac(VAR_20, VAR_25, VAR_28, 0 );
        if (VAR_22 == 0 || VAR_30 == ((void*)0)
            || FUNC_0(VAR_28, VAR_30, VAR_27) != 0)
            VAR_23 = -1;
        if (VAR_25->length > VAR_5 + VAR_27)
            VAR_23 = -1;
    }

    if (VAR_23 < 0) {

        VAR_25->length = 0;
        FUNC_6(&VAR_20->rlayer);
        return 0;
    }


    if (VAR_20->expand != ((void*)0)) {
        if (VAR_25->length > VAR_5) {
            FUNC_8(VAR_20, VAR_12, VAR_13,
                     VAR_15);
            return 0;
        }
        if (!FUNC_14(VAR_20, VAR_25)) {
            FUNC_8(VAR_20, VAR_10,
                     VAR_13, VAR_14);
            return 0;
        }
    }

    if (VAR_25->length > VAR_7) {
        FUNC_8(VAR_20, VAR_12, VAR_13,
                 VAR_16);
        return 0;
    }

    VAR_25->off = 0;
    FUNC_6(&VAR_20->rlayer);


    FUNC_9(VAR_20, VAR_21);

    return 1;
}
