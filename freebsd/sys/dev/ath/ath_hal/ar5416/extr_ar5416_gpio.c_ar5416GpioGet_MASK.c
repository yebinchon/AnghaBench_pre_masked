
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halNumGpioPins; } ;
struct TYPE_4__ {TYPE_1__ ah_caps; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ath_hal*) ;
 scalar_t__ FUNC_3 (struct ath_hal*) ;
 scalar_t__ FUNC_4 (struct ath_hal*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ath_hal*,int ) ;

uint32_t
FUNC_7(struct ath_hal *VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;

 if (VAR_6 >= FUNC_0(VAR_5)->ah_caps.halNumGpioPins)
  return 0xffffffff;




 if (FUNC_3(VAR_5))
  VAR_7 = FUNC_5(FUNC_6(VAR_5, VAR_3), VAR_1);
 if (FUNC_2(VAR_5))
  VAR_7 = FUNC_5(FUNC_6(VAR_5, VAR_3), VAR_0);
 else if (FUNC_4(VAR_5))
  VAR_7 = FUNC_5(FUNC_6(VAR_5, VAR_3), VAR_2);
 else
  VAR_7 = FUNC_5(FUNC_6(VAR_5, VAR_3), VAR_4);
 return ((VAR_7 & FUNC_1(VAR_6)) != 0);
}
