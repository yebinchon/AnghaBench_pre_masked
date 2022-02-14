
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_wmm_ac_params {int aifs; int cwmin; int cwmax; int txop_limit; int admission_control_mandatory; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(struct hostapd_wmm_ac_params VAR_1[],
     const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;
 const char *VAR_6;
 struct hostapd_wmm_ac_params *VAR_7;


 VAR_6 = VAR_2 + 7;
 if (FUNC_2(VAR_6, "be_", 3) == 0) {
  VAR_4 = 0;
  VAR_6 += 3;
 } else if (FUNC_2(VAR_6, "bk_", 3) == 0) {
  VAR_4 = 1;
  VAR_6 += 3;
 } else if (FUNC_2(VAR_6, "vi_", 3) == 0) {
  VAR_4 = 2;
  VAR_6 += 3;
 } else if (FUNC_2(VAR_6, "vo_", 3) == 0) {
  VAR_4 = 3;
  VAR_6 += 3;
 } else {
  FUNC_3(VAR_0, "Unknown WMM name '%s'", VAR_6);
  return -1;
 }

 VAR_7 = &VAR_1[VAR_4];

 if (FUNC_1(VAR_6, "aifs") == 0) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 < 1 || VAR_5 > 255) {
   FUNC_3(VAR_0, "Invalid AIFS value %d", VAR_5);
   return -1;
  }
  VAR_7->aifs = VAR_5;
 } else if (FUNC_1(VAR_6, "cwmin") == 0) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 < 0 || VAR_5 > 15) {
   FUNC_3(VAR_0, "Invalid cwMin value %d", VAR_5);
   return -1;
  }
  VAR_7->cwmin = VAR_5;
 } else if (FUNC_1(VAR_6, "cwmax") == 0) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 < 0 || VAR_5 > 15) {
   FUNC_3(VAR_0, "Invalid cwMax value %d", VAR_5);
   return -1;
  }
  VAR_7->cwmax = VAR_5;
 } else if (FUNC_1(VAR_6, "txop_limit") == 0) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 < 0 || VAR_5 > 0xffff) {
   FUNC_3(VAR_0, "Invalid txop value %d", VAR_5);
   return -1;
  }
  VAR_7->txop_limit = VAR_5;
 } else if (FUNC_1(VAR_6, "acm") == 0) {
  VAR_5 = FUNC_0(VAR_3);
  if (VAR_5 < 0 || VAR_5 > 1) {
   FUNC_3(VAR_0, "Invalid acm value %d", VAR_5);
   return -1;
  }
  VAR_7->admission_control_mandatory = VAR_5;
 } else {
  FUNC_3(VAR_0, "Unknown wmm_ac_ field '%s'", VAR_6);
  return -1;
 }

 return 0;
}
