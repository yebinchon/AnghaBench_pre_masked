
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_0, EVP_PKEY_CTX *VAR_1)
{
    if (!FUNC_1(VAR_0))
        return 0;
    if (!FUNC_0(VAR_0->data, VAR_1->data))
        return 0;
    return 1;
}
