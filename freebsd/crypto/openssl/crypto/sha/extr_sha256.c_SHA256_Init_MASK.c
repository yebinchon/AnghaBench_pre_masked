
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* h; int md_len; } ;
typedef TYPE_1__ SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1(SHA256_CTX *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->h[0] = 0x6a09e667UL;
    VAR_1->h[1] = 0xbb67ae85UL;
    VAR_1->h[2] = 0x3c6ef372UL;
    VAR_1->h[3] = 0xa54ff53aUL;
    VAR_1->h[4] = 0x510e527fUL;
    VAR_1->h[5] = 0x9b05688cUL;
    VAR_1->h[6] = 0x1f83d9abUL;
    VAR_1->h[7] = 0x5be0cd19UL;
    VAR_1->md_len = VAR_0;
    return 1;
}
