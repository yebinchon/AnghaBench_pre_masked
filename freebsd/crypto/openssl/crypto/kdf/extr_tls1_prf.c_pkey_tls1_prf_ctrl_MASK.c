
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* data; } ;
struct TYPE_4__ {int seclen; int seed; int seedlen; int * sec; void* md; } ;
typedef TYPE_1__ TLS1_PRF_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (void*,int) ;
 int VAR_0 ;
 int FUNC_3 (int,void*,int) ;

__attribute__((used)) static int FUNC_4(EVP_PKEY_CTX *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
    TLS1_PRF_PKEY_CTX *VAR_5 = VAR_1->data;
    switch (VAR_2) {
    case 130:
        VAR_5->md = VAR_4;
        return 1;

    case 129:
        if (VAR_3 < 0)
            return 0;
        if (VAR_5->sec != ((void*)0))
            FUNC_1(VAR_5->sec, VAR_5->seclen);
        FUNC_0(VAR_5->seed, VAR_5->seedlen);
        VAR_5->seedlen = 0;
        VAR_5->sec = FUNC_2(VAR_4, VAR_3);
        if (VAR_5->sec == ((void*)0))
            return 0;
        VAR_5->seclen = VAR_3;
        return 1;

    case 128:
        if (VAR_3 == 0 || VAR_4 == ((void*)0))
            return 1;
        if (VAR_3 < 0 || VAR_3 > (int)(VAR_0 - VAR_5->seedlen))
            return 0;
        FUNC_3(VAR_5->seed + VAR_5->seedlen, VAR_4, VAR_3);
        VAR_5->seedlen += VAR_3;
        return 1;

    default:
        return -2;

    }
}
