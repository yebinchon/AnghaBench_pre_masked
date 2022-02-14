
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rsbuf ;
typedef int lsbuf ;
typedef int fsbuf ;


 int FUNC_0 (char*,size_t,char*,unsigned long,...) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long) ;
 char* FUNC_4 (unsigned long) ;
 char* FUNC_5 (unsigned long) ;
 char* FUNC_6 (unsigned long) ;
 size_t FUNC_7 (char*) ;

void FUNC_8(unsigned long VAR_0, char *VAR_1, size_t VAR_2)
{
    char VAR_3[64], VAR_4[64], VAR_5[64];
    const char *VAR_6, *VAR_7, *VAR_8;
    unsigned long VAR_9, VAR_10, VAR_11;

    if (VAR_2 == 0)
        return;

    VAR_9 = FUNC_2(VAR_0);
    VAR_6 = FUNC_5(VAR_0);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_3, sizeof(VAR_3), "lib(%lu)", VAR_9);
        VAR_6 = VAR_3;
    }

    VAR_7 = FUNC_4(VAR_0);
    VAR_10 = FUNC_1(VAR_0);
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_4, sizeof(VAR_4), "func(%lu)", VAR_10);
        VAR_7 = VAR_4;
    }

    VAR_8 = FUNC_6(VAR_0);
    VAR_11 = FUNC_3(VAR_0);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_5, sizeof(VAR_5), "reason(%lu)", VAR_11);
        VAR_8 = VAR_5;
    }

    FUNC_0(VAR_1, VAR_2, "error:%08lX:%s:%s:%s", VAR_0, VAR_6, VAR_7, VAR_8);
    if (FUNC_7(VAR_1) == VAR_2 - 1) {

        FUNC_0(VAR_1, VAR_2, "err:%lx:%lx:%lx:%lx", VAR_0, VAR_9, VAR_10, VAR_11);
    }
}
