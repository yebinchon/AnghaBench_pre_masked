
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * rrec; } ;
typedef int SSL3_RECORD ;
typedef TYPE_1__ RECORD_LAYER ;


 size_t FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int const*) ;

int FUNC_2(const RECORD_LAYER *VAR_0)
{
    size_t VAR_1 = 0, VAR_2 = FUNC_0(VAR_0);
    const SSL3_RECORD *VAR_3 = VAR_0->rrec;

    while (VAR_1 < VAR_2 && FUNC_1(&VAR_3[VAR_1]))
        VAR_1++;

    return VAR_1 < VAR_2;
}
