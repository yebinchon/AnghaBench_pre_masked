
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md_len; scalar_t__ num; scalar_t__ Nh; scalar_t__ Nl; void** h; } ;
typedef TYPE_1__ SHA512_CTX ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

int FUNC_1(SHA512_CTX *VAR_1)
{
    VAR_1->h[0] = FUNC_0(0x8c3d37c819544da2);
    VAR_1->h[1] = FUNC_0(0x73e1996689dcd4d6);
    VAR_1->h[2] = FUNC_0(0x1dfab7ae32ff9c82);
    VAR_1->h[3] = FUNC_0(0x679dd514582f9fcf);
    VAR_1->h[4] = FUNC_0(0x0f6d2b697bd44da8);
    VAR_1->h[5] = FUNC_0(0x77e36f7304c48942);
    VAR_1->h[6] = FUNC_0(0x3f9d85a86a1d36c8);
    VAR_1->h[7] = FUNC_0(0x1112e6ad91d692a1);

    VAR_1->Nl = 0;
    VAR_1->Nh = 0;
    VAR_1->num = 0;
    VAR_1->md_len = VAR_0;
    return 1;
}
