
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned long long*,unsigned char*,unsigned long long,unsigned char const*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned long long) ;
 int FUNC_2 (unsigned char*,int ,unsigned long long) ;

int
FUNC_3(unsigned char *VAR_1, unsigned long long *VAR_2,
                    const unsigned char *VAR_3, unsigned long long VAR_4,
                    const unsigned char *VAR_5)
{
    unsigned long long VAR_6;

    FUNC_1(VAR_1 + VAR_0, VAR_3, VAR_4);

    if (FUNC_0(
            VAR_1, &VAR_6, VAR_1 + VAR_0, VAR_4, VAR_5) != 0 ||
        VAR_6 != VAR_0) {
        if (VAR_2 != ((void*)0)) {
            *VAR_2 = 0;
        }
        FUNC_2(VAR_1, 0, VAR_4 + VAR_0);
        return -1;
    }


    if (VAR_2 != ((void*)0)) {
        *VAR_2 = VAR_4 + VAR_6;
    }
    return 0;
}
