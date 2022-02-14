
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
struct TYPE_2__ {int (* ah_initPLL ) (struct ath_hal*,int ) ;} ;
typedef int HAL_BOOL ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath_hal*,int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ) ;

HAL_BOOL
FUNC_4(struct ath_hal *VAR_5)
{

 if (!FUNC_1(VAR_5, VAR_3, VAR_2))
  return VAR_0;
 if (! FUNC_2(VAR_5, VAR_4))
  return VAR_0;

 FUNC_0(VAR_5)->ah_initPLL(VAR_5, VAR_1);
 return (VAR_2);
}
