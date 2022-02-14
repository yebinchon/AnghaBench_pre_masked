
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_6__ {scalar_t__ totalInBytes; scalar_t__ streamEnd; } ;
typedef TYPE_2__ ZWRAP_CCtx ;
struct TYPE_5__ {scalar_t__ adler; scalar_t__ total_out; scalar_t__ total_in; scalar_t__ state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;

int FUNC_2(z_streamp VAR_2)
{
    FUNC_0("- ZWRAP_deflateReset_keepDict\n");
    if (!VAR_1)
        return FUNC_1(VAR_2);

    { ZWRAP_CCtx* VAR_3 = (ZWRAP_CCtx*) VAR_2->state;
      if (VAR_3) {
          VAR_3->streamEnd = 0;
          VAR_3->totalInBytes = 0;
      }
    }

    VAR_2->total_in = 0;
    VAR_2->total_out = 0;
    VAR_2->adler = 0;
    return VAR_0;
}
