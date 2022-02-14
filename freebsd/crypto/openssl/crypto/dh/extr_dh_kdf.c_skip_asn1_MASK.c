
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const**,long*,int*,int*,long) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned char **VAR_2, long *VAR_3, int VAR_4)
{
    const unsigned char *VAR_5 = *VAR_2;
    int VAR_6, VAR_7, VAR_8;
    long VAR_9;
    VAR_6 = FUNC_0(&VAR_5, &VAR_9, &VAR_7, &VAR_8, *VAR_3);
    if (VAR_6 & 0x80)
        return 0;
    if (VAR_7 != VAR_4 || VAR_8 != VAR_1)
        return 0;
    if (VAR_7 == VAR_0)
        VAR_5 += VAR_9;
    *VAR_3 -= VAR_5 - *VAR_2;
    *VAR_2 = (unsigned char *)VAR_5;
    return 1;
}
