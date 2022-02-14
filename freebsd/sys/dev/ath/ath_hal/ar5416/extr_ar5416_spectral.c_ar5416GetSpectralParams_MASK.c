
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_3__ {void* radar_bin_thresh_sel; void* ss_short_report; void* ss_count; void* ss_period; void* ss_fft_period; } ;
typedef TYPE_1__ HAL_SPECTRAL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ath_hal*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;

void
FUNC_3(struct ath_hal *VAR_9, HAL_SPECTRAL_PARAM *VAR_10)
{
 uint32_t VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_2);

 VAR_10->ss_fft_period = FUNC_1(VAR_11, VAR_5);
 VAR_10->ss_period = FUNC_1(VAR_11, VAR_6);
 if (FUNC_0(VAR_9) ) {
  VAR_10->ss_count = FUNC_1(VAR_11, VAR_3);
  VAR_10->ss_short_report = FUNC_1(VAR_11, VAR_7);
 } else {
  VAR_10->ss_count = FUNC_1(VAR_11, VAR_4);
  VAR_10->ss_short_report = FUNC_1(VAR_11, VAR_8);
 }
 VAR_11 = FUNC_2(VAR_9, VAR_0);
 VAR_10->radar_bin_thresh_sel = FUNC_1(VAR_11, VAR_1);
}
