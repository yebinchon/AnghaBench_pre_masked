
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_4__ {int ah_ini_pcieserdes; } ;
struct TYPE_3__ {int ah_ispcie; } ;
typedef scalar_t__ HAL_BOOL ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 TYPE_1__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath_hal*,int ,int ) ;
 int FUNC_4 (struct ath_hal*,int ,int ) ;
 int FUNC_5 (struct ath_hal*,int ,int ) ;
 int FUNC_6 (struct ath_hal*,int *,int,int ) ;

__attribute__((used)) static void
FUNC_7(struct ath_hal *VAR_4, HAL_BOOL VAR_5, HAL_BOOL VAR_6)
{


 if (! FUNC_1(VAR_4)->ah_ispcie)
  return;

 if (! VAR_5) {
  FUNC_6(VAR_4, &FUNC_0(VAR_4)->ah_ini_pcieserdes, 1, 0);
  FUNC_2(1000);
 }

 if (VAR_6) {

  FUNC_3(VAR_4, VAR_0, VAR_1);
 } else {

  FUNC_5(VAR_4, VAR_2, VAR_3);


  FUNC_4(VAR_4, VAR_0, VAR_1);
 }
}
