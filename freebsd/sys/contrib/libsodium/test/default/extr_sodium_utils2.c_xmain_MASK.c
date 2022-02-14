
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,unsigned int,size_t) ;
 int FUNC_2 (char*) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int (*) (int )) ;
 void* FUNC_6 (unsigned int,unsigned int) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (size_t) ;
 int FUNC_9 (unsigned char*,unsigned int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;

int
FUNC_13(void)
{
    void * VAR_4;
    size_t VAR_5;
    unsigned int VAR_6;

    if (FUNC_8(VAR_3 - 1U) != ((void*)0)) {
        return 1;
    }
    if (FUNC_8(0U) == ((void*)0)) {
        return 1;
    }
    if (FUNC_6(VAR_3 / 2U + 1U, VAR_3 / 2U) != ((void*)0)) {
        return 1;
    }
    FUNC_7(FUNC_6(0U, 0U));
    FUNC_7(FUNC_6(0U, 1U));
    FUNC_7(FUNC_6(1U, 0U));

    VAR_4 = FUNC_6(1000U, 50U);
    FUNC_1(VAR_4, 0, 50000U);
    FUNC_7(VAR_4);

    FUNC_7(FUNC_8(0U));
    FUNC_7(((void*)0));
    for (VAR_6 = 0U; VAR_6 < 10000U; VAR_6++) {
        VAR_5 = 1U + FUNC_3(100000U);
        VAR_4 = FUNC_8(VAR_5);
        FUNC_0(VAR_4 != ((void*)0));
        FUNC_1(VAR_4, VAR_6, VAR_5);
        FUNC_10(VAR_4);
        FUNC_7(VAR_4);
    }
    FUNC_2("OK\n");
    VAR_5 = 1U + FUNC_3(100000U);
    VAR_4 = FUNC_8(VAR_5);
    FUNC_0(VAR_4 != ((void*)0));



    FUNC_11(VAR_4);
    FUNC_12(VAR_4);
    FUNC_4(0);

    return 0;
}
