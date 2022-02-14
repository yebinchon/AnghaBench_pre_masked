
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int mode; int info_len; int info; int key_len; int * key; int * md; int salt_len; int salt; } ;
typedef TYPE_1__ HKDF_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;


 size_t FUNC_0 (int *) ;



 int * FUNC_1 (int *,int ,int ,int *,int ,int ,int ,unsigned char*,size_t) ;
 int * FUNC_2 (int *,int *,int ,int ,int ,unsigned char*,size_t) ;
 int * FUNC_3 (int *,int ,int ,int *,int ,unsigned char*,size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_3, unsigned char *VAR_4,
                            size_t *VAR_5)
{
    HKDF_PKEY_CTX *VAR_6 = VAR_3->data;

    if (VAR_6->md == ((void*)0)) {
        FUNC_4(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_6->key == ((void*)0)) {
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }

    switch (VAR_6->mode) {
    case 129:
        return FUNC_1(VAR_6->md, VAR_6->salt, VAR_6->salt_len, VAR_6->key,
                    VAR_6->key_len, VAR_6->info, VAR_6->info_len, VAR_4,
                    *VAR_5) != ((void*)0);

    case 128:
        if (VAR_4 == ((void*)0)) {
            *VAR_5 = FUNC_0(VAR_6->md);
            return 1;
        }
        return FUNC_3(VAR_6->md, VAR_6->salt, VAR_6->salt_len, VAR_6->key,
                            VAR_6->key_len, VAR_4, VAR_5) != ((void*)0);

    case 130:
        return FUNC_2(VAR_6->md, VAR_6->key, VAR_6->key_len, VAR_6->info,
                           VAR_6->info_len, VAR_4, *VAR_5) != ((void*)0);

    default:
        return 0;
    }
}
