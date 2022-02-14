
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int ctx; } ;
typedef TYPE_1__ HMAC_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_2, EVP_MD_CTX *VAR_3)
{
    HMAC_PKEY_CTX *VAR_4 = VAR_2->data;
    FUNC_3(VAR_4->ctx,
                       FUNC_2(VAR_3, ~VAR_0));
    FUNC_0(VAR_3, VAR_0);
    FUNC_1(VAR_3, VAR_1);
    return 1;
}
