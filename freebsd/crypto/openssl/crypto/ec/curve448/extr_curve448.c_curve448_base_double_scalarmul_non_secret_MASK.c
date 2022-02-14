
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smvt_control {int power; int addend; } ;
typedef int precmp_var ;
typedef struct smvt_control pniels_t ;
typedef int curve448_scalar_t ;
typedef int curve448_point_t ;
typedef int control_var ;
typedef int control_pre ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smvt_control*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,struct smvt_control,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct smvt_control) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct smvt_control*,int const,int const) ;
 int FUNC_9 (struct smvt_control*,int const,int const) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,struct smvt_control,int) ;

void FUNC_12(curve448_point_t VAR_5,
                                               const curve448_scalar_t VAR_6,
                                               const curve448_point_t VAR_7,
                                               const curve448_scalar_t VAR_8)
{
    const int VAR_9 = VAR_2;
    const int VAR_10 = VAR_1;
    struct smvt_control VAR_11[VAR_0 /
                                    (VAR_2 + 1) + 3];
    struct smvt_control VAR_12[VAR_0 /
                                    (VAR_1 + 1) + 3];
    int VAR_13 = FUNC_9(VAR_12, VAR_6, VAR_10);
    int VAR_14 = FUNC_9(VAR_11, VAR_8, VAR_9);
    pniels_t VAR_15[1 << VAR_2];
    int VAR_16 = 0, VAR_17 = 0, VAR_18;

    FUNC_8(VAR_15, VAR_7, VAR_9);
    VAR_18 = VAR_11[0].power;

    if (VAR_18 < 0) {
        FUNC_4(VAR_5, VAR_3);
        return;
    }
    if (VAR_18 > VAR_12[0].power) {
        FUNC_6(VAR_5, VAR_15[VAR_11[0].addend >> 1]);
        VAR_17++;
    } else if (VAR_18 == VAR_12[0].power && VAR_18 >= 0) {
        FUNC_6(VAR_5, VAR_15[VAR_11[0].addend >> 1]);
        FUNC_1(VAR_5, VAR_4[VAR_12[0].addend >> 1],
                        VAR_18);
        VAR_17++;
        VAR_16++;
    } else {
        VAR_18 = VAR_12[0].power;
        FUNC_5(VAR_5, VAR_4[VAR_12[0].addend >> 1]);
        VAR_16++;
    }

    for (VAR_18--; VAR_18 >= 0; VAR_18--) {
        int VAR_19 = (VAR_18 == VAR_11[VAR_17].power);
        int VAR_20 = (VAR_18 == VAR_12[VAR_16].power);

        FUNC_7(VAR_5, VAR_5, VAR_18 && !(VAR_19 || VAR_20));

        if (VAR_19) {
            FUNC_3(VAR_11[VAR_17].addend);

            if (VAR_11[VAR_17].addend > 0)
                FUNC_2(VAR_5,
                                 VAR_15[VAR_11[VAR_17].addend >> 1],
                                 VAR_18 && !VAR_20);
            else
                FUNC_11(VAR_5,
                                   VAR_15[(-VAR_11[VAR_17].addend)
                                              >> 1], VAR_18 && !VAR_20);
            VAR_17++;
        }

        if (VAR_20) {
            FUNC_3(VAR_12[VAR_16].addend);

            if (VAR_12[VAR_16].addend > 0)
                FUNC_1(VAR_5,
                                VAR_4[VAR_12[VAR_16].addend
                                                   >> 1], VAR_18);
            else
                FUNC_10(VAR_5,
                                  VAR_4[(-VAR_12
                                                      [VAR_16].addend) >> 1], VAR_18);
            VAR_16++;
        }
    }


    FUNC_0(VAR_11, sizeof(VAR_11));
    FUNC_0(VAR_12, sizeof(VAR_12));
    FUNC_0(VAR_15, sizeof(VAR_15));

    FUNC_3(VAR_17 == VAR_14);
    (void)VAR_14;
    FUNC_3(VAR_16 == VAR_13);
    (void)VAR_13;
}
