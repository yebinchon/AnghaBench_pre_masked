
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curve448_scalar_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,unsigned char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,unsigned char const*,size_t) ;

void FUNC_8(curve448_scalar_t VAR_4,
                                 const unsigned char *VAR_5, size_t VAR_6)
{
    size_t VAR_7;
    curve448_scalar_t VAR_8, VAR_9;

    if (VAR_6 == 0) {
        FUNC_2(VAR_4, VAR_2);
        return;
    }

    VAR_7 = VAR_6 - (VAR_6 % VAR_0);
    if (VAR_7 == VAR_6)
        VAR_7 -= VAR_0;

    FUNC_7(VAR_8, &VAR_5[VAR_7], VAR_6 - VAR_7);

    if (VAR_6 == sizeof(curve448_scalar_t)) {
        FUNC_0(VAR_7 == 0);

        FUNC_5(VAR_4, VAR_8, VAR_1);
        FUNC_4(VAR_8);
        return;
    }

    while (VAR_7) {
        VAR_7 -= VAR_0;
        FUNC_6(VAR_8, VAR_8, VAR_3);
        (void)FUNC_3(VAR_9, VAR_5 + VAR_7);
        FUNC_1(VAR_8, VAR_8, VAR_9);
    }

    FUNC_2(VAR_4, VAR_8);
    FUNC_4(VAR_8);
    FUNC_4(VAR_9);
}
