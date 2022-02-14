
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int twop ;
typedef int pniels_t ;
typedef int const curve448_point_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int const,int ,int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int const) ;
 int FUNC_4 (int ,int const) ;

__attribute__((used)) static void FUNC_5(pniels_t * VAR_0,
                               const curve448_point_t VAR_1,
                               unsigned int VAR_2)
{
    curve448_point_t VAR_3;
    int VAR_4;
    pniels_t VAR_5;

    FUNC_4(VAR_0[0], VAR_1);

    if (VAR_2 == 0)
        return;

    FUNC_3(VAR_3, VAR_1);
    FUNC_4(VAR_5, VAR_3);

    FUNC_1(VAR_3, VAR_0[0], 0);
    FUNC_4(VAR_0[1], VAR_3);

    for (VAR_4 = 2; VAR_4 < 1 << VAR_2; VAR_4++) {
        FUNC_1(VAR_3, VAR_5, 0);
        FUNC_4(VAR_0[VAR_4], VAR_3);
    }

    FUNC_2(VAR_3);
    FUNC_0(VAR_5, sizeof(VAR_5));
}
