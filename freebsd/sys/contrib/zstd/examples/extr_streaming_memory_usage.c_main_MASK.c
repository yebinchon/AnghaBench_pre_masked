
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int decompressedData ;
typedef int dataToCompress ;
typedef int compressedData ;
struct TYPE_8__ {char* member_0; int member_1; size_t pos; int member_2; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_9__ {char const* member_0; int member_1; int member_2; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_DCtx ;
typedef int ZSTD_CCtx_params ;
typedef int ZSTD_CCtx ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t const FUNC_2 (int * const,int ,unsigned int) ;
 size_t const FUNC_3 (int * const,int * const) ;
 size_t const FUNC_4 (int * const,int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t const FUNC_5 (int * const,TYPE_1__*,TYPE_2__*) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 () ;
 int VAR_5 ;
 size_t FUNC_9 (int * const,TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_10 (int * const,TYPE_1__*) ;
 size_t FUNC_11 (int * const) ;
 size_t FUNC_12 (char*,size_t) ;
 int FUNC_13 (int * const) ;
 int FUNC_14 (int * const) ;
 int FUNC_15 (int * const) ;
 size_t FUNC_16 (int * const) ;
 size_t FUNC_17 (int * const) ;
 char* FUNC_18 () ;
 int FUNC_19 (char*,...) ;
 unsigned int FUNC_20 (char const**) ;

int FUNC_21(int VAR_6, char const *VAR_7[]) {

    FUNC_19("\n Zstandard (v%s) memory usage for streaming : \n\n", FUNC_18());

    unsigned VAR_8 = 0;
    if (VAR_6 > 1) {
        const char* VAR_9 = VAR_7[1];
        VAR_8 = FUNC_20(&VAR_9);
    }

    int VAR_10;
    for (VAR_10 = 1; VAR_10 <= VAR_2; VAR_10++) {


        char const VAR_11[5] = "abcde";
        char VAR_12[128];
        char VAR_13[5];




        ZSTD_CCtx_params* const VAR_14 = FUNC_7();
        FUNC_0(VAR_14 != ((void*)0), "ZSTD_createCCtxParams() failed!");


        FUNC_1( FUNC_2(VAR_14, VAR_3, VAR_10) );




        FUNC_1( FUNC_2(VAR_14, VAR_4, VAR_8) );





        ZSTD_CCtx* const VAR_15 = FUNC_6();
        FUNC_0(VAR_15 != ((void*)0), "ZSTD_createCCtx() failed!");
        FUNC_1( FUNC_3(VAR_15, VAR_14) );
        size_t VAR_16;
        {
            ZSTD_inBuffer VAR_17 = { VAR_11, sizeof(VAR_11), 0 };
            ZSTD_outBuffer VAR_18 = { VAR_12, sizeof(VAR_12), 0 };
            FUNC_1( FUNC_5(VAR_15, &VAR_18, &VAR_17) );
            size_t const VAR_19 = FUNC_10(VAR_15, &VAR_18);
            FUNC_1(VAR_19);
            FUNC_0(VAR_19 == 0, "Frame not flushed!");
            VAR_16 = VAR_18.pos;
        }

        ZSTD_DCtx* const VAR_20 = FUNC_8();
        FUNC_0(VAR_20 != ((void*)0), "ZSTD_createDCtx() failed!");




        FUNC_1( FUNC_4(VAR_20, VAR_5, VAR_8) );



        { ZSTD_inBuffer VAR_21 = { VAR_12, VAR_16, 0 };
            ZSTD_outBuffer VAR_22 = { VAR_13, sizeof(VAR_13), 0 };
            size_t const VAR_23 = FUNC_9(VAR_20, &VAR_22, &VAR_21);
            FUNC_1(VAR_23);
            FUNC_0(VAR_23 == 0, "Frame not complete!");
            FUNC_0(VAR_22.pos == sizeof(VAR_11), "Bad decompression!");
        }

        size_t const VAR_24 = FUNC_16(VAR_15);
        size_t const VAR_25 = FUNC_11(VAR_14);
        size_t const VAR_26 = FUNC_17(VAR_20);
        size_t const VAR_27 = FUNC_12(VAR_12, VAR_16);

        FUNC_0(VAR_24 <= VAR_25, "Compression mem (%u) > estimated (%u)",
                (unsigned)VAR_24, (unsigned)VAR_25);
        FUNC_0(VAR_26 <= VAR_27, "Decompression mem (%u) > estimated (%u)",
                (unsigned)VAR_26, (unsigned)VAR_27);

        FUNC_19("Level %2i : Compression Mem = %5u KB (estimated : %5u KB) ; Decompression Mem = %4u KB (estimated : %5u KB)\n",
                VAR_10,
                (unsigned)(VAR_24>>10), (unsigned)(VAR_25>>10),
                (unsigned)(VAR_26>>10), (unsigned)(VAR_27>>10));

        FUNC_15(VAR_20);
        FUNC_13(VAR_15);
        FUNC_14(VAR_14);
        if (VAR_8) break;
    }
    return 0;
}
