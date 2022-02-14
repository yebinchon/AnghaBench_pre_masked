
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ pos; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ size; int member_2; int member_1; int * member_0; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int FUZZ_dataProducer_t ;


 int FUNC_0 (size_t const) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,size_t const,int *) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,TYPE_1__*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ FUNC_5 (int const**,size_t*,int *) ;
 TYPE_1__ FUNC_6 (int *,size_t,int *) ;

__attribute__((used)) static size_t FUNC_7(uint8_t *VAR_5, size_t VAR_6,
                       const uint8_t *VAR_7, size_t VAR_8,
                     FUZZ_dataProducer_t *VAR_9)
{
    size_t VAR_10 = 0;
    FUNC_3(VAR_4, VAR_3);
    FUNC_2(VAR_4, VAR_8, VAR_9);

    while (VAR_8 > 0) {
        ZSTD_inBuffer VAR_11 = FUNC_5(&VAR_7, &VAR_8, VAR_9);

        int VAR_12 = -1;
        while (VAR_11.pos < VAR_11.size || VAR_12 != -1) {
            ZSTD_outBuffer VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_9);

            if (VAR_12 == -1) VAR_12 = FUNC_1(VAR_9, 0, 9);
            switch (VAR_12) {
                case 0:
                case 1:
                case 2: {
                    size_t const VAR_14 =
                        FUNC_4(VAR_4, &VAR_13, &VAR_11, VAR_2);
                    FUNC_0(VAR_14);
                    if (VAR_14 == 0)
                        VAR_12 = -1;
                    break;
                }
                case 3: {
                    size_t VAR_15 =
                        FUNC_4(VAR_4, &VAR_13, &VAR_11, VAR_1);
                    FUNC_0(VAR_15);

                    if (VAR_15 == 0) {
                        FUNC_3(VAR_4, VAR_3);
                        if (FUNC_1(VAR_9, 0, 7) == 0) {
                            size_t const VAR_16 = VAR_11.size - VAR_11.pos;
                            FUNC_2(VAR_4, VAR_16, VAR_9);
                        }
                        VAR_12 = -1;
                    }
                    break;
                }
                default: {
                    size_t const VAR_17 =
                        FUNC_4(VAR_4, &VAR_13, &VAR_11, VAR_0);
                    FUNC_0(VAR_17);
                    VAR_12 = -1;
                }
            }
            VAR_5 += VAR_13.pos;
            VAR_10 += VAR_13.pos;
            VAR_6 -= VAR_13.pos;
        }
    }
    for (;;) {
        ZSTD_inBuffer VAR_18 = {((void*)0), 0, 0};
        ZSTD_outBuffer VAR_19 = FUNC_6(VAR_5, VAR_6, VAR_9);
        size_t const VAR_20 = FUNC_4(VAR_4, &VAR_19, &VAR_18, VAR_1);
        FUNC_0(VAR_20);

        VAR_5 += VAR_19.pos;
        VAR_10 += VAR_19.pos;
        VAR_6 -= VAR_19.pos;
        if (VAR_20 == 0)
            break;
    }
    return VAR_10;
}
