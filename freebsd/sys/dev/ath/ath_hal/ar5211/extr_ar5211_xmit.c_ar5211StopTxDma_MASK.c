
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ah_txq; } ;
struct TYPE_3__ {scalar_t__ tqi_type; } ;
typedef int HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hal*,int ,int) ;
 scalar_t__ FUNC_4 (struct ath_hal*,size_t) ;

HAL_BOOL
FUNC_5(struct ath_hal *VAR_3, u_int VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4 < VAR_1);
 FUNC_1(FUNC_0(VAR_3)->ah_txq[VAR_4].tqi_type != VAR_2);

 FUNC_3(VAR_3, VAR_0, 1<<VAR_4);
 for (VAR_5 = 0; VAR_5 < 10000; VAR_5++) {
  if (FUNC_4(VAR_3, VAR_4) == 0)
   break;
  FUNC_2(10);
 }
 FUNC_3(VAR_3, VAR_0, 0);

 return (VAR_5 < 10000);
}
