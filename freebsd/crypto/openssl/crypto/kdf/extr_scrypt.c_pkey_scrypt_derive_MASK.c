
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int maxmem_bytes; int p; int r; int N; int salt_len; int * salt; int pass_len; int * pass; } ;
typedef TYPE_1__ SCRYPT_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 int FUNC_0 (char*,int ,int *,int ,int ,int ,int ,int ,unsigned char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(EVP_PKEY_CTX *VAR_3, unsigned char *VAR_4,
                              size_t *VAR_5)
{
    SCRYPT_PKEY_CTX *VAR_6 = VAR_3->data;

    if (VAR_6->pass == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_6->salt == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    return FUNC_0((char *)VAR_6->pass, VAR_6->pass_len, VAR_6->salt,
                          VAR_6->salt_len, VAR_6->N, VAR_6->r, VAR_6->p,
                          VAR_6->maxmem_bytes, VAR_4, *VAR_5);
}
