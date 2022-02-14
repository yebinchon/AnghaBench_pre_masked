
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int begin_set; int begin_x; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int
FUNC_0(int VAR_2)
{
    int VAR_3;

    if (VAR_1.begin_set == 1) {
 VAR_3 = VAR_1.begin_x;
    } else {

 VAR_3 = (VAR_0 - VAR_2) / 2;
    }
    return VAR_3;
}
