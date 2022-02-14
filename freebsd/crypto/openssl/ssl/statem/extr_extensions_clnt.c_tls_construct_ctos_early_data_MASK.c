
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int psk ;
typedef int identity ;
typedef int X509 ;
typedef int WPACKET ;
struct TYPE_18__ {int early_data_ok; int early_data; int alpn_len; int * alpn; int * hostname; } ;
struct TYPE_20__ {scalar_t__ hello_retry_request; size_t (* psk_client_callback ) (TYPE_4__*,int *,char*,int,unsigned char*,int) ;size_t psksession_id_len; scalar_t__ early_data_state; scalar_t__ max_early_data; TYPE_2__ ext; TYPE_3__* session; int * psksession_id; TYPE_3__* psksession; int (* psk_use_session_cb ) (TYPE_4__*,int const*,unsigned char const**,size_t*,TYPE_3__**) ;} ;
struct TYPE_17__ {scalar_t__ max_early_data; int alpn_selected_len; int * alpn_selected; int * hostname; } ;
struct TYPE_19__ {scalar_t__ ssl_version; TYPE_1__ ext; } ;
typedef TYPE_3__ SSL_SESSION ;
typedef int SSL_CIPHER ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;
typedef int EXT_RETURN ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned char const*,size_t) ;
 int FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_6 (TYPE_4__*,unsigned char const*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,unsigned char*,size_t) ;
 int FUNC_10 (TYPE_3__*,int const*) ;
 int FUNC_11 (TYPE_3__*,scalar_t__) ;
 int FUNC_12 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int ,int) ;
 int * FUNC_17 (TYPE_4__*) ;
 scalar_t__ FUNC_18 (int *,int *) ;
 size_t FUNC_19 (char*) ;
 int FUNC_20 (TYPE_4__*,int const*,unsigned char const**,size_t*,TYPE_3__**) ;
 size_t FUNC_21 (TYPE_4__*,int *,char*,int,unsigned char*,int) ;

