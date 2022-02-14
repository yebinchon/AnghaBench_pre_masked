
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_4__* conn; } ;
typedef TYPE_2__ serf_request_t ;
struct TYPE_18__ {TYPE_1__* scheme; TYPE_6__* baton; } ;
struct TYPE_16__ {TYPE_5__ proxy_authn_info; int cred_cb; } ;
typedef TYPE_3__ serf_context_t ;
struct TYPE_17__ {int * pool; TYPE_3__* ctx; } ;
typedef TYPE_4__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef TYPE_5__ serf__authn_info_t ;
struct TYPE_19__ {char* header; int * pool; void* realm; int ha1; int digest_nc; void* username; void* algorithm; void* opaque; int * cnonce; void* nonce; void* qop; } ;
typedef TYPE_6__ digest_authn_info_t ;
typedef scalar_t__ apr_status_t ;
typedef size_t apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,char const*) ;
 char* FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (int *,char*,char*,void*,int *) ;
 char* FUNC_5 (int ,TYPE_4__*,char const*,int *) ;
 TYPE_5__* FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char**,char**,TYPE_2__*,void*,int,int ,char const*,int *) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 char* FUNC_9 (char const*,char) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 size_t FUNC_11 (char*) ;

apr_status_t
FUNC_12(int VAR_4,
                         serf_request_t *VAR_5,
                         serf_bucket_t *VAR_6,
                         const char *VAR_7,
                         const char *VAR_8,
                         void *VAR_9,
                         apr_pool_t *VAR_10)
{
    char *VAR_11;
    char *VAR_12;
    const char *VAR_13, *VAR_14 = ((void*)0);
    const char *VAR_15 = ((void*)0);
    const char *VAR_16 = ((void*)0);
    const char *VAR_17 = ((void*)0);
    const char *VAR_18 = ((void*)0);
    const char *VAR_19;
    serf_connection_t *VAR_20 = VAR_5->conn;
    serf_context_t *VAR_21 = VAR_20->ctx;
    serf__authn_info_t *VAR_22;
    digest_authn_info_t *VAR_23;
    apr_status_t VAR_24;
    apr_pool_t *VAR_25;
    char *VAR_26, *VAR_27;



    if (!VAR_21->cred_cb) {
        return VAR_2;
    }

    if (VAR_4 == 401) {
        VAR_22 = FUNC_6(VAR_20);
    } else {
        VAR_22 = &VAR_21->proxy_authn_info;
    }
    VAR_23 = VAR_22->baton;


    VAR_11 = FUNC_2(VAR_10, VAR_8);





    for ( ; (VAR_19 = FUNC_3(VAR_11, ",", &VAR_12)) != ((void*)0); VAR_11 = ((void*)0)) {
        char *VAR_28;

        VAR_28 = FUNC_9(VAR_19, '=');
        if (VAR_28 == ((void*)0))
            continue;
        *VAR_28++ = '\0';


        while (*VAR_19 && *VAR_19 == ' ')
            VAR_19++;


        if (*VAR_28 == '"') {
            apr_size_t VAR_29 = FUNC_11(VAR_28) - 1;

            if (VAR_28[VAR_29] == '"') {
                VAR_28[VAR_29] = '\0';
                VAR_28++;
            }
        }

        if (FUNC_10(VAR_19, "realm") == 0)
            VAR_14 = VAR_28;
        else if (FUNC_10(VAR_19, "nonce") == 0)
            VAR_15 = VAR_28;
        else if (FUNC_10(VAR_19, "algorithm") == 0)
            VAR_16 = VAR_28;
        else if (FUNC_10(VAR_19, "qop") == 0)
            VAR_17 = VAR_28;
        else if (FUNC_10(VAR_19, "opaque") == 0)
            VAR_18 = VAR_28;


    }

    if (!VAR_14) {
        return VAR_3;
    }

    VAR_13 = FUNC_5(VAR_4 == 401 ? VAR_0 : VAR_1,
                                  VAR_20, VAR_14,
                                  VAR_10);


    FUNC_0(&VAR_25, VAR_10);
    VAR_24 = FUNC_7(VAR_21,
                                       &VAR_26, &VAR_27,
                                       VAR_5, VAR_9,
                                       VAR_4, VAR_22->scheme->name,
                                       VAR_13, VAR_25);
    if (VAR_24) {
        FUNC_1(VAR_25);
        return VAR_24;
    }

    VAR_23->header = (VAR_4 == 401) ? "Authorization" :
                                          "Proxy-Authorization";







    VAR_23->pool = VAR_20->pool;
    VAR_23->qop = FUNC_2(VAR_23->pool, VAR_17);
    VAR_23->nonce = FUNC_2(VAR_23->pool, VAR_15);
    VAR_23->cnonce = ((void*)0);
    VAR_23->opaque = FUNC_2(VAR_23->pool, VAR_18);
    VAR_23->algorithm = FUNC_2(VAR_23->pool, VAR_16);
    VAR_23->realm = FUNC_2(VAR_23->pool, VAR_14);
    VAR_23->username = FUNC_2(VAR_23->pool, VAR_26);
    VAR_23->digest_nc++;

    VAR_24 = FUNC_4(&VAR_23->ha1, VAR_26, VAR_27,
                              VAR_23->realm, VAR_23->pool);

    FUNC_1(VAR_25);



    FUNC_8(VAR_20, 0);

    return VAR_24;
}
