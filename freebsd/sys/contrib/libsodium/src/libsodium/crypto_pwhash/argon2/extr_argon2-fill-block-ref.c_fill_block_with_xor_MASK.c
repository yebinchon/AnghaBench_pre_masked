
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * v; } ;
typedef TYPE_1__ const block ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_3(const block *VAR_0, const block *VAR_1,
                    block *VAR_2)
{
    block VAR_3, VAR_4;
    unsigned VAR_5;

    FUNC_1(&VAR_3, VAR_1);
    FUNC_2(&VAR_3, VAR_0);
    FUNC_1(&VAR_4, &VAR_3);
    FUNC_2(&VAR_4,
              VAR_2);




    for (VAR_5 = 0; VAR_5 < 8; ++VAR_5) {
        FUNC_0(
            VAR_3.v[16 * VAR_5], VAR_3.v[16 * VAR_5 + 1], VAR_3.v[16 * VAR_5 + 2],
            VAR_3.v[16 * VAR_5 + 3], VAR_3.v[16 * VAR_5 + 4], VAR_3.v[16 * VAR_5 + 5],
            VAR_3.v[16 * VAR_5 + 6], VAR_3.v[16 * VAR_5 + 7], VAR_3.v[16 * VAR_5 + 8],
            VAR_3.v[16 * VAR_5 + 9], VAR_3.v[16 * VAR_5 + 10], VAR_3.v[16 * VAR_5 + 11],
            VAR_3.v[16 * VAR_5 + 12], VAR_3.v[16 * VAR_5 + 13], VAR_3.v[16 * VAR_5 + 14],
            VAR_3.v[16 * VAR_5 + 15]);
    }



    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        FUNC_0(
            VAR_3.v[2 * VAR_5], VAR_3.v[2 * VAR_5 + 1], VAR_3.v[2 * VAR_5 + 16],
            VAR_3.v[2 * VAR_5 + 17], VAR_3.v[2 * VAR_5 + 32], VAR_3.v[2 * VAR_5 + 33],
            VAR_3.v[2 * VAR_5 + 48], VAR_3.v[2 * VAR_5 + 49], VAR_3.v[2 * VAR_5 + 64],
            VAR_3.v[2 * VAR_5 + 65], VAR_3.v[2 * VAR_5 + 80], VAR_3.v[2 * VAR_5 + 81],
            VAR_3.v[2 * VAR_5 + 96], VAR_3.v[2 * VAR_5 + 97], VAR_3.v[2 * VAR_5 + 112],
            VAR_3.v[2 * VAR_5 + 113]);
    }

    FUNC_1(VAR_2, &VAR_4);
    FUNC_2(VAR_2, &VAR_3);
}
