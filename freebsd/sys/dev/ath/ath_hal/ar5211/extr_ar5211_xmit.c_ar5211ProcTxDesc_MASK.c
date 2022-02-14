
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_tx_status {scalar_t__ ts_shortretry; scalar_t__ ts_longretry; scalar_t__ ts_finaltsi; scalar_t__ ts_antenna; void* ts_virtcol; void* ts_rssi; void* ts_rate; int ts_status; void* ts_tstamp; void* ts_seqnum; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5211_desc {int ds_status1; int ds_status0; int ds_ctl0; } ;
typedef int HAL_STATUS ;


 struct ar5211_desc* FUNC_0 (struct ath_desc*) ;
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
 int VAR_16 ;
 void* FUNC_1 (int,int ) ;

HAL_STATUS
FUNC_2(struct ath_hal *VAR_17,
 struct ath_desc *VAR_18, struct ath_tx_status *VAR_19)
{
 struct ar5211_desc *VAR_20 = FUNC_0(VAR_18);

 if ((VAR_20->ds_status1 & VAR_1) == 0)
  return VAR_12;


 VAR_19->ts_seqnum = FUNC_1(VAR_20->ds_status1, VAR_8);
 VAR_19->ts_tstamp = FUNC_1(VAR_20->ds_status0, VAR_7);
 VAR_19->ts_status = 0;
 if ((VAR_20->ds_status0 & VAR_5) == 0) {
  if (VAR_20->ds_status0 & VAR_2)
   VAR_19->ts_status |= VAR_16;
  if (VAR_20->ds_status0 & VAR_4)
   VAR_19->ts_status |= VAR_15;
  if (VAR_20->ds_status0 & VAR_3)
   VAR_19->ts_status |= VAR_14;
 }
 VAR_19->ts_rate = FUNC_1(VAR_20->ds_ctl0, VAR_11);
 VAR_19->ts_rssi = FUNC_1(VAR_20->ds_status1, VAR_0);
 VAR_19->ts_shortretry = FUNC_1(VAR_20->ds_status0, VAR_9);
 VAR_19->ts_longretry = FUNC_1(VAR_20->ds_status0, VAR_6);
 VAR_19->ts_virtcol = FUNC_1(VAR_20->ds_status0, VAR_10);
 VAR_19->ts_antenna = 0;
 VAR_19->ts_finaltsi = 0;




 if (VAR_19->ts_shortretry > 0)
  VAR_19->ts_shortretry++;
 if (VAR_19->ts_longretry > 0)
  VAR_19->ts_longretry++;

 return VAR_13;
}
