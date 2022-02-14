
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_tx_status {int ts_seqnum; scalar_t__ ts_finaltsi; scalar_t__ ts_antenna; void* ts_longretry; void* ts_shortretry; void* ts_rssi; void* ts_rate; int ts_status; void* ts_tstamp; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5210_desc {int ds_status1; int ds_status0; int ds_ctl0; } ;
typedef int HAL_STATUS ;


 struct ar5210_desc* FUNC_0 (struct ath_desc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 void* FUNC_1 (int,int ) ;

HAL_STATUS
FUNC_2(struct ath_hal *VAR_16,
 struct ath_desc *VAR_17, struct ath_tx_status *VAR_18)
{
 struct ar5210_desc *VAR_19 = FUNC_0(VAR_17);

 if ((VAR_19->ds_status1 & VAR_1) == 0)
  return VAR_11;


 VAR_18->ts_seqnum = VAR_19->ds_status1 & VAR_8;
 VAR_18->ts_tstamp = FUNC_1(VAR_19->ds_status0, VAR_7);
 VAR_18->ts_status = 0;
 if ((VAR_19->ds_status0 & VAR_5) == 0) {
  if (VAR_19->ds_status0 & VAR_2)
   VAR_18->ts_status |= VAR_15;
  if (VAR_19->ds_status0 & VAR_4)
   VAR_18->ts_status |= VAR_14;
  if (VAR_19->ds_status0 & VAR_3)
   VAR_18->ts_status |= VAR_13;
 }
 VAR_18->ts_rate = FUNC_1(VAR_19->ds_ctl0, VAR_10);
 VAR_18->ts_rssi = FUNC_1(VAR_19->ds_status1, VAR_0);
 VAR_18->ts_shortretry = FUNC_1(VAR_19->ds_status0, VAR_9);
 VAR_18->ts_longretry = FUNC_1(VAR_19->ds_status0, VAR_6);
 VAR_18->ts_antenna = 0;
 VAR_18->ts_finaltsi = 0;

 return VAR_12;
}
