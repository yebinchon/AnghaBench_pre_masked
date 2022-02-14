
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; int data; } ;
struct TYPE_6__ {TYPE_1__ ktmp; int ctx; } ;
typedef TYPE_2__ HMAC_PKEY_CTX ;
typedef int EVP_PKEY_CTX ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(EVP_PKEY_CTX *VAR_0)
{
    HMAC_PKEY_CTX *VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 != ((void*)0)) {
        FUNC_2(VAR_1->ctx);
        FUNC_3(VAR_1->ktmp.data, VAR_1->ktmp.length);
        FUNC_4(VAR_1);
        FUNC_1(VAR_0, ((void*)0));
    }
}
