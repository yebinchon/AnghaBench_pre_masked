
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int kdf_ukmlen; int * kdf_ukm; int kdf_outlen; int kdf_md; int kdf_type; scalar_t__ co_key; int md; scalar_t__ gen_group; } ;
struct TYPE_6__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ EC_PKEY_CTX ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    EC_PKEY_CTX *VAR_2, *VAR_3;
    if (!FUNC_3(VAR_0))
        return 0;
    VAR_3 = VAR_1->data;
    VAR_2 = VAR_0->data;
    if (VAR_3->gen_group) {
        VAR_2->gen_group = FUNC_0(VAR_3->gen_group);
        if (!VAR_2->gen_group)
            return 0;
    }
    VAR_2->md = VAR_3->md;

    if (VAR_3->co_key) {
        VAR_2->co_key = FUNC_1(VAR_3->co_key);
        if (!VAR_2->co_key)
            return 0;
    }
    VAR_2->kdf_type = VAR_3->kdf_type;
    VAR_2->kdf_md = VAR_3->kdf_md;
    VAR_2->kdf_outlen = VAR_3->kdf_outlen;
    if (VAR_3->kdf_ukm) {
        VAR_2->kdf_ukm = FUNC_2(VAR_3->kdf_ukm, VAR_3->kdf_ukmlen);
        if (!VAR_2->kdf_ukm)
            return 0;
    } else
        VAR_2->kdf_ukm = ((void*)0);
    VAR_2->kdf_ukmlen = VAR_3->kdf_ukmlen;
    return 1;
}
