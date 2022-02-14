
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int cols; int rows; } ;
typedef TYPE_1__ HAL_INI_ARRAY ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,int,int) ;

void
FUNC_2(uint32_t VAR_0[], const HAL_INI_ARRAY *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2 < VAR_1->cols);
 for (VAR_3 = 0; VAR_3 < VAR_1->rows; VAR_3++)
  VAR_0[VAR_3] = FUNC_1(VAR_1, VAR_3, VAR_2);
}
