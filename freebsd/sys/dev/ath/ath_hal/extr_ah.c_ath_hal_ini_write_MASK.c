
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_4__ {int cols; int rows; } ;
typedef TYPE_1__ HAL_INI_ARRAY ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__ const*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ath_hal*,int,int) ;

int
FUNC_5(struct ath_hal *VAR_0, const HAL_INI_ARRAY *VAR_1,
 int VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2 < VAR_1->cols);
 for (VAR_4 = 0; VAR_4 < VAR_1->rows; VAR_4++) {
  FUNC_4(VAR_0, FUNC_2(VAR_1, VAR_4, 0),
      FUNC_2(VAR_1, VAR_4, VAR_2));


  if (FUNC_2(VAR_1, VAR_4, 0) >= 0x7800 && FUNC_2(VAR_1, VAR_4, 0) < 0x7900)
   FUNC_3(100);

  FUNC_0(VAR_3);
 }
 return VAR_3;
}
