
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_fft_period; scalar_t__ ss_period; scalar_t__ ss_count; scalar_t__ ss_short_report; } ;
typedef TYPE_1__ HAL_SPECTRAL_PARAM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*,int ,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct ath_hal*,TYPE_1__*) ;
 int FUNC_5 (struct ath_hal*) ;

void
FUNC_6(struct ath_hal *VAR_11, HAL_SPECTRAL_PARAM *VAR_12)
{
 uint32_t VAR_13;

 FUNC_5(VAR_11);

 VAR_13 = FUNC_1(VAR_11, VAR_1);

 if (VAR_12->ss_fft_period != VAR_10) {
  VAR_13 &= ~VAR_5;
  VAR_13 |= FUNC_3(VAR_12->ss_fft_period, VAR_5);
 }

 if (VAR_12->ss_period != VAR_10) {
  VAR_13 &= ~VAR_6;
  VAR_13 |= FUNC_3(VAR_12->ss_period, VAR_6);
 }

 if (VAR_12->ss_period != VAR_10) {
  VAR_13 &= ~VAR_6;
  VAR_13 |= FUNC_3(VAR_12->ss_period, VAR_6);
 }


 if (FUNC_0(VAR_11) ) {
  if (VAR_12->ss_count != VAR_10) {
   VAR_13 &= ~VAR_2;
   VAR_13 |= FUNC_3(VAR_12->ss_count, VAR_2);
  }

  if (VAR_12->ss_short_report == VAR_0) {
   VAR_13 |= VAR_8;
  } else if (VAR_12->ss_short_report != VAR_10) {
   VAR_13 &= ~VAR_8;
  }
 } else {
  if (VAR_12->ss_count != VAR_10) {




   if (VAR_12->ss_count == 128)
    VAR_12->ss_count = 0;
   VAR_13 &= ~VAR_3;
   VAR_13 |= FUNC_3(VAR_12->ss_count, VAR_3);
  }

  if (VAR_12->ss_short_report == VAR_0) {
   VAR_13 |= VAR_9;
  } else if (VAR_12->ss_short_report != VAR_10) {
   VAR_13 &= ~VAR_9;
  }


  VAR_13 |= VAR_7;
 }

 FUNC_2(VAR_11, VAR_1, VAR_13 | VAR_4);

 FUNC_4(VAR_11, VAR_12);
}
