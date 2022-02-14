
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ page_size; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0(void)
{
    int VAR_1;
    int VAR_2 = 0;
    for (VAR_1=0; VAR_1<8; VAR_1++)
    {
        if (VAR_0[VAR_1].page_size)
            VAR_2 |= 1<<VAR_1;
    }
    return VAR_2;
}
