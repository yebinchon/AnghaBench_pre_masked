
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 long FUNC_1 (char const*,char**,int ) ;

int FUNC_2(const char *VAR_4, long *VAR_5)
{
    int VAR_6 = VAR_3;
    long VAR_7;
    char *VAR_8;

    VAR_3 = 0;
    VAR_7 = FUNC_1(VAR_4, &VAR_8, 0);
    if (*VAR_8
            || VAR_8 == VAR_4
            || ((VAR_7 == VAR_1 || VAR_7 == VAR_2) && VAR_3 == VAR_0)
            || (VAR_7 == 0 && VAR_3 != 0)) {
        FUNC_0(VAR_4);
        VAR_3 = VAR_6;
        return 0;
    }
    *VAR_5 = VAR_7;
    VAR_3 = VAR_6;
    return 1;
}
