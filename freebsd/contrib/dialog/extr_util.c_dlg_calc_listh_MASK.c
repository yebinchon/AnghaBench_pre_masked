
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int begin_y; scalar_t__ begin_set; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_0(int *VAR_2, int *VAR_3, int VAR_4)
{

    int VAR_5 = VAR_0 - (VAR_1.begin_set ? VAR_1.begin_y : 0);
    if (VAR_5 - (*VAR_2) > 0) {
 if (VAR_5 - (*VAR_2) > VAR_4)
     *VAR_3 = VAR_4;
 else
     *VAR_3 = VAR_5 - (*VAR_2);
    }
    (*VAR_2) += (*VAR_3);
}
