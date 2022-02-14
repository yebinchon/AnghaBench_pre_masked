
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int N; int r; int p; int maxmem_bytes; int salt_len; int salt; int pass_len; int pass; } ;
typedef TYPE_1__ SCRYPT_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,void*,int) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    SCRYPT_PKEY_CTX *VAR_4 = VAR_0->data;
    uint64_t VAR_5;

    switch (VAR_1) {
    case 133:
        return FUNC_1(&VAR_4->pass, &VAR_4->pass_len, VAR_3, VAR_2);

    case 128:
        return FUNC_1(&VAR_4->salt, &VAR_4->salt_len, VAR_3, VAR_2);

    case 131:
        VAR_5 = *((uint64_t *)VAR_3);
        if ((VAR_5 <= 1) || !FUNC_0(VAR_5))
            return 0;
        VAR_4->N = VAR_5;
        return 1;

    case 129:
        VAR_5 = *((uint64_t *)VAR_3);
        if (VAR_5 < 1)
            return 0;
        VAR_4->r = VAR_5;
        return 1;

    case 130:
        VAR_5 = *((uint64_t *)VAR_3);
        if (VAR_5 < 1)
            return 0;
        VAR_4->p = VAR_5;
        return 1;

    case 132:
        VAR_5 = *((uint64_t *)VAR_3);
        if (VAR_5 < 1)
            return 0;
        VAR_4->maxmem_bytes = VAR_5;
        return 1;

    default:
        return -2;

    }
}
