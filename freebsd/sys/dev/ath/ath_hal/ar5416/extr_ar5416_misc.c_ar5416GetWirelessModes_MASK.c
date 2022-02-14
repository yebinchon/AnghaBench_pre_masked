
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_2__ {scalar_t__ halHTSupport; } ;
struct ath_hal_private {TYPE_1__ ah_caps; } ;
struct ath_hal {int dummy; } ;
typedef TYPE_1__ HAL_CAPABILITIES ;


 struct ath_hal_private* FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ath_hal*) ;

u_int
FUNC_2(struct ath_hal *VAR_9)
{
 u_int VAR_10;
 struct ath_hal_private *VAR_11 = FUNC_0(VAR_9);
 HAL_CAPABILITIES *VAR_12 = &VAR_11->ah_caps;

 VAR_10 = FUNC_1(VAR_9);


 if (VAR_12->halHTSupport == VAR_0 && (VAR_10 & VAR_1))
  VAR_10 |= VAR_3
       | VAR_5
       | VAR_4
       ;
 if (VAR_12->halHTSupport == VAR_0 && (VAR_10 & VAR_2))
  VAR_10 |= VAR_6
       | VAR_8
       | VAR_7
       ;
 return VAR_10;
}
