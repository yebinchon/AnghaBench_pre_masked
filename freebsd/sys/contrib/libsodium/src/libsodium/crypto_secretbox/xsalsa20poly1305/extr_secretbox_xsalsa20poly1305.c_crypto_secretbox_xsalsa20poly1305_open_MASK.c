
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,unsigned long long,unsigned char*) ;
 int FUNC_1 (unsigned char*,int,unsigned char const*,unsigned char const*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char const*) ;

int
FUNC_3(unsigned char *VAR_0, const unsigned char *VAR_1,
                                       unsigned long long VAR_2,
                                       const unsigned char *VAR_3,
                                       const unsigned char *VAR_4)
{
    unsigned char VAR_5[32];
    int VAR_6;

    if (VAR_2 < 32) {
        return -1;
    }
    FUNC_1(VAR_5, 32, VAR_3, VAR_4);
    if (FUNC_0(VAR_1 + 16, VAR_1 + 32,
                                           VAR_2 - 32, VAR_5) != 0) {
        return -1;
    }
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    for (VAR_6 = 0; VAR_6 < 32; ++VAR_6) {
        VAR_0[VAR_6] = 0;
    }
    return 0;
}
