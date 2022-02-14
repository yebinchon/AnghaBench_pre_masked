
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ZSTD_dictLoadMethod_e ;
typedef int ZSTD_dictContentType_e ;
typedef void ZSTD_DDict ;
struct TYPE_3__ {void* buff; int size; } ;
typedef TYPE_1__ FUZZ_dict_t ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 size_t FUNC_5 (int *,int ,int) ;
 TYPE_1__ FUNC_6 (int const*,size_t,int *) ;
 int FUNC_7 (void*,void*,int ,int ,int ) ;
 void* FUNC_8 () ;
 void* FUNC_9 (void*,int ) ;
 int FUNC_10 (void*,void*,size_t const,int const*,size_t) ;
 int FUNC_11 (void*,void*,size_t const,int const*,size_t,void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (void*) ;
 void* VAR_0 ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (size_t const) ;

int FUNC_16(const uint8_t *VAR_1, size_t VAR_2)
{


    FUZZ_dataProducer_t *VAR_3 = FUNC_2(VAR_1, VAR_2);
    VAR_2 = FUNC_4(VAR_3);

    FUZZ_dict_t VAR_4;
    ZSTD_DDict* VAR_5 = ((void*)0);

    if (!VAR_0) {
        VAR_0 = FUNC_8();
        FUNC_0(VAR_0);
    }
    VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_3);
    if (FUNC_5(VAR_3, 0, 1) == 0) {
        VAR_5 = FUNC_9(VAR_4.buff, VAR_4.size);
        FUNC_0(VAR_5);
    } else {
        FUNC_1(FUNC_7(
                VAR_0, VAR_4.buff, VAR_4.size,
                (ZSTD_dictLoadMethod_e)FUNC_5(VAR_3, 0, 1),
                (ZSTD_dictContentType_e)FUNC_5(VAR_3, 0, 2)));
    }

    {
        size_t const VAR_6 = FUNC_5(VAR_3, 0, 10 * VAR_2);
        void* VAR_7 = FUNC_15(VAR_6);
        FUNC_0(VAR_7);
        if (VAR_5) {
            FUNC_11(VAR_0, VAR_7, VAR_6, VAR_1, VAR_2, VAR_5);
        } else {
            FUNC_10(VAR_0, VAR_7, VAR_6, VAR_1, VAR_2);
        }
        FUNC_14(VAR_7);
    }
    FUNC_14(VAR_4.buff);
    FUNC_3(VAR_3);
    FUNC_13(VAR_5);

    FUNC_12(VAR_0); VAR_0 = ((void*)0);

    return 0;
}
