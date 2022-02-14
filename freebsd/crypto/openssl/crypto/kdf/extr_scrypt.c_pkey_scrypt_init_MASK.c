
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* data; } ;
struct TYPE_5__ {int N; int r; int p; int maxmem_bytes; } ;
typedef TYPE_1__ SCRYPT_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_2)
{
    SCRYPT_PKEY_CTX *VAR_3;

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }





    VAR_3->N = 1 << 20;
    VAR_3->r = 8;
    VAR_3->p = 1;
    VAR_3->maxmem_bytes = 1025 * 1024 * 1024;

    VAR_2->data = VAR_3;

    return 1;
}
