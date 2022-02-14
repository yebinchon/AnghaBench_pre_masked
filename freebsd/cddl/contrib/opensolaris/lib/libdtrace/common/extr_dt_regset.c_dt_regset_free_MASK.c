
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dr_size; int dr_bitmap; } ;
typedef TYPE_1__ dt_regset_t ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

void
FUNC_3(dt_regset_t *VAR_0, int VAR_1)
{
 FUNC_2(VAR_1 >= 0 && VAR_1 < VAR_0->dr_size);
 FUNC_2(FUNC_1(VAR_0->dr_bitmap, VAR_1) != 0);
 FUNC_0(VAR_0->dr_bitmap, VAR_1);
}
