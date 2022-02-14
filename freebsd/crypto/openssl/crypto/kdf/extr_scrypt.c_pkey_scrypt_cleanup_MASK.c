
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int pass_len; int pass; int salt_len; int salt; } ;
typedef TYPE_1__ SCRYPT_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(EVP_PKEY_CTX *VAR_0)
{
    SCRYPT_PKEY_CTX *VAR_1 = VAR_0->data;

    FUNC_0(VAR_1->salt, VAR_1->salt_len);
    FUNC_0(VAR_1->pass, VAR_1->pass_len);
    FUNC_1(VAR_1);
}
