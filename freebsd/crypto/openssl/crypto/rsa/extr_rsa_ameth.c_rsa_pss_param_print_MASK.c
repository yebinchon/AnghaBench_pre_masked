
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
struct TYPE_11__ {int algorithm; } ;
struct TYPE_10__ {scalar_t__ trailerField; scalar_t__ saltLength; TYPE_6__* maskGenAlgorithm; TYPE_1__* hashAlgorithm; } ;
struct TYPE_8__ {int algorithm; } ;
typedef TYPE_3__ RSA_PSS_PARAMS ;
typedef int BIO ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 TYPE_2__* FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_7(BIO *VAR_0, int VAR_1, RSA_PSS_PARAMS *VAR_2,
                               int VAR_3)
{
    int VAR_4 = 0;
    X509_ALGOR *VAR_5 = ((void*)0);

    if (!FUNC_0(VAR_0, VAR_3, 128))
        goto err;
    if (VAR_1) {
        if (VAR_2 == ((void*)0)) {
            if (FUNC_2(VAR_0, "No PSS parameter restrictions\n") <= 0)
                return 0;
            return 1;
        } else {
            if (FUNC_2(VAR_0, "PSS parameter restrictions:") <= 0)
                return 0;
        }
    } else if (VAR_2 == ((void*)0)) {
        if (FUNC_2(VAR_0,"(INVALID PSS PARAMETERS)\n") <= 0)
            return 0;
        return 1;
    }
    if (FUNC_2(VAR_0, "\n") <= 0)
        goto err;
    if (VAR_1)
        VAR_3 += 2;
    if (!FUNC_0(VAR_0, VAR_3, 128))
        goto err;
    if (FUNC_2(VAR_0, "Hash Algorithm: ") <= 0)
        goto err;

    if (VAR_2->hashAlgorithm) {
        if (FUNC_5(VAR_0, VAR_2->hashAlgorithm->algorithm) <= 0)
            goto err;
    } else if (FUNC_2(VAR_0, "sha1 (default)") <= 0) {
        goto err;
    }

    if (FUNC_2(VAR_0, "\n") <= 0)
        goto err;

    if (!FUNC_0(VAR_0, VAR_3, 128))
        goto err;

    if (FUNC_2(VAR_0, "Mask Algorithm: ") <= 0)
        goto err;
    if (VAR_2->maskGenAlgorithm) {
        if (FUNC_5(VAR_0, VAR_2->maskGenAlgorithm->algorithm) <= 0)
            goto err;
        if (FUNC_2(VAR_0, " with ") <= 0)
            goto err;
        VAR_5 = FUNC_6(VAR_2->maskGenAlgorithm);
        if (VAR_5 != ((void*)0)) {
            if (FUNC_5(VAR_0, VAR_5->algorithm) <= 0)
                goto err;
        } else if (FUNC_2(VAR_0, "INVALID") <= 0) {
            goto err;
        }
    } else if (FUNC_2(VAR_0, "mgf1 with sha1 (default)") <= 0) {
        goto err;
    }
    FUNC_2(VAR_0, "\n");

    if (!FUNC_0(VAR_0, VAR_3, 128))
        goto err;
    if (FUNC_1(VAR_0, "%s Salt Length: 0x", VAR_1 ? "Minimum" : "") <= 0)
        goto err;
    if (VAR_2->saltLength) {
        if (FUNC_4(VAR_0, VAR_2->saltLength) <= 0)
            goto err;
    } else if (FUNC_2(VAR_0, "14 (default)") <= 0) {
        goto err;
    }
    FUNC_2(VAR_0, "\n");

    if (!FUNC_0(VAR_0, VAR_3, 128))
        goto err;
    if (FUNC_2(VAR_0, "Trailer Field: 0x") <= 0)
        goto err;
    if (VAR_2->trailerField) {
        if (FUNC_4(VAR_0, VAR_2->trailerField) <= 0)
            goto err;
    } else if (FUNC_2(VAR_0, "BC (default)") <= 0) {
        goto err;
    }
    FUNC_2(VAR_0, "\n");

    VAR_4 = 1;

 err:
    FUNC_3(VAR_5);
    return VAR_4;

}
