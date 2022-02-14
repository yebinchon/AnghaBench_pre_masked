
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int clock_precision_digits; } ;
typedef TYPE_1__ TS_RESP_CTX ;


 unsigned int VAR_0 ;

int FUNC_0(TS_RESP_CTX *VAR_1,
                                           unsigned VAR_2)
{
    if (VAR_2 > VAR_0)
        return 0;
    VAR_1->clock_precision_digits = VAR_2;
    return 1;
}
