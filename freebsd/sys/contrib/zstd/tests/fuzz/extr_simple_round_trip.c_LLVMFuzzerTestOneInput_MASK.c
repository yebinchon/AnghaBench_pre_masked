
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (size_t const) ;
 int * FUNC_3 (int const*,size_t) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;
 size_t FUNC_7 (size_t) ;
 int * FUNC_8 () ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_12 (void*) ;
 void* FUNC_13 (size_t const) ;
 int FUNC_14 (int const*,void*,size_t) ;
 size_t FUNC_15 (void*,size_t const,void*,size_t,int const*,size_t,int *) ;

int FUNC_16(const uint8_t *VAR_2, size_t VAR_3)
{
    size_t const VAR_4 = VAR_3;
    void* VAR_5 = FUNC_13(VAR_4);
    size_t VAR_6 = FUNC_7(VAR_3);
    void* VAR_7;



    FUZZ_dataProducer_t *VAR_8 = FUNC_3(VAR_2, VAR_3);
    VAR_3 = FUNC_5(VAR_8);





    VAR_6 -= FUNC_6(VAR_8, 0, 1);

    VAR_7 = FUNC_13(VAR_6);

    FUNC_0(VAR_7 && VAR_5);

    if (!VAR_0) {
        VAR_0 = FUNC_8();
        FUNC_0(*VAR_0);
    }
    if (!VAR_1) {
        VAR_1 = FUNC_9();
        FUNC_0(*VAR_1);
    }

    {
        size_t const VAR_9 =
            FUNC_15(VAR_5, VAR_4, VAR_7, VAR_6, VAR_2, VAR_3, VAR_8);
        FUNC_2(VAR_9);
        FUNC_1(VAR_9 == VAR_3, "Incorrect regenerated size");
        FUNC_1(!FUNC_14(VAR_2, VAR_5, VAR_3), "Corruption!");
    }
    FUNC_12(VAR_5);
    FUNC_12(VAR_7);
    FUNC_4(VAR_8);

    FUNC_10(VAR_0); VAR_0 = ((void*)0);
    FUNC_11(VAR_1); VAR_1 = ((void*)0);

    return 0;
}
