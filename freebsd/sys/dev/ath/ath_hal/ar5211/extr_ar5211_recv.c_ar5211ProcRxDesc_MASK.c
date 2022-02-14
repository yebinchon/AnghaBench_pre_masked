
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct ath_rx_status {int rs_datalen; int rs_more; void* rs_antenna; void* rs_rate; void* rs_keyix; void* rs_rssi; void* rs_phyerr; int rs_status; void* rs_tstamp; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5211_desc {int ds_status1; int ds_status0; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct ath_hal*,int ) ;

HAL_STATUS
FUNC_3(struct ath_hal *VAR_20, struct ath_desc *VAR_21,
 uint32_t VAR_22, struct ath_desc *VAR_23, uint64_t VAR_24,
 struct ath_rx_status *VAR_25)
{
 struct ar5211_desc *VAR_26 = FUNC_0(VAR_21);
 struct ar5211_desc *VAR_27 = FUNC_0(VAR_23);

 if ((VAR_26->ds_status1 & VAR_3) == 0)
  return VAR_14;





 if ((VAR_27->ds_status1 & VAR_3) == 0 && FUNC_2(VAR_20, VAR_9) == VAR_22)
  return VAR_14;

 VAR_25->rs_datalen = VAR_26->ds_status0 & VAR_1;
 VAR_25->rs_tstamp = FUNC_1(VAR_26->ds_status1, VAR_13);
 VAR_25->rs_status = 0;
 if ((VAR_26->ds_status1 & VAR_4) == 0) {
  if (VAR_26->ds_status1 & VAR_0)
   VAR_25->rs_status |= VAR_16;
  else if (VAR_26->ds_status1 & VAR_2)
   VAR_25->rs_status |= VAR_17;
  else {
   VAR_25->rs_status |= VAR_18;
   VAR_25->rs_phyerr = FUNC_1(VAR_26->ds_status1, VAR_8);
  }
 }

 VAR_25->rs_rssi = FUNC_1(VAR_26->ds_status0, VAR_12);
 if (VAR_26->ds_status1 & VAR_6)
  VAR_25->rs_keyix = FUNC_1(VAR_26->ds_status1, VAR_5);
 else
  VAR_25->rs_keyix = VAR_19;

 VAR_25->rs_rate = FUNC_1(VAR_26->ds_status0, VAR_11);
 VAR_25->rs_antenna = FUNC_1(VAR_26->ds_status0, VAR_10);
 VAR_25->rs_more = (VAR_26->ds_status0 & VAR_7) ? 1 : 0;

 return VAR_15;
}
