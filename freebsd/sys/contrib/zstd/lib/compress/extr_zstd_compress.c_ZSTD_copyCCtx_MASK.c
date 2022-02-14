
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int contentSizeFlag; int member_2; int member_1; } ;
typedef TYPE_1__ ZSTD_frameParameters ;
typedef int ZSTD_buffered_policy_e ;
struct TYPE_9__ {scalar_t__ inBuffSize; } ;
typedef TYPE_2__ ZSTD_CCtx ;
typedef int U32 ;


 unsigned long long VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_2__*,TYPE_2__ const*,TYPE_1__,unsigned long long,int const) ;
 scalar_t__ VAR_1 ;

size_t FUNC_2(ZSTD_CCtx* VAR_2, const ZSTD_CCtx* VAR_3, unsigned long long VAR_4)
{
    ZSTD_frameParameters VAR_5 = { 1 , 0 , 0 };
    ZSTD_buffered_policy_e const VAR_6 = (ZSTD_buffered_policy_e)(VAR_3->inBuffSize>0);
    FUNC_0((U32)VAR_1==1);
    if (VAR_4==0) VAR_4 = VAR_0;
    VAR_5.contentSizeFlag = (VAR_4 != VAR_0);

    return FUNC_1(VAR_2, VAR_3,
                                VAR_5, VAR_4,
                                VAR_6);
}
