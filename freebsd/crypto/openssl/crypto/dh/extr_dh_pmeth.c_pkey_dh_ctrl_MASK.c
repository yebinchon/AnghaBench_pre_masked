
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int prime_len; int use_dsa; int subprime_len; int pad; int generator; int param_nid; int rfc5114_param; int kdf_type; size_t kdf_outlen; unsigned char* kdf_ukm; int kdf_ukmlen; int * kdf_oid; int * kdf_md; } ;
struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef TYPE_2__ DH_PKEY_CTX ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
    DH_PKEY_CTX *VAR_7 = VAR_3->data;
    switch (VAR_4) {
    case 136:
        if (VAR_5 < 256)
            return -2;
        VAR_7->prime_len = VAR_5;
        return 1;

    case 135:
        if (VAR_7->use_dsa == 0)
            return -2;
        VAR_7->subprime_len = VAR_5;
        return 1;

    case 138:
        VAR_7->pad = VAR_5;
        return 1;

    case 137:
        if (VAR_7->use_dsa)
            return -2;
        VAR_7->generator = VAR_5;
        return 1;

    case 134:




        if (VAR_5 < 0 || VAR_5 > 2)
            return -2;

        VAR_7->use_dsa = VAR_5;
        return 1;

    case 133:
        if (VAR_5 < 1 || VAR_5 > 3 || VAR_7->param_nid != VAR_2)
            return -2;
        VAR_7->rfc5114_param = VAR_5;
        return 1;

    case 139:
        if (VAR_5 <= 0 || VAR_7->rfc5114_param != 0)
            return -2;
        VAR_7->param_nid = VAR_5;
        return 1;

    case 128:

        return 1;

    case 141:
        if (VAR_5 == -2)
            return VAR_7->kdf_type;



        if (VAR_5 != VAR_0 && VAR_5 != VAR_1)

            return -2;
        VAR_7->kdf_type = VAR_5;
        return 1;

    case 144:
        VAR_7->kdf_md = VAR_6;
        return 1;

    case 132:
        *(const EVP_MD **)VAR_6 = VAR_7->kdf_md;
        return 1;

    case 142:
        if (VAR_5 <= 0)
            return -2;
        VAR_7->kdf_outlen = (size_t)VAR_5;
        return 1;

    case 130:
        *(int *)VAR_6 = VAR_7->kdf_outlen;
        return 1;

    case 140:
        FUNC_1(VAR_7->kdf_ukm);
        VAR_7->kdf_ukm = VAR_6;
        if (VAR_6)
            VAR_7->kdf_ukmlen = VAR_5;
        else
            VAR_7->kdf_ukmlen = 0;
        return 1;

    case 129:
        *(unsigned char **)VAR_6 = VAR_7->kdf_ukm;
        return VAR_7->kdf_ukmlen;

    case 143:
        FUNC_0(VAR_7->kdf_oid);
        VAR_7->kdf_oid = VAR_6;
        return 1;

    case 131:
        *(ASN1_OBJECT **)VAR_6 = VAR_7->kdf_oid;
        return 1;

    default:
        return -2;

    }
}
