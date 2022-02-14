
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_7__ {scalar_t__ totalInBytes; int decompState; } ;
typedef TYPE_2__ ZWRAP_DCtx ;
struct TYPE_6__ {scalar_t__ total_out; scalar_t__ total_in; scalar_t__ state; int reserved; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__* const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(z_streamp VAR_5)
{
    FUNC_0("- ZWRAP_inflateReset_keepDict\n");
    if (VAR_4 == VAR_0 || !VAR_5->reserved)
        return FUNC_2(VAR_5);

    { ZWRAP_DCtx* const VAR_6 = (ZWRAP_DCtx*) VAR_5->state;
        if (VAR_6 == ((void*)0)) return VAR_3;
        FUNC_1(VAR_6);
        VAR_6->decompState = VAR_1;
        VAR_6->totalInBytes = 0;
    }

    VAR_5->total_in = 0;
    VAR_5->total_out = 0;
    return VAR_2;
}
