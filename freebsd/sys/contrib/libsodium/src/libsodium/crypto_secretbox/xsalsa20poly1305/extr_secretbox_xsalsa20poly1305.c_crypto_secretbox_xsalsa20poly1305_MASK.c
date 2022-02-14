
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned long long,unsigned char*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char const*) ;

int
FUNC_2(unsigned char *VAR_0, const unsigned char *VAR_1,
                                  unsigned long long VAR_2,
                                  const unsigned char *VAR_3,
                                  const unsigned char *VAR_4)
{
    int VAR_5;

    if (VAR_2 < 32) {
        return -1;
    }
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    FUNC_0(VAR_0 + 16, VAR_0 + 32, VAR_2 - 32, VAR_0);
    for (VAR_5 = 0; VAR_5 < 16; ++VAR_5) {
        VAR_0[VAR_5] = 0;
    }
    return 0;
}
