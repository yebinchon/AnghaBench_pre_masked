
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* r; int* pad; scalar_t__ final; scalar_t__ leftover; scalar_t__* h; } ;
typedef TYPE_1__ poly1305_state_internal_t ;


 int FUNC_0 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_1(poly1305_state_internal_t *VAR_0, const unsigned char VAR_1[32])
{

    VAR_0->r[0] = (FUNC_0(&VAR_1[0])) & 0x3ffffff;
    VAR_0->r[1] = (FUNC_0(&VAR_1[3]) >> 2) & 0x3ffff03;
    VAR_0->r[2] = (FUNC_0(&VAR_1[6]) >> 4) & 0x3ffc0ff;
    VAR_0->r[3] = (FUNC_0(&VAR_1[9]) >> 6) & 0x3f03fff;
    VAR_0->r[4] = (FUNC_0(&VAR_1[12]) >> 8) & 0x00fffff;


    VAR_0->h[0] = 0;
    VAR_0->h[1] = 0;
    VAR_0->h[2] = 0;
    VAR_0->h[3] = 0;
    VAR_0->h[4] = 0;


    VAR_0->pad[0] = FUNC_0(&VAR_1[16]);
    VAR_0->pad[1] = FUNC_0(&VAR_1[20]);
    VAR_0->pad[2] = FUNC_0(&VAR_1[24]);
    VAR_0->pad[3] = FUNC_0(&VAR_1[28]);

    VAR_0->leftover = 0;
    VAR_0->final = 0;
}
