
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_format_e ;
typedef int ZSTD_dParameter ;
struct TYPE_3__ {scalar_t__ streamStage; size_t maxWindowSize; int format; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

size_t FUNC_3(ZSTD_DCtx* VAR_4, ZSTD_dParameter VAR_5, int VAR_6)
{
    FUNC_2(VAR_4->streamStage != VAR_3, VAR_2);
    switch(VAR_5) {
        case 128:
            if (VAR_6 == 0) VAR_6 = VAR_0;
            FUNC_0(128, VAR_6);
            VAR_4->maxWindowSize = ((size_t)1) << VAR_6;
            return 0;
        case 129:
            FUNC_0(129, VAR_6);
            VAR_4->format = (ZSTD_format_e)VAR_6;
            return 0;
        default:;
    }
    FUNC_1(VAR_1);
}
