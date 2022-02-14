
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned long long,unsigned char*,unsigned char const*,unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int) ;

int
FUNC_5(unsigned char *VAR_3, const unsigned char *VAR_4,
                unsigned long long VAR_5, const unsigned char *VAR_6)
{
    unsigned char VAR_7[VAR_0];
    unsigned char VAR_8[VAR_1];
    unsigned char VAR_9[VAR_2];
    int VAR_10;

    if (FUNC_2(VAR_8, VAR_9) != 0) {
        return -1;
    }
    FUNC_3(VAR_3, VAR_8, VAR_1);
    FUNC_0(VAR_7, VAR_8, VAR_6);
    VAR_10 = FUNC_1(VAR_3 + VAR_1, VAR_4, VAR_5,
                          VAR_7, VAR_6, VAR_9);
    FUNC_4(VAR_9, sizeof VAR_9);
    FUNC_4(VAR_8, sizeof VAR_8);
    FUNC_4(VAR_7, sizeof VAR_7);

    return VAR_10;
}
