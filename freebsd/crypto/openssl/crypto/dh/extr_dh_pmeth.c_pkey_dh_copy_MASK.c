
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int kdf_outlen; int kdf_ukmlen; int * kdf_ukm; int kdf_md; int * kdf_oid; int kdf_type; int param_nid; int rfc5114_param; int md; int pad; int use_dsa; int generator; int subprime_len; int prime_len; } ;
struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ DH_PKEY_CTX ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    DH_PKEY_CTX *VAR_2, *VAR_3;
    if (!FUNC_2(VAR_0))
        return 0;
    VAR_3 = VAR_1->data;
    VAR_2 = VAR_0->data;
    VAR_2->prime_len = VAR_3->prime_len;
    VAR_2->subprime_len = VAR_3->subprime_len;
    VAR_2->generator = VAR_3->generator;
    VAR_2->use_dsa = VAR_3->use_dsa;
    VAR_2->pad = VAR_3->pad;
    VAR_2->md = VAR_3->md;
    VAR_2->rfc5114_param = VAR_3->rfc5114_param;
    VAR_2->param_nid = VAR_3->param_nid;

    VAR_2->kdf_type = VAR_3->kdf_type;
    VAR_2->kdf_oid = FUNC_0(VAR_3->kdf_oid);
    if (VAR_2->kdf_oid == ((void*)0))
        return 0;
    VAR_2->kdf_md = VAR_3->kdf_md;
    if (VAR_3->kdf_ukm != ((void*)0)) {
        VAR_2->kdf_ukm = FUNC_1(VAR_3->kdf_ukm, VAR_3->kdf_ukmlen);
        if (VAR_2->kdf_ukm == ((void*)0))
          return 0;
        VAR_2->kdf_ukmlen = VAR_3->kdf_ukmlen;
    }
    VAR_2->kdf_outlen = VAR_3->kdf_outlen;
    return 1;
}