EXT_RETURN FUNC_22(SSL *VAR_17, WPACKET *VAR_18,
                                         unsigned int VAR_19, X509 *VAR_20,
                                         size_t VAR_21)
{

    char VAR_22[VAR_4 + 1];

    const unsigned char *VAR_23 = ((void*)0);
    size_t VAR_24 = 0;
    SSL_SESSION *VAR_25 = ((void*)0);
    SSL_SESSION *VAR_26 = ((void*)0);
    const EVP_MD *VAR_27 = ((void*)0);

    if (VAR_17->hello_retry_request == VAR_11)
        VAR_27 = FUNC_17(VAR_17);

    if (VAR_17->psk_use_session_cb != ((void*)0)
            && (!VAR_17->psk_use_session_cb(VAR_17, VAR_27, &VAR_23, &VAR_24, &VAR_25)
                || (VAR_25 != ((void*)0)
                    && VAR_25->ssl_version != VAR_15))) {
        FUNC_7(VAR_25);
        FUNC_12(VAR_17, VAR_7, VAR_10,
                 VAR_12);
        return VAR_1;
    }


    if (VAR_25 == ((void*)0) && VAR_17->psk_client_callback != ((void*)0)) {
        unsigned char VAR_28[VAR_5];
        size_t VAR_29 = 0;

        FUNC_16(VAR_22, 0, sizeof(VAR_22));
        VAR_29 = VAR_17->psk_client_callback(VAR_17, ((void*)0), VAR_22, sizeof(VAR_22) - 1,
                                        VAR_28, sizeof(VAR_28));

        if (VAR_29 > VAR_5) {
            FUNC_12(VAR_17, VAR_6,
                     VAR_10, VAR_0);
            return VAR_1;
        } else if (VAR_29 > 0) {
            const unsigned char VAR_30[] = { 0x13, 0x01 };
            const SSL_CIPHER *VAR_31;

            VAR_24 = FUNC_19(VAR_22);
            if (VAR_24 > VAR_4) {
                FUNC_12(VAR_17, VAR_7,
                         VAR_10,
                         VAR_0);
                return VAR_1;
            }
            VAR_23 = (unsigned char *)VAR_22;





            VAR_31 = FUNC_6(VAR_17, VAR_30);
            if (VAR_31 == ((void*)0)) {
                FUNC_12(VAR_17, VAR_7,
                         VAR_10,
                         VAR_0);
                return VAR_1;
            }

            VAR_25 = FUNC_8();
            if (VAR_25 == ((void*)0)
                    || !FUNC_9(VAR_25, VAR_28, VAR_29)
                    || !FUNC_10(VAR_25, VAR_31)
                    || !FUNC_11(VAR_25, VAR_15)) {
                FUNC_12(VAR_17, VAR_7,
                         VAR_10,
                         VAR_0);
                FUNC_0(VAR_28, VAR_29);
                return VAR_1;
            }
            FUNC_0(VAR_28, VAR_29);
        }
    }


    FUNC_7(VAR_17->psksession);
    VAR_17->psksession = VAR_25;
    if (VAR_25 != ((void*)0)) {
        FUNC_1(VAR_17->psksession_id);
        VAR_17->psksession_id = FUNC_2(VAR_23, VAR_24);
        if (VAR_17->psksession_id == ((void*)0)) {
            FUNC_12(VAR_17, VAR_7,
                     VAR_10, VAR_0);
            return VAR_1;
        }
        VAR_17->psksession_id_len = VAR_24;
    }

    if (VAR_17->early_data_state != VAR_8
            || (VAR_17->session->ext.max_early_data == 0
                && (VAR_25 == ((void*)0) || VAR_25->ext.max_early_data == 0))) {
        VAR_17->max_early_data = 0;
        return VAR_2;
    }
    VAR_26 = VAR_17->session->ext.max_early_data != 0 ? VAR_17->session : VAR_25;
    VAR_17->max_early_data = VAR_26->ext.max_early_data;

    if (VAR_26->ext.hostname != ((void*)0)) {
        if (VAR_17->ext.hostname == ((void*)0)
                || (VAR_17->ext.hostname != ((void*)0)
                    && FUNC_18(VAR_17->ext.hostname, VAR_26->ext.hostname) != 0)) {
            FUNC_12(VAR_17, VAR_7,
                     VAR_10,
                     VAR_14);
            return VAR_1;
        }
    }

    if ((VAR_17->ext.alpn == ((void*)0) && VAR_26->ext.alpn_selected != ((void*)0))) {
        FUNC_12(VAR_17, VAR_7, VAR_10,
                 VAR_13);
        return VAR_1;
    }





    if (VAR_26->ext.alpn_selected != ((void*)0)) {
        PACKET VAR_32, VAR_33;
        int VAR_34 = 0;

        if (!FUNC_3(&VAR_32, VAR_17->ext.alpn, VAR_17->ext.alpn_len)) {
            FUNC_12(VAR_17, VAR_7,
                     VAR_10, VAR_0);
            return VAR_1;
        }
        while (FUNC_5(&VAR_32, &VAR_33)) {
            if (FUNC_4(&VAR_33, VAR_26->ext.alpn_selected,
                             VAR_26->ext.alpn_selected_len)) {
                VAR_34 = 1;
                break;
            }
        }
        if (!VAR_34) {
            FUNC_12(VAR_17, VAR_7,
                     VAR_10,
                     VAR_13);
            return VAR_1;
        }
    }

    if (!FUNC_14(VAR_18, VAR_16)
            || !FUNC_15(VAR_18)
            || !FUNC_13(VAR_18)) {
        FUNC_12(VAR_17, VAR_7, VAR_10,
                 VAR_0);
        return VAR_1;
    }





    VAR_17->ext.early_data = VAR_9;
    VAR_17->ext.early_data_ok = 1;

    return VAR_3;
}
