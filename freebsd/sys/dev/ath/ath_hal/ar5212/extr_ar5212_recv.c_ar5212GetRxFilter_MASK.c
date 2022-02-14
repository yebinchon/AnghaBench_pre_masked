
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_6__ {int ah_miscMode; } ;
struct TYPE_4__ {scalar_t__ halBssidMatchSupport; } ;
struct TYPE_5__ {TYPE_1__ ah_caps; } ;


 TYPE_3__* FUNC_0 (struct ath_hal*) ;
 TYPE_2__* FUNC_1 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ath_hal*,int ) ;

uint32_t
FUNC_3(struct ath_hal *VAR_9)
{
 uint32_t VAR_10 = FUNC_2(VAR_9, VAR_5);
 uint32_t VAR_11 = FUNC_2(VAR_9, VAR_1);
 if (VAR_11 & VAR_4)
  VAR_10 |= VAR_8;
 if (VAR_11 & (VAR_3|VAR_2))
  VAR_10 |= VAR_7;
 if (FUNC_1(VAR_9)->ah_caps.halBssidMatchSupport &&
     (FUNC_0(VAR_9)->ah_miscMode & VAR_0))
  VAR_10 |= VAR_6;
 return VAR_10;
}
