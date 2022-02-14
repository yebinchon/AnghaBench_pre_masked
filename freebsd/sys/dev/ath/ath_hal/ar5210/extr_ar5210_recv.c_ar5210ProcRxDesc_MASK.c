
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ath_rx_status {int rs_datalen; int rs_tstamp; int rs_phyerr; int rs_antenna; int rs_more; void* rs_rate; void* rs_keyix; void* rs_rssi; int rs_status; } ;
struct ath_hal {int dummy; } ;
struct ath_desc {int dummy; } ;
struct ar5210_desc {int ds_status1; int ds_status0; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath_hal*,int ) ;

HAL_STATUS
FUNC_3(struct ath_hal *VAR_24, struct ath_desc *VAR_25,
 uint32_t VAR_26, struct ath_desc *VAR_27, uint64_t VAR_28,
 struct ath_rx_status *VAR_29)
{
 struct ar5210_desc *VAR_30 = FUNC_0(VAR_25);
 struct ar5210_desc *VAR_31 = FUNC_0(VAR_27);
 uint32_t VAR_32, VAR_33;

 if ((VAR_30->ds_status1 & VAR_3) == 0)
  return VAR_17;





 if ((VAR_31->ds_status1 & VAR_3) == 0 && FUNC_2(VAR_24, VAR_11) == VAR_26)
  return VAR_17;

 VAR_29->rs_datalen = VAR_30->ds_status0 & VAR_1;
 VAR_33 = FUNC_1(VAR_30->ds_status1, VAR_15);




 VAR_32 = (FUNC_2(VAR_24, VAR_16) >> 10) & 0xffff;
 if ((VAR_32 & 0x1fff) < VAR_33)
  VAR_33 |= (VAR_32 - 0x2000) & 0xffff;
 else
  VAR_33 |= VAR_32;

 VAR_29->rs_tstamp = VAR_33 & 0x7fff;
 VAR_29->rs_status = 0;
 if ((VAR_30->ds_status1 & VAR_5) == 0) {
  if (VAR_30->ds_status1 & VAR_0)
   VAR_29->rs_status |= VAR_19;
  else if (VAR_30->ds_status1 & VAR_2)
   VAR_29->rs_status |= VAR_20;
  else if (VAR_30->ds_status1 & VAR_4)
   VAR_29->rs_status |= VAR_21;
  else {
   VAR_29->rs_status |= VAR_22;
   VAR_29->rs_phyerr =
    (VAR_30->ds_status1 & VAR_9) >> VAR_10;
  }
 }

 VAR_29->rs_rssi = FUNC_1(VAR_30->ds_status0, VAR_14);
 if (VAR_30->ds_status1 & VAR_7)
  VAR_29->rs_keyix = FUNC_1(VAR_30->ds_status1, VAR_6);
 else
  VAR_29->rs_keyix = VAR_23;

 VAR_29->rs_rate = FUNC_1(VAR_30->ds_status0, VAR_13);
 VAR_29->rs_antenna = (VAR_30->ds_status0 & VAR_12) ? 1 : 0;
 VAR_29->rs_more = (VAR_30->ds_status0 & VAR_8) ? 1 : 0;

 return VAR_18;
}
