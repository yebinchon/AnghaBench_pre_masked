
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int rows; } ;
typedef TYPE_1__ HAL_INI_ARRAY ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*,int,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int const) ;

int
FUNC_3(struct ath_hal *VAR_0, const HAL_INI_ARRAY *VAR_1,
 const uint32_t VAR_2[], int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->rows; VAR_4++) {
  FUNC_2(VAR_0, FUNC_1(VAR_1, VAR_4, 0), VAR_2[VAR_4]);
  FUNC_0(VAR_3);
 }
 return VAR_3;
}
