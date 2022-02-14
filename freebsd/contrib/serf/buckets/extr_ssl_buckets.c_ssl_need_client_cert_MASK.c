
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cert_file_success; char const* cert_path; char* cert_pw_success; scalar_t__ cert_pw_cache_pool; scalar_t__ cert_cache_pool; int * cached_cert_pw; int * cached_cert; int cert_pw_userdata; int (* cert_pw_callback ) (int ,char const*,char const**) ;int pool; int cert_userdata; int (* cert_callback ) (int ,char const**) ;} ;
typedef TYPE_1__ serf_ssl_context_t ;
typedef int apr_status_t ;
typedef int apr_file_t ;
typedef int X509 ;
typedef int SSL ;
typedef int PKCS12 ;
typedef int EVP_PKEY ;
typedef int BIO_METHOD ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*,int **,int **,int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,char const*,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (char const*,char*,int ,scalar_t__) ;
 char* FUNC_12 (scalar_t__,char const*) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int * FUNC_16 (int *,int *) ;
 int FUNC_17 (char*,int,int,int) ;
 int FUNC_18 (int ,char const**) ;
 int FUNC_19 (int ,char const*,char const**) ;

__attribute__((used)) static int FUNC_20(SSL *VAR_6, X509 **VAR_7, EVP_PKEY **VAR_8)
{
    serf_ssl_context_t *VAR_9 = FUNC_8(VAR_6);
    apr_status_t VAR_10;

    if (VAR_9->cached_cert) {
        *VAR_7 = VAR_9->cached_cert;
        *VAR_8 = VAR_9->cached_cert_pw;
        return 1;
    }

    while (VAR_9->cert_callback) {
        const char *VAR_11;
        apr_file_t *VAR_12;
        BIO *VAR_13;
        BIO_METHOD *VAR_14;
        PKCS12 *VAR_15;
        int VAR_16;
        int VAR_17 = 0;

        if (VAR_9->cert_file_success) {
            VAR_10 = VAR_2;
            VAR_11 = VAR_9->cert_file_success;
            VAR_9->cert_file_success = ((void*)0);
            VAR_17 = 1;
        } else {
            VAR_10 = VAR_9->cert_callback(VAR_9->cert_userdata, &VAR_11);
        }

        if (VAR_10 || !VAR_11) {
            break;
        }


        VAR_10 = FUNC_10(&VAR_12, VAR_11, VAR_1, VAR_0,
                               VAR_9->pool);

        if (VAR_10) {
            continue;
        }

        VAR_14 = FUNC_13();
        VAR_13 = FUNC_0(VAR_14);
        FUNC_15(VAR_13, VAR_12);

        VAR_9->cert_path = VAR_11;
        VAR_15 = FUNC_16(VAR_13, ((void*)0));
        FUNC_9(VAR_12);

        VAR_16 = FUNC_7(VAR_15, ((void*)0), VAR_8, VAR_7, ((void*)0));

        if (VAR_16 == 1) {
            FUNC_6(VAR_15);
            FUNC_14(VAR_14);
            VAR_9->cached_cert = *VAR_7;
            VAR_9->cached_cert_pw = *VAR_8;
            if (!VAR_17 && VAR_9->cert_cache_pool) {
                const char *VAR_18;

                VAR_18 = FUNC_12(VAR_9->cert_cache_pool, VAR_9->cert_path);

                FUNC_11(VAR_18, "serf:ssl:cert",
                                       VAR_5,
                                       VAR_9->cert_cache_pool);
            }
            return 1;
        }
        else {
            int VAR_19 = FUNC_5();
            FUNC_4();
            if (FUNC_2(VAR_19) == VAR_3 &&
                FUNC_3(VAR_19) == VAR_4) {
                if (VAR_9->cert_pw_callback) {
                    const char *VAR_20;

                    if (VAR_9->cert_pw_success) {
                        VAR_10 = VAR_2;
                        VAR_20 = VAR_9->cert_pw_success;
                        VAR_9->cert_pw_success = ((void*)0);
                    } else {
                        VAR_10 = VAR_9->cert_pw_callback(VAR_9->cert_pw_userdata,
                                                       VAR_9->cert_path,
                                                       &VAR_20);
                    }

                    if (!VAR_10 && VAR_20) {
                        VAR_16 = FUNC_7(VAR_15, VAR_20, VAR_8, VAR_7, ((void*)0));
                        if (VAR_16 == 1) {
                            FUNC_6(VAR_15);
                            FUNC_14(VAR_14);
                            VAR_9->cached_cert = *VAR_7;
                            VAR_9->cached_cert_pw = *VAR_8;
                            if (!VAR_17 && VAR_9->cert_cache_pool) {
                                const char *VAR_21;

                                VAR_21 = FUNC_12(VAR_9->cert_cache_pool,
                                                VAR_9->cert_path);

                                FUNC_11(VAR_21, "serf:ssl:cert",
                                                       VAR_5,
                                                       VAR_9->cert_cache_pool);
                            }
                            if (!VAR_17 && VAR_9->cert_pw_cache_pool) {
                                const char *VAR_22;

                                VAR_22 = FUNC_12(VAR_9->cert_pw_cache_pool,
                                                VAR_20);

                                FUNC_11(VAR_22, "serf:ssl:certpw",
                                                       VAR_5,
                                                       VAR_9->cert_pw_cache_pool);
                            }
                            return 1;
                        }
                    }
                }
                FUNC_6(VAR_15);
                FUNC_14(VAR_14);
                return 0;
            }
            else {
                FUNC_17("OpenSSL cert error: %d %d %d\n", FUNC_2(VAR_19),
                       FUNC_1(VAR_19),
                       FUNC_3(VAR_19));
                FUNC_6(VAR_15);
                FUNC_14(VAR_14);
            }
        }
    }

    return 0;
}
