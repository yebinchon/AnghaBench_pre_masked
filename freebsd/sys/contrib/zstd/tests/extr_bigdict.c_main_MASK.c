
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_DCtx ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (char*,size_t const,double,double,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_3 (size_t const) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *,int *,void*,size_t const,char*,size_t const,void*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;
 void* FUNC_12 (size_t const) ;
 int VAR_14 ;

int FUNC_13(int VAR_15, const char** VAR_16)
{
    ZSTD_CCtx* VAR_17 = FUNC_4();
    ZSTD_DCtx* VAR_18 = FUNC_5();
    const size_t VAR_19 = (size_t)1 << 30;
    const size_t VAR_20 = FUNC_3(VAR_19);
    const size_t VAR_21 = (size_t)1 << 31;
    char* VAR_22 = (char*)FUNC_12(VAR_21);
    void* VAR_23 = FUNC_12(VAR_20);
    void* VAR_24 = FUNC_12(VAR_19);
    (void)VAR_15;
    (void)VAR_16;

    if (!VAR_22 || !VAR_23 || !VAR_24 || !VAR_17 || !VAR_18) {
        FUNC_10(VAR_14, "Allocation failure\n");
        return 1;
    }

    if (FUNC_8(FUNC_1(VAR_17, VAR_10, 31)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_5, 1)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_6, 9)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_2, 1)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_8, VAR_0)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_9, 7)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_4, 7)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_7, 1)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_3, 10)))
        return 1;
    if (FUNC_8(FUNC_1(VAR_17, VAR_1, 10)))
        return 1;

    if (FUNC_8(FUNC_2(VAR_18, VAR_11, 31)))
        return 1;

    FUNC_0(VAR_22, VAR_21, 1.0, 0.0, 0xbeefcafe);


    {
        int VAR_25;
        for (VAR_25 = 0; VAR_25 < 10; ++VAR_25) {
            FUNC_10(VAR_14, "Compressing 1 GB\n");
            if (FUNC_9(VAR_17, VAR_18, VAR_23, VAR_20, VAR_22, VAR_19, VAR_24, VAR_12))
                return 1;
        }
    }
    FUNC_10(VAR_14, "Compressing 1 GB\n");
    if (FUNC_9(VAR_17, VAR_18, VAR_23, VAR_20, VAR_22, VAR_19, VAR_24, VAR_13))
        return 1;

    FUNC_10(VAR_14, "Success!\n");

    FUNC_11(VAR_24);
    FUNC_11(VAR_23);
    FUNC_11(VAR_22);
    FUNC_7(VAR_18);
    FUNC_6(VAR_17);
    return 0;
}
