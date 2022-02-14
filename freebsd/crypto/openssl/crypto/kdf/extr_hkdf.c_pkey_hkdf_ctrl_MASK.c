
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int mode; int salt_len; int key_len; int info_len; int info; int * key; int * salt; void* md; } ;
typedef TYPE_1__ HKDF_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;







 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (void*,int) ;
 int FUNC_2 (int,void*,int) ;

__attribute__((used)) static int FUNC_3(EVP_PKEY_CTX *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    HKDF_PKEY_CTX *VAR_5 = VAR_1->data;

    switch (VAR_2) {
    case 130:
        if (VAR_4 == ((void*)0))
            return 0;

        VAR_5->md = VAR_4;
        return 1;

    case 129:
        VAR_5->mode = VAR_3;
        return 1;

    case 128:
        if (VAR_3 == 0 || VAR_4 == ((void*)0))
            return 1;

        if (VAR_3 < 0)
            return 0;

        if (VAR_5->salt != ((void*)0))
            FUNC_0(VAR_5->salt, VAR_5->salt_len);

        VAR_5->salt = FUNC_1(VAR_4, VAR_3);
        if (VAR_5->salt == ((void*)0))
            return 0;

        VAR_5->salt_len = VAR_3;
        return 1;

    case 131:
        if (VAR_3 < 0)
            return 0;

        if (VAR_5->key != ((void*)0))
            FUNC_0(VAR_5->key, VAR_5->key_len);

        VAR_5->key = FUNC_1(VAR_4, VAR_3);
        if (VAR_5->key == ((void*)0))
            return 0;

        VAR_5->key_len = VAR_3;
        return 1;

    case 132:
        if (VAR_3 == 0 || VAR_4 == ((void*)0))
            return 1;

        if (VAR_3 < 0 || VAR_3 > (int)(VAR_0 - VAR_5->info_len))
            return 0;

        FUNC_2(VAR_5->info + VAR_5->info_len, VAR_4, VAR_3);
        VAR_5->info_len += VAR_3;
        return 1;

    default:
        return -2;

    }
}
