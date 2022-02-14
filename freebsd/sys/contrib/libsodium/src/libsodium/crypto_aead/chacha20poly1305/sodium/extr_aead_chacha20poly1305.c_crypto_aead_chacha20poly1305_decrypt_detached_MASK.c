
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (unsigned char*,int,unsigned char const*,unsigned char const*) ;
 int FUNC_6 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned int,unsigned char const*) ;
 int FUNC_7 (unsigned char*,unsigned char const*) ;
 int FUNC_8 (unsigned char*,int ,unsigned long long) ;
 int FUNC_9 (unsigned char*,int) ;

int
FUNC_10(unsigned char *VAR_1,
                                              unsigned char *VAR_2,
                                              const unsigned char *VAR_3,
                                              unsigned long long VAR_4,
                                              const unsigned char *VAR_5,
                                              const unsigned char *VAR_6,
                                              unsigned long long VAR_7,
                                              const unsigned char *VAR_8,
                                              const unsigned char *VAR_9)
{
    crypto_onetimeauth_poly1305_state VAR_10;
    unsigned char VAR_11[64U];
    unsigned char VAR_12[8U];
    unsigned char VAR_13[VAR_0];
    unsigned long long VAR_14;
    int VAR_15;

    (void) VAR_2;
    FUNC_5(VAR_11, sizeof VAR_11, VAR_8, VAR_9);
    FUNC_3(&VAR_10, VAR_11);
    FUNC_9(VAR_11, sizeof VAR_11);

    FUNC_4(&VAR_10, VAR_6, VAR_7);
    FUNC_1(VAR_12, (uint64_t) VAR_7);
    FUNC_4(&VAR_10, VAR_12, sizeof VAR_12);

    VAR_14 = VAR_4;
    FUNC_4(&VAR_10, VAR_3, VAR_14);
    FUNC_1(VAR_12, (uint64_t) VAR_14);
    FUNC_4(&VAR_10, VAR_12, sizeof VAR_12);

    FUNC_2(&VAR_10, VAR_13);
    FUNC_9(&VAR_10, sizeof VAR_10);

    FUNC_0(sizeof VAR_13 == 16U);
    VAR_15 = FUNC_7(VAR_13, VAR_5);
    FUNC_9(VAR_13, sizeof VAR_13);
    if (VAR_1 == ((void*)0)) {
        return VAR_15;
    }
    if (VAR_15 != 0) {
        FUNC_8(VAR_1, 0, VAR_14);
        return -1;
    }
    FUNC_6(VAR_1, VAR_3, VAR_14, VAR_8, 1U, VAR_9);

    return 0;
}
