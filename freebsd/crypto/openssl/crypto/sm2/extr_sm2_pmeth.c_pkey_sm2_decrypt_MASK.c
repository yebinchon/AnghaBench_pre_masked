
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* data; TYPE_2__* pkey; } ;
struct TYPE_8__ {int * md; } ;
struct TYPE_6__ {int * ec; } ;
struct TYPE_7__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ SM2_PKEY_CTX ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef int EVP_MD ;
typedef int EC_KEY ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int const*,unsigned char const*,size_t,unsigned char*,size_t*) ;
 int FUNC_2 (int *,int const*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_0,
                            unsigned char *VAR_1, size_t *VAR_2,
                            const unsigned char *VAR_3, size_t VAR_4)
{
    EC_KEY *VAR_5 = VAR_0->pkey->pkey.ec;
    SM2_PKEY_CTX *VAR_6 = VAR_0->data;
    const EVP_MD *VAR_7 = (VAR_6->md == ((void*)0)) ? FUNC_0() : VAR_6->md;

    if (VAR_1 == ((void*)0)) {
        if (!FUNC_2(VAR_5, VAR_7, VAR_4, VAR_2))
            return -1;
        else
            return 1;
    }

    return FUNC_1(VAR_5, VAR_7, VAR_3, VAR_4, VAR_1, VAR_2);
}
