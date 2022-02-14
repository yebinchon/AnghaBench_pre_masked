
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* opaque; char const* algorithm; int nonce; int ha1; int qop; int cnonce; int digest_nc; int pool; int username; int realm; } ;
typedef TYPE_1__ digest_authn_info_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char*,char const*,int ) ;
 void* FUNC_1 (int *,char*,char*,char const*,...) ;
 scalar_t__ FUNC_2 (char const**,char const*,char const*,int ,int *) ;
 char* FUNC_3 (unsigned char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static apr_status_t
FUNC_6(const char **VAR_2,
                  digest_authn_info_t *VAR_3,
                  const char *VAR_4,
                  const char *VAR_5,
                  apr_pool_t *VAR_6)
{
    char *VAR_7;
    const char *VAR_8;
    const char *VAR_9;
    unsigned char VAR_10[VAR_0];
    const char *VAR_11;
    apr_status_t VAR_12;

    VAR_12 = FUNC_2(&VAR_8, VAR_4, VAR_5, VAR_3->qop, VAR_6);
    if (VAR_12)
        return VAR_12;

    VAR_7 = FUNC_1(VAR_6,
                       "Digest realm=\"%s\","
                       " username=\"%s\","
                       " nonce=\"%s\","
                       " uri=\"%s\"",
                       VAR_3->realm, VAR_3->username,
                       VAR_3->nonce,
                       VAR_4);

    if (VAR_3->qop) {
        if (! VAR_3->cnonce)
            VAR_3->cnonce = FUNC_4(VAR_3->pool);

        VAR_7 = FUNC_1(VAR_6, "%s, nc=%08x, cnonce=\"%s\", qop=\"%s\"",
                           VAR_7,
                           VAR_3->digest_nc,
                           VAR_3->cnonce,
                           VAR_3->qop);





        VAR_9 = FUNC_1(VAR_6, "%s:%s:%08x:%s:%s:%s",
                                VAR_3->ha1, VAR_3->nonce,
                                VAR_3->digest_nc,
                                VAR_3->cnonce, VAR_3->qop, VAR_8);
    } else {



        VAR_9 = FUNC_1(VAR_6, "%s:%s:%s",
                                VAR_3->ha1, VAR_3->nonce, VAR_8);
    }

    VAR_12 = FUNC_0(VAR_10, VAR_9, FUNC_5(VAR_9));
    if (VAR_12)
        return VAR_12;

    VAR_11 = FUNC_3(VAR_10, VAR_6);

    VAR_7 = FUNC_1(VAR_6, "%s, response=\"%s\"", VAR_7, VAR_11);

    if (VAR_3->opaque) {
        VAR_7 = FUNC_1(VAR_6, "%s, opaque=\"%s\"", VAR_7,
                           VAR_3->opaque);
    }
    if (VAR_3->algorithm) {
        VAR_7 = FUNC_1(VAR_6, "%s, algorithm=\"%s\"", VAR_7,
                           VAR_3->algorithm);
    }

    *VAR_2 = VAR_7;

    return VAR_1;
}
