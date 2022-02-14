
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numwpipes; int * wbuf; } ;
typedef TYPE_1__ RECORD_LAYER ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(const RECORD_LAYER *VAR_0)
{
    return (VAR_0->numwpipes > 0)
        && FUNC_0(&VAR_0->wbuf[VAR_0->numwpipes - 1]) != 0;
}
