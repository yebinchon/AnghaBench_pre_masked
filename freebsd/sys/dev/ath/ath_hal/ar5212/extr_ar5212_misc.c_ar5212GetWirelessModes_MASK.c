
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {scalar_t__ halChanQuarterRate; scalar_t__ halChanHalfRate; } ;
struct TYPE_4__ {scalar_t__ ah_subvendorid; TYPE_1__ ah_caps; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (struct ath_hal*,int ) ;

u_int
FUNC_2(struct ath_hal *VAR_16)
{
 u_int VAR_17 = 0;

 if (FUNC_1(VAR_16, VAR_0)) {
  VAR_17 = VAR_8;
  if (!FUNC_1(VAR_16, VAR_4))
   VAR_17 |= VAR_15 | VAR_6;
  if (FUNC_0(VAR_16)->ah_caps.halChanHalfRate)
   VAR_17 |= VAR_9;
  if (FUNC_0(VAR_16)->ah_caps.halChanQuarterRate)
   VAR_17 |= VAR_10;
 }
 if (FUNC_1(VAR_16, VAR_1))
  VAR_17 |= VAR_11;
 if (FUNC_1(VAR_16, VAR_2) &&
     FUNC_0(VAR_16)->ah_subvendorid != VAR_5) {
  VAR_17 |= VAR_12;
  if (!FUNC_1(VAR_16, VAR_3))
   VAR_17 |= VAR_7;
  if (FUNC_0(VAR_16)->ah_caps.halChanHalfRate)
   VAR_17 |= VAR_13;
  if (FUNC_0(VAR_16)->ah_caps.halChanQuarterRate)
   VAR_17 |= VAR_14;
 }
 return VAR_17;
}
