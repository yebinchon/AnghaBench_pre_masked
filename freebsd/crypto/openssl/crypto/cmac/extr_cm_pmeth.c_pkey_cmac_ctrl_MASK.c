
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* pkey; int * data; int * engine; } ;
struct TYPE_5__ {scalar_t__ ptr; } ;
struct TYPE_6__ {TYPE_1__ pkey; } ;
typedef TYPE_3__ EVP_PKEY_CTX ;
typedef int CMAC_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,void*,int,void*,int *) ;




__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0, int VAR_1, int VAR_2, void *VAR_3)
{
    CMAC_CTX *VAR_4 = VAR_0->data;
    switch (VAR_1) {

    case 128:
        if (!VAR_3 || VAR_2 < 0)
            return 0;
        if (!FUNC_1(VAR_4, VAR_3, VAR_2, ((void*)0), ((void*)0)))
            return 0;
        break;

    case 130:
        if (!FUNC_1(VAR_4, ((void*)0), 0, VAR_3, VAR_0->engine))
            return 0;
        break;

    case 129:
        if (VAR_0->pkey && !FUNC_0(VAR_0->data,
                                        (CMAC_CTX *)VAR_0->pkey->pkey.ptr))
            return 0;
        if (!FUNC_1(VAR_4, ((void*)0), 0, ((void*)0), ((void*)0)))
            return 0;
        break;

    default:
        return -2;

    }
    return 1;
}
