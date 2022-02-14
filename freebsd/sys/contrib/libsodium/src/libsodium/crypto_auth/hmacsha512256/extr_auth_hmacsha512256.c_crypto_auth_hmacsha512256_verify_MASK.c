
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned long long,unsigned char const*) ;
 int FUNC_1 (unsigned char const*,unsigned char*) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int) ;

int
FUNC_3(const unsigned char *VAR_0,
                                 const unsigned char *VAR_1,
                                 unsigned long long VAR_2,
                                 const unsigned char *VAR_3)
{
    unsigned char VAR_4[32];

    FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);

    return FUNC_1(VAR_0, VAR_4) | (-(VAR_0 == VAR_4)) |
           FUNC_2(VAR_4, VAR_0, 32);
}
