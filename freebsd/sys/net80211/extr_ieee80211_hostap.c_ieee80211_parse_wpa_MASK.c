
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211vap {int iv_flags; } ;
struct ieee80211_rsnparms {int rsn_mcastcipher; int rsn_ucastcipher; int rsn_keymgmt; void* rsn_caps; int rsn_ucastkeylen; int rsn_mcastkeylen; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,char*,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct ieee80211_rsnparms*,int ,int) ;
 int FUNC_4 (int const*,int *,int*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211vap *VAR_11, const uint8_t *VAR_12,
 struct ieee80211_rsnparms *VAR_13, const struct ieee80211_frame *VAR_14)
{
 uint8_t VAR_15 = VAR_12[1];
 uint32_t VAR_16;
 int VAR_17, VAR_18;






 if ((VAR_11->iv_flags & VAR_2) == 0) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "not WPA, flags 0x%x", VAR_11->iv_flags);
  return VAR_6;
 }
 if (VAR_15 < 14) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "too short, len %u", VAR_15);
  return VAR_6;
 }
 VAR_12 += 6, VAR_15 -= 4;

 VAR_16 = FUNC_1(VAR_12);
 if (VAR_16 != VAR_10) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "bad version %u", VAR_16);
  return VAR_6;
 }
 VAR_12 += 2, VAR_15 -= 2;

 FUNC_3(VAR_13, 0, sizeof(*VAR_13));


 VAR_17 = FUNC_4(VAR_12, &VAR_13->rsn_mcastkeylen, &VAR_13->rsn_mcastcipher);
 if (VAR_17 != 0) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "unknown mcast cipher suite %08X",
      FUNC_2(VAR_12));
  return VAR_5;
 }
 VAR_12 += 4, VAR_15 -= 4;


 VAR_18 = FUNC_1(VAR_12);
 VAR_12 += 2, VAR_15 -= 2;
 if (VAR_15 < VAR_18*4+2) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "ucast cipher data too short; len %u, n %u",
      VAR_15, VAR_18);
  return VAR_6;
 }
 VAR_16 = 0;
 for (; VAR_18 > 0; VAR_18--) {
  uint8_t VAR_19;

  VAR_17 = FUNC_4(VAR_12, &VAR_13->rsn_ucastkeylen, &VAR_19);
  if (VAR_17 == 0)
   VAR_16 |= 1 << VAR_19;

  VAR_12 += 4, VAR_15 -= 4;
 }
 if (VAR_16 == 0) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "no usable pairwise cipher suite found (w=%d)",
      VAR_16);
  return VAR_7;
 }

 if (VAR_16 & (1 << VAR_0))
  VAR_13->rsn_ucastcipher = VAR_0;
 else
  VAR_13->rsn_ucastcipher = VAR_1;


 VAR_18 = FUNC_1(VAR_12);
 VAR_12 += 2, VAR_15 -= 2;
 if (VAR_15 < VAR_18*4) {
  FUNC_0(VAR_11,
      VAR_3 | VAR_4,
      VAR_14, "WPA", "key mgmt alg data too short; len %u, n %u",
      VAR_15, VAR_18);
  return VAR_6;
 }
 VAR_16 = 0;
 for (; VAR_18 > 0; VAR_18--) {
  VAR_16 |= FUNC_5(VAR_12);
  VAR_12 += 4, VAR_15 -= 4;
 }
 if (VAR_16 & VAR_9)
  VAR_13->rsn_keymgmt = VAR_9;
 else
  VAR_13->rsn_keymgmt = VAR_8;

 if (VAR_15 > 2)
  VAR_13->rsn_caps = FUNC_1(VAR_12);

 return 0;
}
