
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int headerBuffer ;
struct TYPE_5__ {scalar_t__ compressedSize; int decompUnavailable; int usesCheck; int numSkippableFrames; int numActualFrames; int windowSize; int decompressedSize; } ;
typedef TYPE_1__ fileInfo_t ;
struct TYPE_6__ {int windowSize; } ;
typedef TYPE_2__ ZSTD_frameHeader ;
typedef scalar_t__ U64 ;
typedef int U32 ;
typedef int InfoError ;
typedef int FILE ;
typedef int BYTE ;


 int FUNC_0 (int const,int ,char*,...) ;
 scalar_t__ FUNC_1 (int * const,long const,int ) ;
 scalar_t__ FUNC_2 (int * const) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 size_t const FUNC_5 (int ) ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 size_t FUNC_6 (int*,size_t const) ;
 scalar_t__ FUNC_7 (int*,size_t const) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int*,size_t const) ;
 int FUNC_9 (size_t const) ;
 int FUNC_10 (int * const) ;
 int FUNC_11 (int*,int,int,int * const) ;
 scalar_t__ FUNC_12 (int * const,long const,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static InfoError
FUNC_13(fileInfo_t* VAR_13, FILE* const VAR_14)
{

    for ( ; ; ) {
        BYTE VAR_15[VAR_4];
        size_t const VAR_16 = FUNC_11(VAR_15, 1, sizeof(VAR_15), VAR_14);
        if (VAR_16 < FUNC_5(VAR_8)) {
            if ( FUNC_10(VAR_14)
              && (VAR_16 == 0)
              && (VAR_13->compressedSize > 0)
              && (VAR_13->compressedSize != VAR_1) ) {
                unsigned long long VAR_17 = (unsigned long long) FUNC_2(VAR_14);
                unsigned long long VAR_18 = (unsigned long long) VAR_13->compressedSize;
                FUNC_0(VAR_17 != VAR_18, VAR_12,
                  "Error: seeked to position %llu, which is beyond file size of %llu\n",
                  VAR_17,
                  VAR_18);
                break;
            }
            FUNC_0(FUNC_10(VAR_14), VAR_10, "Error: reached end of file with incomplete frame");
            FUNC_0(1, VAR_9, "Error: did not reach end of file but ran out of frames");
        }
        { U32 const VAR_19 = FUNC_4(VAR_15);

            if (VAR_19 == VAR_5) {
                ZSTD_frameHeader VAR_20;
                U64 const VAR_21 = FUNC_7(VAR_15, VAR_16);
                if ( VAR_21 == VAR_2
                  || VAR_21 == VAR_3 ) {
                    VAR_13->decompUnavailable = 1;
                } else {
                    VAR_13->decompressedSize += VAR_21;
                }
                FUNC_0(FUNC_8(&VAR_20, VAR_15, VAR_16) != 0,
                        VAR_9, "Error: could not decode frame header");
                VAR_13->windowSize = VAR_20.windowSize;

                { size_t const VAR_22 = FUNC_6(VAR_15, VAR_16);
                    FUNC_0(FUNC_9(VAR_22), VAR_9, "Error: could not determine frame header size");
                    FUNC_0(FUNC_12(VAR_14, ((long)VAR_22)-((long)VAR_16), VAR_0) != 0,
                            VAR_9, "Error: could not move to end of frame header");
                }


                { int VAR_23 = 0;
                    do {
                        BYTE VAR_24[3];
                        FUNC_0(FUNC_11(VAR_24, 1, 3, VAR_14) != 3,
                                VAR_9, "Error while reading block header");
                        { U32 const VAR_25 = FUNC_3(VAR_24);
                            U32 const VAR_26 = (VAR_25 >> 1) & 3;
                            U32 const VAR_27 = (VAR_26 == 1);
                            U32 const VAR_28 = (VAR_26 == 3);
                            long const VAR_29 = VAR_27 ? 1 : (long)(VAR_25 >> 3);
                            FUNC_0(VAR_28, VAR_9, "Error: unsupported block type");
                            VAR_23 = VAR_25 & 1;
                            FUNC_0(FUNC_12(VAR_14, VAR_29, VAR_0) != 0,
                                    VAR_9, "Error: could not skip to end of block");
                        }
                    } while (VAR_23 != 1);
                }


                { BYTE const VAR_30 = VAR_15[4];
                    int const VAR_31 = (VAR_30 & (1 << 2)) >> 2;
                    if (VAR_31) {
                        VAR_13->usesCheck = 1;
                        FUNC_0(FUNC_12(VAR_14, 4, VAR_0) != 0,
                                VAR_9, "Error: could not skip past checksum");
                } }
                VAR_13->numActualFrames++;
            }

            else if ((VAR_19 & VAR_6) == VAR_7) {
                U32 const VAR_32 = FUNC_4(VAR_15 + 4);
                long const VAR_33 = (long)(8 + VAR_32 - VAR_16);
                FUNC_0(FUNC_1(VAR_14, VAR_33, VAR_0) != 0,
                        VAR_9, "Error: could not find end of skippable frame");
                VAR_13->numSkippableFrames++;
            }

            else {
                return VAR_10;
            }
        }
    }
    return VAR_11;
}
