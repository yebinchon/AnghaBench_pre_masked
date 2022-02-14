
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * h; } ;
typedef TYPE_1__ blake2b_state ;
typedef int blake2b_param ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(blake2b_state *VAR_0, const blake2b_param *VAR_1)
{
    size_t VAR_2;
    const uint8_t *VAR_3;

    FUNC_0(sizeof *VAR_1 == 64);
    FUNC_2(VAR_0);
    VAR_3 = (const uint8_t *) (VAR_1);


    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_0->h[VAR_2] ^= FUNC_1(VAR_3 + sizeof(VAR_0->h[VAR_2]) * VAR_2);
    }
    return 0;
}
