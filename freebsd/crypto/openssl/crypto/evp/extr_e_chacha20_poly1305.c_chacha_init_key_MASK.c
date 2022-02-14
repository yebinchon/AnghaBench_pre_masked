
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** d; } ;
struct TYPE_5__ {scalar_t__ partial_len; void** counter; TYPE_1__ key; } ;
typedef int EVP_CIPHER_CTX ;
typedef TYPE_2__ EVP_CHACHA_KEY ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* FUNC_0 (unsigned char const*) ;
 TYPE_2__* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(EVP_CIPHER_CTX *VAR_2,
                           const unsigned char VAR_3[VAR_1],
                           const unsigned char VAR_4[VAR_0], int VAR_5)
{
    EVP_CHACHA_KEY *VAR_6 = FUNC_1(VAR_2);
    unsigned int VAR_7;

    if (VAR_3)
        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7+=4) {
            VAR_6->key.d[VAR_7/4] = FUNC_0(VAR_3+VAR_7);
        }

    if (VAR_4)
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7+=4) {
            VAR_6->counter[VAR_7/4] = FUNC_0(VAR_4+VAR_7);
        }

    VAR_6->partial_len = 0;

    return 1;
}
