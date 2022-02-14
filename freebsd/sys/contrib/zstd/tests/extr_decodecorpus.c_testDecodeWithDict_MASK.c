
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ genType_e ;
struct TYPE_4__ {scalar_t__ srcStart; scalar_t__ src; scalar_t__ dataStart; scalar_t__ data; } ;
typedef TYPE_1__ frame_t ;
typedef int dictInfo ;
typedef int ZSTD_DCtx ;
typedef int U32 ;
typedef int BYTE ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int VAR_1 ;
 size_t FUNC_1 (size_t const,int) ;
 int VAR_2 ;
 int FUNC_2 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 () ;
 size_t FUNC_4 (int * const,int * const,size_t const) ;
 size_t FUNC_5 (int * const,int ,int ,scalar_t__,int) ;
 size_t FUNC_6 (int * const,int ,int ,scalar_t__,int,int * const,size_t const) ;
 int FUNC_7 (int * const) ;
 scalar_t__ FUNC_8 (size_t) ;
 int VAR_5 ;
 int FUNC_9 (int * const) ;
 scalar_t__ FUNC_10 (int const,int,size_t const,int * const) ;
 int FUNC_11 (int,TYPE_1__*,int ) ;
 int FUNC_12 (int,TYPE_1__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (int,size_t const,int * const,int const) ;
 int * FUNC_14 (size_t const) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,int) ;

__attribute__((used)) static size_t FUNC_16(U32 VAR_7, genType_e VAR_8)
{

    size_t const VAR_9 = FUNC_2(&VAR_7) % (10 << 20) + VAR_4 + VAR_3;
    U32 const VAR_10 = FUNC_2(&VAR_7);
    size_t VAR_11 = 0;
    BYTE* const VAR_12 = FUNC_14(VAR_9);
    if (VAR_12 == ((void*)0)) {
        return FUNC_0(VAR_1);
    }


    if (FUNC_10(VAR_10, VAR_7, VAR_9, VAR_12)) {
        VAR_11 = FUNC_0(VAR_1);
        goto dictTestCleanup;
    }


    { frame_t VAR_13;
        dictInfo VAR_14;
        ZSTD_DCtx* const VAR_15 = FUNC_3();
        size_t VAR_16;


        { size_t const VAR_17 = FUNC_1(VAR_9/4, 256);
            size_t const VAR_18 = VAR_9-VAR_17;
            BYTE* const VAR_19 = VAR_12+VAR_17;
            VAR_14 = FUNC_13(1, VAR_18, VAR_19, VAR_10);
        }


        if (VAR_8 == VAR_6) {

            FUNC_12(VAR_7, &VAR_13, VAR_14);
            VAR_16 = FUNC_6(VAR_15, VAR_0, VAR_2,
                                            VAR_13.dataStart, (BYTE*)VAR_13.data - (BYTE*)VAR_13.dataStart,
                                            VAR_12, VAR_9);
        } else {

            FUNC_11(VAR_7, &VAR_13, VAR_14);
            VAR_16 = FUNC_4(VAR_15, VAR_12, VAR_9);
            if (FUNC_8(VAR_16)) {
                VAR_11 = VAR_16;
                FUNC_7(VAR_15);
                goto dictTestCleanup;
            }
            VAR_16 = FUNC_5(VAR_15, VAR_0, VAR_2,
                                       VAR_13.dataStart, (BYTE*)VAR_13.data - (BYTE*)VAR_13.dataStart);
        }
        FUNC_7(VAR_15);

        if (FUNC_8(VAR_16)) {
            VAR_11 = VAR_16;
            goto dictTestCleanup;
        }

        if (FUNC_15(VAR_0, VAR_13.srcStart, (BYTE*)VAR_13.src - (BYTE*)VAR_13.srcStart) != 0) {
            VAR_11 = FUNC_0(VAR_5);
            goto dictTestCleanup;
        }
    }

dictTestCleanup:
    FUNC_9(VAR_12);
    return VAR_11;
}
