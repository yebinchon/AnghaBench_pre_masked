
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kdf_type; size_t kdf_outlen; int kdf_md; int kdf_ukmlen; int kdf_ukm; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef TYPE_2__ EC_PKEY_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned char*,size_t) ;
 unsigned char* FUNC_2 (size_t) ;
 int FUNC_3 (unsigned char*,size_t,unsigned char*,size_t,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,unsigned char*,size_t*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_3,
                              unsigned char *VAR_4, size_t *VAR_5)
{
    EC_PKEY_CTX *VAR_6 = VAR_3->data;
    unsigned char *VAR_7 = ((void*)0);
    size_t VAR_8;
    int VAR_9 = 0;
    if (VAR_6->kdf_type == VAR_2)
        return FUNC_4(VAR_3, VAR_4, VAR_5);
    if (!VAR_4) {
        *VAR_5 = VAR_6->kdf_outlen;
        return 1;
    }
    if (*VAR_5 != VAR_6->kdf_outlen)
        return 0;
    if (!FUNC_4(VAR_3, ((void*)0), &VAR_8))
        return 0;
    if ((VAR_7 = FUNC_2(VAR_8)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    if (!FUNC_4(VAR_3, VAR_7, &VAR_8))
        goto err;

    if (!FUNC_3(VAR_4, *VAR_5, VAR_7, VAR_8,
                        VAR_6->kdf_ukm, VAR_6->kdf_ukmlen, VAR_6->kdf_md))
        goto err;
    VAR_9 = 1;

 err:
    FUNC_1(VAR_7, VAR_8);
    return VAR_9;
}
