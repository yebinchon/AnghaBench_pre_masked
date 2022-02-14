
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; TYPE_2__* data; } ;
struct TYPE_6__ {TYPE_1__ ktmp; } ;
typedef TYPE_2__ SIPHASH_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY_CTX *VAR_0)
{
    SIPHASH_PKEY_CTX *VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 != ((void*)0)) {
        FUNC_2(VAR_1->ktmp.data, VAR_1->ktmp.length);
        FUNC_2(VAR_1, sizeof(*VAR_1));
        FUNC_1(VAR_0, ((void*)0));
    }
}
