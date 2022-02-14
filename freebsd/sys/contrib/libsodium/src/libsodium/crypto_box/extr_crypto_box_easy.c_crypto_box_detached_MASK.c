
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned char*,unsigned char const*,unsigned char const*) ;
 int FUNC_2 (unsigned char*,unsigned char*,unsigned char const*,unsigned long long,unsigned char const*,unsigned char*) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*,int) ;

int
FUNC_4(unsigned char *VAR_2, unsigned char *VAR_3,
                    const unsigned char *VAR_4, unsigned long long VAR_5,
                    const unsigned char *VAR_6, const unsigned char *VAR_7,
                    const unsigned char *VAR_8)
{
    unsigned char VAR_9[VAR_0];
    int VAR_10;

    FUNC_0(VAR_0 >= VAR_1);
    if (FUNC_1(VAR_9, VAR_7, VAR_8) != 0) {
        return -1;
    }
    VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);
    FUNC_3(VAR_9, sizeof VAR_9);

    return VAR_10;
}
