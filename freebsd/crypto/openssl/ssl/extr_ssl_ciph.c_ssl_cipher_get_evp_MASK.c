
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ algorithm_enc; scalar_t__ algorithm_mac; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_8__ {int ssl_version; int compress_meth; TYPE_3__* cipher; } ;
typedef TYPE_1__ SSL_SESSION ;
typedef TYPE_2__ SSL_COMP ;
typedef TYPE_3__ SSL_CIPHER ;
typedef int EVP_MD ;
typedef int EVP_CIPHER ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int * FUNC_1 () ;
 int * FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int *,int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int ** VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int ** VAR_16 ;
 int* VAR_17 ;
 size_t* VAR_18 ;

int FUNC_7(const SSL_SESSION *VAR_19, const EVP_CIPHER **VAR_20,
                       const EVP_MD **VAR_21, int *VAR_22,
                       size_t *VAR_23, SSL_COMP **VAR_24, int VAR_25)
{
    int VAR_26;
    const SSL_CIPHER *VAR_27;

    VAR_27 = VAR_19->cipher;
    if (VAR_27 == ((void*)0))
        return 0;
    if (VAR_24 != ((void*)0)) {
        SSL_COMP VAR_28;

        if (!FUNC_3()) {




        }

        *VAR_24 = ((void*)0);
        VAR_28.id = VAR_19->compress_meth;
        if (VAR_15 != ((void*)0)) {
            VAR_26 = FUNC_4(VAR_15, &VAR_28);
            *VAR_24 = FUNC_5(VAR_15, VAR_26);
        }

        if ((VAR_20 == ((void*)0)) && (VAR_21 == ((void*)0)))
            return 1;
    }

    if ((VAR_20 == ((void*)0)) || (VAR_21 == ((void*)0)))
        return 0;

    VAR_26 = FUNC_6(VAR_13, VAR_27->algorithm_enc);

    if (VAR_26 == -1) {
        *VAR_20 = ((void*)0);
    } else {
        if (VAR_26 == VAR_5)
            *VAR_20 = FUNC_1();
        else
            *VAR_20 = VAR_12[VAR_26];
    }

    VAR_26 = FUNC_6(VAR_14, VAR_27->algorithm_mac);
    if (VAR_26 == -1) {
        *VAR_21 = ((void*)0);
        if (VAR_22 != ((void*)0))
            *VAR_22 = VAR_1;
        if (VAR_23 != ((void*)0))
            *VAR_23 = 0;
        if (VAR_27->algorithm_mac == VAR_2)
            VAR_22 = ((void*)0);
    } else {
        *VAR_21 = VAR_16[VAR_26];
        if (VAR_22 != ((void*)0))
            *VAR_22 = VAR_17[VAR_26];
        if (VAR_23 != ((void*)0))
            *VAR_23 = VAR_18[VAR_26];
    }

    if ((*VAR_20 != ((void*)0)) &&
        (*VAR_21 != ((void*)0) || (FUNC_0(*VAR_20) & VAR_0))
        && (!VAR_22 || *VAR_22 != VAR_1)) {
        const EVP_CIPHER *VAR_29;

        if (VAR_25)
            return 1;

        if (VAR_19->ssl_version >> 8 != VAR_11 ||
            VAR_19->ssl_version < VAR_10)
            return 1;

        if (VAR_27->algorithm_enc == VAR_7 &&
            VAR_27->algorithm_mac == VAR_6 &&
            (VAR_29 = FUNC_2("RC4-HMAC-MD5")))
            *VAR_20 = VAR_29, *VAR_21 = ((void*)0);
        else if (VAR_27->algorithm_enc == VAR_3 &&
                 VAR_27->algorithm_mac == VAR_8 &&
                 (VAR_29 = FUNC_2("AES-128-CBC-HMAC-SHA1")))
            *VAR_20 = VAR_29, *VAR_21 = ((void*)0);
        else if (VAR_27->algorithm_enc == VAR_4 &&
                 VAR_27->algorithm_mac == VAR_8 &&
                 (VAR_29 = FUNC_2("AES-256-CBC-HMAC-SHA1")))
            *VAR_20 = VAR_29, *VAR_21 = ((void*)0);
        else if (VAR_27->algorithm_enc == VAR_3 &&
                 VAR_27->algorithm_mac == VAR_9 &&
                 (VAR_29 = FUNC_2("AES-128-CBC-HMAC-SHA256")))
            *VAR_20 = VAR_29, *VAR_21 = ((void*)0);
        else if (VAR_27->algorithm_enc == VAR_4 &&
                 VAR_27->algorithm_mac == VAR_9 &&
                 (VAR_29 = FUNC_2("AES-256-CBC-HMAC-SHA256")))
            *VAR_20 = VAR_29, *VAR_21 = ((void*)0);
        return 1;
    } else {
        return 0;
    }
}
