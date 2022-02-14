
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {void** input; } ;
typedef TYPE_1__ chacha_ctx ;


 void* FUNC_0 (int const*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(chacha_ctx *VAR_0, const uint8_t *VAR_1)
{
    VAR_0->input[0] = FUNC_1(0x61707865);
    VAR_0->input[1] = FUNC_1(0x3320646e);
    VAR_0->input[2] = FUNC_1(0x79622d32);
    VAR_0->input[3] = FUNC_1(0x6b206574);
    VAR_0->input[4] = FUNC_0(VAR_1 + 0);
    VAR_0->input[5] = FUNC_0(VAR_1 + 4);
    VAR_0->input[6] = FUNC_0(VAR_1 + 8);
    VAR_0->input[7] = FUNC_0(VAR_1 + 12);
    VAR_0->input[8] = FUNC_0(VAR_1 + 16);
    VAR_0->input[9] = FUNC_0(VAR_1 + 20);
    VAR_0->input[10] = FUNC_0(VAR_1 + 24);
    VAR_0->input[11] = FUNC_0(VAR_1 + 28);
}
