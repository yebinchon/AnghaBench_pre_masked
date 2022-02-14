
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int info_len; int info; int key_len; int key; int salt_len; int salt; } ;
typedef TYPE_1__ HKDF_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EVP_PKEY_CTX *VAR_0)
{
    HKDF_PKEY_CTX *VAR_1 = VAR_0->data;
    FUNC_1(VAR_1->salt, VAR_1->salt_len);
    FUNC_1(VAR_1->key, VAR_1->key_len);
    FUNC_0(VAR_1->info, VAR_1->info_len);
    FUNC_2(VAR_1);
}
