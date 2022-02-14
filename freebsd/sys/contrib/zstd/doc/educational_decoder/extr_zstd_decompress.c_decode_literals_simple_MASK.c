
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int istream_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int * const,int) ;
 size_t FUNC_4 (int * const,int) ;
 int FUNC_5 (int * const,int) ;
 size_t VAR_0 ;
 int * FUNC_6 (size_t) ;
 int FUNC_7 (int *,int const* const,size_t) ;
 int FUNC_8 (int *,int const,size_t) ;

__attribute__((used)) static size_t FUNC_9(istream_t *const VAR_1, u8 **const VAR_2,
                                     const int VAR_3,
                                     const int VAR_4) {
    size_t VAR_5;
    switch (VAR_4) {


    case 0:
    case 2:

        FUNC_5(VAR_1, 1);
        VAR_5 = FUNC_4(VAR_1, 5);
        break;
    case 1:

        VAR_5 = FUNC_4(VAR_1, 12);
        break;
    case 3:

        VAR_5 = FUNC_4(VAR_1, 20);
        break;
    default:

        FUNC_2();
    }

    if (VAR_5 > VAR_0) {
        FUNC_1();
    }

    *VAR_2 = FUNC_6(VAR_5);
    if (!*VAR_2) {
        FUNC_0();
    }

    switch (VAR_3) {
    case 0: {

        const u8 *const VAR_6 = FUNC_3(VAR_1, VAR_5);
        FUNC_7(*VAR_2, VAR_6, VAR_5);
        break;
    }
    case 1: {

        const u8 *const VAR_7 = FUNC_3(VAR_1, 1);
        FUNC_8(*VAR_2, VAR_7[0], VAR_5);
        break;
    }
    default:
        FUNC_2();
    }

    return VAR_5;
}
