
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int u16 ;
struct wmm_tspec_element {int* ts_info; int medium_time; int surplus_bandwidth_allowance; int minimum_phy_rate; int nominal_msdu_size; int mean_data_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct wmm_tspec_element *VAR_4)
{
 u64 VAR_5;
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11;
 u16 VAR_12, VAR_13;

 VAR_8 = (VAR_4->ts_info[1] >> 3) & 0x07;
 VAR_9 = (VAR_4->ts_info[1] >> 2) & 0x01;
 VAR_10 = (VAR_4->ts_info[0] >> 5) & 0x03;
 VAR_11 = (VAR_4->ts_info[0] >> 1) & 0x0f;
 FUNC_3(VAR_0, "WMM: TS Info: UP=%d PSB=%d Direction=%d TID=%d",
     VAR_8, VAR_9, VAR_10, VAR_11);
 VAR_12 = FUNC_1(VAR_4->nominal_msdu_size);
 FUNC_3(VAR_0, "WMM: Nominal MSDU Size: %d%s",
     VAR_12 & 0x7fff, VAR_12 & 0x8000 ? " (fixed)" : "");
 FUNC_3(VAR_0, "WMM: Mean Data Rate: %u bps",
     FUNC_2(VAR_4->mean_data_rate));
 FUNC_3(VAR_0, "WMM: Minimum PHY Rate: %u bps",
     FUNC_2(VAR_4->minimum_phy_rate));
 VAR_12 = FUNC_1(VAR_4->surplus_bandwidth_allowance);
 FUNC_3(VAR_0, "WMM: Surplus Bandwidth Allowance: %u.%04u",
     VAR_12 >> 13, 10000 * (VAR_12 & 0x1fff) / 0x2000);

 VAR_12 = FUNC_1(VAR_4->nominal_msdu_size);
 if (VAR_12 == 0) {
  FUNC_3(VAR_0, "WMM: Invalid Nominal MSDU Size (0)");
  return VAR_2;
 }

 VAR_6 = ((FUNC_2(VAR_4->mean_data_rate) / 8) + VAR_12 - 1) / VAR_12;
 FUNC_3(VAR_0, "WMM: Packets-per-second estimate for TSPEC: %d",
     VAR_6);

 if (FUNC_2(VAR_4->minimum_phy_rate) < 1000000) {
  FUNC_3(VAR_0, "WMM: Too small Minimum PHY Rate");
  return VAR_2;
 }

 VAR_7 = (FUNC_1(VAR_4->nominal_msdu_size) & 0x7fff) * 8 /
  (FUNC_2(VAR_4->minimum_phy_rate) / 1000000) +
  50 ;



 VAR_13 = FUNC_1(VAR_4->surplus_bandwidth_allowance);
 if (VAR_13 <= 0x2000) {
  FUNC_3(VAR_0, "WMM: Surplus Bandwidth Allowance not "
      "greater than unity");
  return VAR_2;
 }

 VAR_5 = (u64) VAR_13 * VAR_6 * VAR_7 / 0x2000;
 FUNC_3(VAR_0, "WMM: Estimated medium time: %lu",
     (unsigned long) VAR_5);







 if (VAR_5 > 750000) {
  FUNC_3(VAR_0, "WMM: Refuse TSPEC request for over "
      "75%% of available bandwidth");
  return VAR_3;
 }


 VAR_4->medium_time = FUNC_0(VAR_5 / 32);

 return VAR_1;
}
