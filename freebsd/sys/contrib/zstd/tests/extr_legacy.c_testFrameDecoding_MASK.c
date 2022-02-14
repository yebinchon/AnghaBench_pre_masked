
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;
 int FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
    if (FUNC_5(VAR_2) > FUNC_1(VAR_0, VAR_1)) {
        FUNC_0("ERROR: ZSTD_decompressBound: decompressed bound too small\n");
        return 1;
    }
    { const char* VAR_3 = VAR_0;
        size_t VAR_4 = VAR_1;
        while (1) {
            size_t VAR_5 = FUNC_2(VAR_3, VAR_4);
            if (FUNC_4(VAR_5)) {
                FUNC_0("ERROR: ZSTD_findFrameCompressedSize: %s\n", FUNC_3(VAR_5));
                return 1;
            }
            if (VAR_5 > VAR_4) {
                FUNC_0("ERROR: ZSTD_findFrameCompressedSize: expected frameSize to align with src buffer");
                return 1;
            }
            VAR_3 += VAR_5;
            VAR_4 -= VAR_5;
            if (VAR_4 == 0) break;
        }
    }
    FUNC_0("Frame Decoding OK\n");
    return 0;
}
