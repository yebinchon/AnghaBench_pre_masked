
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * h; } ;
typedef int BLAKE2B_PARAM ;
typedef TYPE_1__ BLAKE2B_CTX ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static void FUNC_3(BLAKE2B_CTX *VAR_0, const BLAKE2B_PARAM *VAR_1)
{
    size_t VAR_2;
    const uint8_t *VAR_3 = (const uint8_t *)(VAR_1);
    FUNC_1(VAR_0);



    FUNC_0(sizeof(BLAKE2B_PARAM) == 64);

    for (VAR_2 = 0; VAR_2 < 8; ++VAR_2) {
        VAR_0->h[VAR_2] ^= FUNC_2(VAR_3 + sizeof(VAR_0->h[VAR_2]) * VAR_2);
    }
}
