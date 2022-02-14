
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
    VAR_1->h[0] = FUNC_0(0x6a09e667f3bcc908);
    VAR_1->h[1] = FUNC_0(0xbb67ae8584caa73b);
    VAR_1->h[2] = FUNC_0(0x3c6ef372fe94f82b);
    VAR_1->h[3] = FUNC_0(0xa54ff53a5f1d36f1);
    VAR_1->h[4] = FUNC_0(0x510e527fade682d1);
    VAR_1->h[5] = FUNC_0(0x9b05688c2b3e6c1f);
    VAR_1->h[6] = FUNC_0(0x1f83d9abfb41bd6b);
    VAR_1->h[7] = FUNC_0(0x5be0cd19137e2179);

    VAR_1->Nl = 0;
    VAR_1->Nh = 0;
    VAR_1->num = 0;
    VAR_1->md_len = VAR_0;
    return 1;
}
