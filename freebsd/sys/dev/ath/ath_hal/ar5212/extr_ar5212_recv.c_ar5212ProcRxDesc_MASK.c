
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct ath_rx_status {int rs_datalen; int rs_rssi; int rs_more; int rs_status; scalar_t__ rs_phyerr; void* rs_antenna; void* rs_rate; void* rs_keyix; void* rs_tstamp; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5212_desc {int ds_rxstatus1; int ds_rxstatus0; } ;
struct TYPE_2__ {int ah_hasHwPhyCounters; } ;
typedef int HAL_STATUS ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 struct ar5212_desc* FUNC_1 (struct ath_desc*) ;
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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_hal*,struct ath_rx_status*) ;

HAL_STATUS
FUNC_5(struct ath_hal *VAR_24, struct ath_desc *VAR_25,
 uint32_t VAR_26, struct ath_desc *VAR_27, uint64_t VAR_28,
 struct ath_rx_status *VAR_29)
{
 struct ar5212_desc *VAR_30 = FUNC_1(VAR_25);
 struct ar5212_desc *VAR_31 = FUNC_1(VAR_27);

 if ((VAR_30->ds_rxstatus1 & VAR_3) == 0)
  return VAR_16;





 if ((VAR_31->ds_rxstatus1&VAR_3) == 0 && FUNC_3(VAR_24, VAR_11) == VAR_26)
  return VAR_16;

 VAR_29->rs_datalen = VAR_30->ds_rxstatus0 & VAR_1;
 VAR_29->rs_tstamp = FUNC_2(VAR_30->ds_rxstatus1, VAR_15);
 VAR_29->rs_status = 0;

 VAR_29->rs_rssi = FUNC_2(VAR_30->ds_rxstatus0, VAR_14);

 if (VAR_29->rs_rssi == -128)
  VAR_29->rs_rssi = 0;
 if (VAR_30->ds_rxstatus1 & VAR_6)
  VAR_29->rs_keyix = FUNC_2(VAR_30->ds_rxstatus1, VAR_5);
 else
  VAR_29->rs_keyix = VAR_23;

 VAR_29->rs_rate = FUNC_2(VAR_30->ds_rxstatus0, VAR_13);
 VAR_29->rs_antenna = FUNC_2(VAR_30->ds_rxstatus0, VAR_12);
 VAR_29->rs_more = (VAR_30->ds_rxstatus0 & VAR_8) ? 1 : 0;
 if ((VAR_30->ds_rxstatus1 & VAR_4) == 0) {
  if (VAR_30->ds_rxstatus1 & VAR_9) {
   u_int VAR_32;

   VAR_29->rs_status |= VAR_22;
   VAR_32 = FUNC_2(VAR_30->ds_rxstatus1, VAR_10);
   VAR_29->rs_phyerr = VAR_32;
   if (!FUNC_0(VAR_24)->ah_hasHwPhyCounters &&
       VAR_32 != VAR_18)
    FUNC_4(VAR_24, VAR_29);
  }

  if (VAR_30->ds_rxstatus1 & VAR_0)
   VAR_29->rs_status |= VAR_19;
  else if (VAR_30->ds_rxstatus1 & VAR_2)
   VAR_29->rs_status |= VAR_20;
  else if (VAR_30->ds_rxstatus1 & VAR_7)
   VAR_29->rs_status |= VAR_21;
 }
 return VAR_17;
}
