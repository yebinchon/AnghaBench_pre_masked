
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* auth_baton; } ;
typedef TYPE_1__ serf_request_t ;
struct TYPE_13__ {TYPE_5__* baton; } ;
struct TYPE_11__ {TYPE_4__ proxy_authn_info; } ;
typedef TYPE_2__ serf_context_t ;
struct TYPE_12__ {TYPE_2__* ctx; } ;
typedef TYPE_3__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef int serf__authn_scheme_t ;
typedef TYPE_4__ serf__authn_info_t ;
typedef scalar_t__ peer_t ;
struct TYPE_14__ {int qop; int cnonce; int nonce; int ha1; } ;
typedef TYPE_5__ digest_authn_info_t ;
typedef int apr_status_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,char const*,size_t) ;
 char* FUNC_1 (int *,char*,int ,int ,char const*,int ,int ,char const*) ;
 char* FUNC_2 (int *,int ) ;
 char* FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (char const**,char const*,char*,char const*,int *) ;
 char* FUNC_5 (unsigned char*,int *) ;
 TYPE_4__* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *,char*) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (char const*,char) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;
 size_t FUNC_11 (char const*) ;

apr_status_t
FUNC_12(const serf__authn_scheme_t *VAR_4,
                                    peer_t VAR_5,
                                    int VAR_6,
                                    serf_connection_t *VAR_7,
                                    serf_request_t *VAR_8,
                                    serf_bucket_t *VAR_9,
                                    apr_pool_t *VAR_10)
{
    const char *VAR_11;
    char *VAR_12;
    char *VAR_13;
    const char *VAR_14 = ((void*)0);
    const char *VAR_15 = ((void*)0);
    const char *VAR_16 = ((void*)0);
    serf_bucket_t *VAR_17;
    serf_context_t *VAR_18 = VAR_7->ctx;
    apr_status_t VAR_19;

    VAR_17 = FUNC_8(VAR_9);


    if (VAR_5 == VAR_2)
        VAR_12 = FUNC_2(VAR_10,
            FUNC_7(VAR_17, "Authentication-Info"));
    else
        VAR_12 = FUNC_2(VAR_10,
            FUNC_7(VAR_17, "Proxy-Authentication-Info"));


    if (! VAR_12)
        return VAR_1;





    for ( ; (VAR_11 = FUNC_3(VAR_12, ",", &VAR_13)) != ((void*)0); VAR_12 = ((void*)0)) {
        char *VAR_20;

        VAR_20 = FUNC_9(VAR_11, '=');
        if (VAR_20 == ((void*)0))
            continue;
        *VAR_20++ = '\0';


        while (*VAR_11 && *VAR_11 == ' ')
            VAR_11++;


        if (*VAR_20 == '"') {
            apr_size_t VAR_21 = FUNC_11(VAR_20) - 1;

            if (VAR_20[VAR_21] == '"') {
                VAR_20[VAR_21] = '\0';
                VAR_20++;
            }
        }

        if (FUNC_10(VAR_11, "rspauth") == 0)
            VAR_14 = VAR_20;
        else if (FUNC_10(VAR_11, "qop") == 0)
            VAR_15 = VAR_20;
        else if (FUNC_10(VAR_11, "nc") == 0)
            VAR_16 = VAR_20;
    }

    if (VAR_14) {
        const char *VAR_22, *VAR_23, *VAR_24;
        unsigned char VAR_25[VAR_0];
        const char *VAR_26 = VAR_8->auth_baton;
        serf__authn_info_t *VAR_27;
        digest_authn_info_t *VAR_28;

        if (VAR_5 == VAR_2) {
            VAR_27 = FUNC_6(VAR_7);
        } else {
            VAR_27 = &VAR_18->proxy_authn_info;
        }
        VAR_28 = VAR_27->baton;

        VAR_19 = FUNC_4(&VAR_22, VAR_26, "", VAR_15, VAR_10);
        if (VAR_19)
            return VAR_19;

        VAR_23 = FUNC_1(VAR_10, "%s:%s:%s:%s:%s:%s",
                           VAR_28->ha1, VAR_28->nonce, VAR_16,
                           VAR_28->cnonce, VAR_28->qop, VAR_22);
        FUNC_0(VAR_25, VAR_23, FUNC_11(VAR_23));
        VAR_24 = FUNC_5(VAR_25, VAR_10);


        if (FUNC_10(VAR_14, VAR_24) != 0) {
            return VAR_3;
        }
    }

    return VAR_1;
}
