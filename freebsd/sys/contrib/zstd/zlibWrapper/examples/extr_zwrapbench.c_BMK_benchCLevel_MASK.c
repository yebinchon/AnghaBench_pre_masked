
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*,size_t,char const*,int,size_t const*,unsigned int,void const*,size_t,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(void* VAR_17, size_t VAR_18,
                            const char* VAR_19, int VAR_20, int VAR_21,
                            const size_t* VAR_22, unsigned VAR_23,
                            const void* VAR_24, size_t VAR_25)
{
    int VAR_26;

    const char* VAR_27 = FUNC_2(VAR_19, '\\');
    if (!VAR_27) VAR_27 = FUNC_2(VAR_19, '/');
    if (VAR_27) VAR_19 = VAR_27+1;

    VAR_8;

    if (VAR_15 == 1 && !VAR_13)
        FUNC_1("bench %s %s: input %u bytes, %u seconds, %u KB blocks\n",
                VAR_11, VAR_10,
                (unsigned)VAR_18, VAR_16, (unsigned)(VAR_14>>10));

    if (VAR_21 < VAR_20) VAR_21 = VAR_20;

    FUNC_1("benchmarking zstd %s (using ZSTD_CStream)\n", VAR_11);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_3);
    }

    FUNC_1("benchmarking zstd %s (using ZSTD_CCtx)\n", VAR_11);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_2);
    }

    FUNC_1("benchmarking zstd %s (using zlibWrapper)\n", VAR_11);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_7);
    }

    FUNC_1("benchmarking zstd %s (zlibWrapper not reusing a context)\n", VAR_11);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_6);
    }


    if (VAR_21 > VAR_12) VAR_21 = VAR_12;

    FUNC_1("\n");
    FUNC_1("benchmarking zlib %s\n", VAR_9);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_1);
    }

    FUNC_1("benchmarking zlib %s (zlib not reusing a context)\n", VAR_9);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_0);
    }

    FUNC_1("benchmarking zlib %s (using zlibWrapper)\n", VAR_9);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_5);
    }

    FUNC_1("benchmarking zlib %s (zlibWrapper not reusing a context)\n", VAR_9);
    for (VAR_26=VAR_20; VAR_26 <= VAR_21; VAR_26++) {
        FUNC_0(VAR_17, VAR_18,
                     VAR_19, VAR_26,
                     VAR_22, VAR_23,
                     VAR_24, VAR_25, VAR_4);
    }
}
