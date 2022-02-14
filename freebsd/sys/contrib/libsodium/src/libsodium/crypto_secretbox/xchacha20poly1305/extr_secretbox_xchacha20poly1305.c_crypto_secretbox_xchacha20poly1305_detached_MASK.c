
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned char const*,int *) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned long long) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (unsigned char*,unsigned char*,unsigned long long,unsigned char const*,unsigned char*) ;
 int FUNC_6 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned int,unsigned char*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,unsigned long long) ;
 int FUNC_8 (unsigned char*,unsigned int,unsigned int) ;
 int FUNC_9 (unsigned char*,int) ;

int
FUNC_10(unsigned char *VAR_3,
                                            unsigned char *VAR_4,
                                            const unsigned char *VAR_5,
                                            unsigned long long VAR_6,
                                            const unsigned char *VAR_7,
                                            const unsigned char *VAR_8)
{
    crypto_onetimeauth_poly1305_state VAR_9;
    unsigned char VAR_10[64U];
    unsigned char VAR_11[VAR_2];
    unsigned long long VAR_12;
    unsigned long long VAR_13;

    FUNC_1(VAR_11, VAR_7, VAR_8, ((void*)0));

    if (((uintptr_t) VAR_3 > (uintptr_t) VAR_5 &&
         (uintptr_t) VAR_3 - (uintptr_t) VAR_5 < VAR_6) ||
        ((uintptr_t) VAR_5 > (uintptr_t) VAR_3 &&
         (uintptr_t) VAR_5 - (uintptr_t) VAR_3 < VAR_6)) {
        FUNC_7(VAR_3, VAR_5, VAR_6);
        VAR_5 = VAR_3;
    }
    FUNC_8(VAR_10, 0U, VAR_1);
    FUNC_0(64U >= VAR_1);
    VAR_13 = VAR_6;
    if (VAR_13 > 64U - VAR_1) {
        VAR_13 = 64U - VAR_1;
    }
    for (VAR_12 = 0U; VAR_12 < VAR_13; VAR_12++) {
        VAR_10[VAR_12 + VAR_1] = VAR_5[VAR_12];
    }
    FUNC_5(VAR_10, VAR_10,
                               VAR_13 + VAR_1,
                               VAR_7 + 16, VAR_11);
    FUNC_0(VAR_1 >=
                    VAR_0);
    FUNC_3(&VAR_9, VAR_10);

    for (VAR_12 = 0U; VAR_12 < VAR_13; VAR_12++) {
        VAR_3[VAR_12] = VAR_10[VAR_1 + VAR_12];
    }
    FUNC_9(VAR_10, sizeof VAR_10);
    if (VAR_6 > VAR_13) {
        FUNC_6(VAR_3 + VAR_13, VAR_5 + VAR_13, VAR_6 - VAR_13,
                                      VAR_7 + 16, 1U, VAR_11);
    }
    FUNC_9(VAR_11, sizeof VAR_11);

    FUNC_4(&VAR_9, VAR_3, VAR_6);
    FUNC_2(&VAR_9, VAR_4);
    FUNC_9(&VAR_9, sizeof VAR_9);

    return 0;
}
