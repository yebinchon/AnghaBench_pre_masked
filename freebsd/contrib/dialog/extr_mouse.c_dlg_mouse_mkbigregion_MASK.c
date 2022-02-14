
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; void* step_y; void* step_x; } ;
typedef TYPE_1__ mseRegion ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int,int,int,int,int ) ;

void
FUNC_3(int VAR_0, int VAR_1,
        int VAR_2, int VAR_3,
        int VAR_4,
        int VAR_5, int VAR_6,
        int VAR_7)
{
    mseRegion *VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, -FUNC_0(VAR_4));
    VAR_8->mode = VAR_7;
    VAR_8->step_x = FUNC_1(1, VAR_6);
    VAR_8->step_y = FUNC_1(1, VAR_5);
}
