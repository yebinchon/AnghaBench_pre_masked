
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const ge25519_p3 ;
typedef int ge25519_p1p1 ;
typedef int ge25519_cached ;


 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,int const*,int *) ;

__attribute__((used)) static void
FUNC_6(ge25519_p3 *VAR_0, const ge25519_p3 *VAR_1)
{
    static const signed char VAR_2[253] = {
        13, 0, 0, 0, 0, -1, 0, 0, 0, 0, -11, 0, 0, 0, 0, 0, 0, -5, 0, 0, 0, 0, 0, 0, -3, 0, 0, 0, 0, -13, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -13, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, -13, 0, 0, 0, 0, 0, 0, -3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 3, 0, 0, 0, 0, -11, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 7, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
    };
    ge25519_cached VAR_3[8];
    ge25519_p1p1 VAR_4;
    ge25519_p3 VAR_5;
    ge25519_p3 VAR_6;
    int VAR_7;

    FUNC_4(&VAR_3[0], VAR_1);
    FUNC_3(&VAR_4, VAR_1);
    FUNC_1(&VAR_6, &VAR_4);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[0]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[1], &VAR_5);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[1]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[2], &VAR_5);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[2]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[3], &VAR_5);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[3]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[4], &VAR_5);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[4]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[5], &VAR_5);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[5]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[6], &VAR_5);
    FUNC_0(&VAR_4, &VAR_6, &VAR_3[6]);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_4(&VAR_3[7], &VAR_5);

    FUNC_2(VAR_0);

    for (VAR_7 = 252; VAR_7 >= 0; --VAR_7) {
        FUNC_3(&VAR_4, VAR_0);

        if (VAR_2[VAR_7] > 0) {
            FUNC_1(&VAR_5, &VAR_4);
            FUNC_0(&VAR_4, &VAR_5, &VAR_3[VAR_2[VAR_7] / 2]);
        } else if (VAR_2[VAR_7] < 0) {
            FUNC_1(&VAR_5, &VAR_4);
            FUNC_5(&VAR_4, &VAR_5, &VAR_3[(-VAR_2[VAR_7]) / 2]);
        }

        FUNC_1(VAR_0, &VAR_4);
    }
}
