
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pos; scalar_t__ length; } ;
typedef TYPE_1__ dictItem ;
typedef size_t U32 ;



__attribute__((used)) static U32 FUNC_0(const dictItem* VAR_0)
{
    U32 VAR_1, VAR_2 = 0;
    for (VAR_1=1; VAR_1<VAR_0[0].pos; VAR_1++)
        VAR_2 += VAR_0[VAR_1].length;
    return VAR_2;
}
