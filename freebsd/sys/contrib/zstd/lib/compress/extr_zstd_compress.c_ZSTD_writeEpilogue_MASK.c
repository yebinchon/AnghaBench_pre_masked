
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ checksumFlag; } ;
struct TYPE_7__ {TYPE_1__ fParams; } ;
struct TYPE_6__ {scalar_t__ stage; int xxhState; TYPE_3__ appliedParams; } ;
typedef TYPE_2__ ZSTD_CCtx ;
typedef int U32 ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const) ;
 int FUNC_3 (int,int ,...) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_5 (void*,size_t,TYPE_3__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static size_t FUNC_6(ZSTD_CCtx* VAR_8, void* VAR_9, size_t VAR_10)
{
    BYTE* const VAR_11 = (BYTE*)VAR_9;
    BYTE* VAR_12 = VAR_11;
    size_t VAR_13 = 0;

    FUNC_0(4, "ZSTD_writeEpilogue");
    FUNC_3(VAR_8->stage == VAR_1, VAR_7, "init missing");


    if (VAR_8->stage == VAR_3) {
        VAR_13 = FUNC_5(VAR_9, VAR_10, &VAR_8->appliedParams, 0, 0);
        FUNC_1(VAR_13);
        VAR_10 -= VAR_13;
        VAR_12 += VAR_13;
        VAR_8->stage = VAR_4;
    }

    if (VAR_8->stage != VAR_2) {

        U32 const VAR_14 = 1 + (((U32)VAR_5)<<1) + 0;
        FUNC_3(VAR_10<4, VAR_6);
        FUNC_2(VAR_12, VAR_14);
        VAR_12 += VAR_0;
        VAR_10 -= VAR_0;
    }

    if (VAR_8->appliedParams.fParams.checksumFlag) {
        U32 const VAR_15 = (U32) FUNC_4(&VAR_8->xxhState);
        FUNC_3(VAR_10<4, VAR_6);
        FUNC_0(4, "ZSTD_writeEpilogue: write checksum : %08X", (unsigned)VAR_15);
        FUNC_2(VAR_12, VAR_15);
        VAR_12 += 4;
    }

    VAR_8->stage = VAR_1;
    return VAR_12-VAR_11;
}
