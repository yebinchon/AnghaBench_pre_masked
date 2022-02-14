
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
    VAR_1->h[0] = FUNC_0(0x22312194fc2bf72c);
    VAR_1->h[1] = FUNC_0(0x9f555fa3c84c64c2);
    VAR_1->h[2] = FUNC_0(0x2393b86b6f53b151);
    VAR_1->h[3] = FUNC_0(0x963877195940eabd);
    VAR_1->h[4] = FUNC_0(0x96283ee2a88effe3);
    VAR_1->h[5] = FUNC_0(0xbe5e1e2553863992);
    VAR_1->h[6] = FUNC_0(0x2b0199fc2c85b8aa);
    VAR_1->h[7] = FUNC_0(0x0eb72ddc81c52ca2);

    VAR_1->Nl = 0;
    VAR_1->Nh = 0;
    VAR_1->num = 0;
    VAR_1->md_len = VAR_0;
    return 1;
}
