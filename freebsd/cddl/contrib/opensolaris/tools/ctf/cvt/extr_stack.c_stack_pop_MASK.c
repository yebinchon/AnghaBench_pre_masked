
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ st_top; void** st_data; } ;
typedef TYPE_1__ stk_t ;


 int FUNC_0 (int) ;

void *
FUNC_1(stk_t *VAR_0)
{
 FUNC_0(VAR_0->st_top >= 0);

 return (VAR_0->st_data[VAR_0->st_top--]);
}
