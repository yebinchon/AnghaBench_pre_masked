
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ZSTD_ResetDirective ;
struct TYPE_4__ {scalar_t__ streamStage; int maxWindowSize; int format; scalar_t__ noForwardProgress; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

size_t FUNC_2(ZSTD_DCtx* VAR_7, ZSTD_ResetDirective VAR_8)
{
    if ( (VAR_8 == VAR_4)
      || (VAR_8 == VAR_3) ) {
        VAR_7->streamStage = VAR_6;
        VAR_7->noForwardProgress = 0;
    }
    if ( (VAR_8 == VAR_2)
      || (VAR_8 == VAR_3) ) {
        FUNC_0(VAR_7->streamStage != VAR_6, VAR_5);
        FUNC_1(VAR_7);
        VAR_7->format = VAR_1;
        VAR_7->maxWindowSize = VAR_0;
    }
    return 0;
}
