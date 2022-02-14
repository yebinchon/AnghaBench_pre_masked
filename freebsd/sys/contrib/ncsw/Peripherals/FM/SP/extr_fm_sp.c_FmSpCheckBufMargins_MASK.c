
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ startMargins; scalar_t__ endMargins; } ;
typedef TYPE_1__ t_FmSpBufMargins ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;

t_Error FUNC_1(t_FmSpBufMargins *VAR_4)
{

    if (VAR_4->startMargins > VAR_3)
        FUNC_0(VAR_2, VAR_0, ("bufMargins.startMargins can't be larger than %d", VAR_3));
    if (VAR_4->endMargins > VAR_3)
        FUNC_0(VAR_2, VAR_0, ("bufMargins.endMargins can't be larger than %d", VAR_3));

    return VAR_1;
}
