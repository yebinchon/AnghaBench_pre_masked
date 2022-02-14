
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int scalar1x ;
typedef TYPE_1__* niels_t ;
typedef int ni ;
typedef int mask_t ;
typedef TYPE_1__* curve448_scalar_t ;
struct TYPE_16__ {int * table; } ;
typedef TYPE_3__ curve448_precomputed_s ;
typedef int curve448_point_t ;
struct TYPE_15__ {unsigned int* limb; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__* const,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_5 ;

void FUNC_8(curve448_point_t VAR_6,
                                    const curve448_precomputed_s * VAR_7,
                                    const curve448_scalar_t VAR_8)
{
    unsigned int VAR_9, VAR_10, VAR_11;
    const unsigned int VAR_12 = VAR_1, VAR_13 = VAR_3, VAR_14 = VAR_2;
    niels_t VAR_15;
    curve448_scalar_t VAR_16;

    FUNC_4(VAR_16, VAR_8, VAR_5);
    FUNC_5(VAR_16, VAR_16);

    for (VAR_9 = VAR_14; VAR_9 > 0; VAR_9--) {
        if (VAR_9 != VAR_14)
            FUNC_7(VAR_6, VAR_6, 0);

        for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
            int VAR_17 = 0;
            mask_t VAR_18;

            for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
                unsigned int VAR_19 = (VAR_9 - 1) + VAR_14 * (VAR_11 + VAR_10 * VAR_13);

                if (VAR_19 < VAR_0)
                    VAR_17 |=
                        (VAR_16->limb[VAR_19 / VAR_4] >> (VAR_19 % VAR_4) & 1) << VAR_11;
            }

            VAR_18 = (VAR_17 >> (VAR_13 - 1)) - 1;
            VAR_17 ^= VAR_18;
            VAR_17 &= (1 << (VAR_13 - 1)) - 1;

            FUNC_3(VAR_15, &VAR_7->table[VAR_10 << (VAR_13 - 1)],
                                       1 << (VAR_13 - 1), VAR_17);

            FUNC_2(VAR_15, VAR_18);
            if ((VAR_9 != VAR_14) || VAR_10 != 0)
                FUNC_1(VAR_6, VAR_15, VAR_10 == VAR_12 - 1 && VAR_9 != 1);
            else
                FUNC_6(VAR_6, VAR_15);
        }
    }

    FUNC_0(VAR_15, sizeof(VAR_15));
    FUNC_0(VAR_16, sizeof(VAR_16));
}
