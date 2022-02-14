
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* pending_err; void* (* server_cert_callback ) (int ,int,TYPE_2__*) ;void* (* server_cert_chain_callback ) (int ,int,int,TYPE_2__ const**,int) ;int server_cert_userdata; int pool; } ;
typedef TYPE_1__ serf_ssl_context_t ;
struct TYPE_7__ {int depth; int ssl_cert; } ;
typedef TYPE_2__ serf_ssl_certificate_t ;
typedef void* apr_status_t ;
typedef int apr_pool_t ;
typedef int X509_STORE_CTX ;
typedef int SSL ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 void* FUNC_11 (int *,int) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int,int) ;
 void* FUNC_16 (int ,int,TYPE_2__*) ;
 void* FUNC_17 (int ,int,int,TYPE_2__ const**,int) ;
 void* FUNC_18 (int,int ) ;

__attribute__((used)) static int
FUNC_19(int VAR_11, X509_STORE_CTX *VAR_12)
{
    SSL *VAR_13;
    serf_ssl_context_t *VAR_14;
    VAR_8 *VAR_10;
    int VAR_15, VAR_16;
    int VAR_17 = 0;
    apr_status_t VAR_18;

    VAR_13 = FUNC_7(VAR_12,
                                     FUNC_1());
    VAR_14 = FUNC_0(VAR_13);

    VAR_10 = FUNC_4(VAR_12);
    VAR_16 = FUNC_6(VAR_12);



    if (! VAR_11) {
        VAR_15 = FUNC_5(VAR_12);

        switch(VAR_15) {
            case 136:
                    VAR_17 |= VAR_3;
                    break;
            case 137:
                    VAR_17 |= VAR_2;
                    break;
            case 133:
            case 131:
                    VAR_17 |= VAR_5;
                    break;
            case 129:
            case 130:
            case 134:
            case 132:
            case 128:
                    VAR_17 |= VAR_6;
                    break;
            case 135:
                    VAR_17 |= VAR_4;
                    break;
            default:
                    VAR_17 |= VAR_7;
                    break;
        }
    }


    VAR_18 = FUNC_18(VAR_10, VAR_14->pool);
    if (VAR_18)
        VAR_17 |= VAR_7;


    if (FUNC_8(FUNC_10(VAR_10)) >= 0) {
        VAR_17 |= VAR_3;
    }
    else if (FUNC_8(FUNC_9(VAR_10)) <= 0) {
        VAR_17 |= VAR_2;
    }

    if (VAR_14->server_cert_callback &&
        (VAR_16 == 0 || VAR_17)) {
        serf_ssl_certificate_t *VAR_19;
        apr_pool_t *VAR_20;

        FUNC_12(&VAR_20, VAR_14->pool);

        VAR_19 = FUNC_11(VAR_20, sizeof(serf_ssl_certificate_t));
        VAR_19->ssl_cert = VAR_10;
        VAR_19->depth = VAR_16;


        VAR_18 = VAR_14->server_cert_callback(VAR_14->server_cert_userdata,
                                           VAR_17, VAR_19);
        if (VAR_18 == VAR_0)
            VAR_11 = 1;
        else {


            VAR_11 = 0;

            VAR_14->pending_err = VAR_18;
        }
        FUNC_13(VAR_20);
    }

    if (VAR_14->server_cert_chain_callback
        && (VAR_16 == 0 || VAR_17)) {
        FUNC_2(VAR_8) *VAR_9;
        const serf_ssl_certificate_t **VAR_21;
        int VAR_22;
        apr_pool_t *VAR_23;

        FUNC_12(&VAR_23, VAR_14->pool);


        VAR_9 = FUNC_3(VAR_12);




        if (!VAR_9) {
            serf_ssl_certificate_t *VAR_24 = FUNC_11(VAR_23, sizeof(*VAR_24));

            VAR_24->ssl_cert = VAR_10;
            VAR_24->depth = VAR_16;


            VAR_21 = FUNC_11(VAR_23, sizeof(*VAR_21) * 2);
            VAR_21[0] = VAR_24;

            VAR_22 = 1;
        } else {
            int VAR_25;

            VAR_22 = FUNC_14(VAR_9);


            VAR_21 = FUNC_11(VAR_23, sizeof(*VAR_21) * (VAR_22 + 1));
            for (VAR_25 = 0; VAR_25 < VAR_22; ++VAR_25) {
                serf_ssl_certificate_t *VAR_26;

                VAR_26 = FUNC_11(VAR_23, sizeof(*VAR_26));
                VAR_26->ssl_cert = FUNC_15(VAR_9, VAR_25);
                VAR_26->depth = VAR_25;

                VAR_21[VAR_25] = VAR_26;
            }
        }
        VAR_21[VAR_22] = ((void*)0);


        VAR_18 = VAR_14->server_cert_chain_callback(VAR_14->server_cert_userdata,
                                                 VAR_17, VAR_16,
                                                 VAR_21, VAR_22);
        if (VAR_18 == VAR_0) {
            VAR_11 = 1;
        } else {


            VAR_11 = 0;

            VAR_14->pending_err = VAR_18;
        }

        FUNC_13(VAR_23);
    }



    if (!VAR_11 &&
        !VAR_14->server_cert_chain_callback &&
        !VAR_14->server_cert_callback)
    {
        VAR_14->pending_err = VAR_1;
    }

    return VAR_11;
}
