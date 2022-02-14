
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* rsa; } ;
struct TYPE_11__ {TYPE_1__ pkey; } ;
struct TYPE_10__ {int pss; int prime_infos; int * iqmp; int * dmq1; int * dmp1; int * q; int * p; int * d; int * e; int * n; } ;
struct TYPE_9__ {int * t; int * d; int * r; } ;
typedef TYPE_2__ RSA_PRIME_INFO ;
typedef TYPE_3__ RSA ;
typedef TYPE_4__ EVP_PKEY ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *,char const*,int *,int *,int) ;
 int FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__ const*) ;
 int FUNC_5 (int *,int,int ,int) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(BIO *VAR_0, const EVP_PKEY *VAR_1, int VAR_2, int VAR_3)
{
    const RSA *VAR_4 = VAR_1->pkey.rsa;
    char *VAR_5;
    const char *VAR_6;
    int VAR_7 = 0, VAR_8 = 0, VAR_9;

    if (VAR_4->n != ((void*)0))
        VAR_8 = FUNC_3(VAR_4->n);
    VAR_9 = FUNC_6(VAR_4->prime_infos);

    if (!FUNC_1(VAR_0, VAR_2, 128))
        goto err;

    if (FUNC_2(VAR_0, "%s ", FUNC_4(VAR_1) ? "RSA-PSS" : "RSA") <= 0)
        goto err;

    if (VAR_3 && VAR_4->d) {
        if (FUNC_2(VAR_0, "Private-Key: (%d bit, %d primes)\n",
                       VAR_8, VAR_9 <= 0 ? 2 : VAR_9 + 2) <= 0)
            goto err;
        VAR_5 = "modulus:";
        VAR_6 = "publicExponent:";
    } else {
        if (FUNC_2(VAR_0, "Public-Key: (%d bit)\n", VAR_8) <= 0)
            goto err;
        VAR_5 = "Modulus:";
        VAR_6 = "Exponent:";
    }
    if (!FUNC_0(VAR_0, VAR_5, VAR_4->n, ((void*)0), VAR_2))
        goto err;
    if (!FUNC_0(VAR_0, VAR_6, VAR_4->e, ((void*)0), VAR_2))
        goto err;
    if (VAR_3) {
        int VAR_10;

        if (!FUNC_0(VAR_0, "privateExponent:", VAR_4->d, ((void*)0), VAR_2))
            goto err;
        if (!FUNC_0(VAR_0, "prime1:", VAR_4->p, ((void*)0), VAR_2))
            goto err;
        if (!FUNC_0(VAR_0, "prime2:", VAR_4->q, ((void*)0), VAR_2))
            goto err;
        if (!FUNC_0(VAR_0, "exponent1:", VAR_4->dmp1, ((void*)0), VAR_2))
            goto err;
        if (!FUNC_0(VAR_0, "exponent2:", VAR_4->dmq1, ((void*)0), VAR_2))
            goto err;
        if (!FUNC_0(VAR_0, "coefficient:", VAR_4->iqmp, ((void*)0), VAR_2))
            goto err;
        for (VAR_10 = 0; VAR_10 < FUNC_6(VAR_4->prime_infos); VAR_10++) {

            BIGNUM *VAR_11 = ((void*)0);
            RSA_PRIME_INFO *VAR_12;
            int VAR_13;

            VAR_12 = FUNC_7(VAR_4->prime_infos, VAR_10);
            for (VAR_13 = 0; VAR_13 < 3; VAR_13++) {
                if (!FUNC_1(VAR_0, VAR_2, 128))
                    goto err;
                switch (VAR_13) {
                case 0:
                    if (FUNC_2(VAR_0, "prime%d:", VAR_10 + 3) <= 0)
                        goto err;
                    VAR_11 = VAR_12->r;
                    break;
                case 1:
                    if (FUNC_2(VAR_0, "exponent%d:", VAR_10 + 3) <= 0)
                        goto err;
                    VAR_11 = VAR_12->d;
                    break;
                case 2:
                    if (FUNC_2(VAR_0, "coefficient%d:", VAR_10 + 3) <= 0)
                        goto err;
                    VAR_11 = VAR_12->t;
                    break;
                default:
                    break;
                }
                if (!FUNC_0(VAR_0, "", VAR_11, ((void*)0), VAR_2))
                    goto err;
            }
        }
    }
    if (FUNC_4(VAR_1) && !FUNC_5(VAR_0, 1, VAR_4->pss, VAR_2))
        goto err;
    VAR_7 = 1;
 err:
    return VAR_7;
}
