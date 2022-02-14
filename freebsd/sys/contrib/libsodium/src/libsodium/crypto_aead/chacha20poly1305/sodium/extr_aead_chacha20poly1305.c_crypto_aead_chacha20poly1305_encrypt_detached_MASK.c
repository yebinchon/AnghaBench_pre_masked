
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef unsigned char crypto_onetimeauth_poly1305_state ;


 int FUNC_0 (unsigned char*,int ) ;
 unsigned long long VAR_0 ;
 int FUNC_1 (unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char*,int,unsigned char const*,unsigned char const*) ;
 int FUNC_5 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned int,unsigned char const*) ;
 int FUNC_6 (unsigned char*,int) ;

int
FUNC_7(unsigned char *VAR_1,
                                              unsigned char *VAR_2,
                                              unsigned long long *VAR_3,
                                              const unsigned char *VAR_4,
                                              unsigned long long VAR_5,
                                              const unsigned char *VAR_6,
                                              unsigned long long VAR_7,
                                              const unsigned char *VAR_8,
                                              const unsigned char *VAR_9,
                                              const unsigned char *VAR_10)
{
    crypto_onetimeauth_poly1305_state VAR_11;
    unsigned char VAR_12[64U];
    unsigned char VAR_13[8U];

    (void) VAR_8;
    FUNC_4(VAR_12, sizeof VAR_12, VAR_9, VAR_10);
    FUNC_2(&VAR_11, VAR_12);
    FUNC_6(VAR_12, sizeof VAR_12);

    FUNC_3(&VAR_11, VAR_6, VAR_7);
    FUNC_0(VAR_13, (uint64_t) VAR_7);
    FUNC_3(&VAR_11, VAR_13, sizeof VAR_13);

    FUNC_5(VAR_1, VAR_4, VAR_5, VAR_9, 1U, VAR_10);

    FUNC_3(&VAR_11, VAR_1, VAR_5);
    FUNC_0(VAR_13, (uint64_t) VAR_5);
    FUNC_3(&VAR_11, VAR_13, sizeof VAR_13);

    FUNC_1(&VAR_11, VAR_2);
    FUNC_6(&VAR_11, sizeof VAR_11);

    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_0;
    }
    return 0;
}
