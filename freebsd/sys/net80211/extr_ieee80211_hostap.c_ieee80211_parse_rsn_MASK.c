
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,char*,char*,int,...) ;
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
 void* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct ieee80211_rsnparms*,int ,int) ;
 int FUNC_4 (int const*,int *,int*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211vap *VAR_15, const uint8_t *VAR_16,
 struct ieee80211_rsnparms *VAR_17, const struct ieee80211_frame *VAR_18)
{
 uint8_t VAR_19 = VAR_16[1];
 uint32_t VAR_20;
 int VAR_21, VAR_22;






 if ((VAR_15->iv_flags & VAR_5) == 0) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "WPA", "not RSN, flags 0x%x", VAR_15->iv_flags);
  return VAR_9;
 }

 if (VAR_19 < 10) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "too short, len %u", VAR_19);
  return VAR_9;
 }
 VAR_16 += 2;
 VAR_20 = FUNC_1(VAR_16);
 if (VAR_20 != VAR_14) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "bad version %u", VAR_20);
  return VAR_11;
 }
 VAR_16 += 2, VAR_19 -= 2;

 FUNC_3(VAR_17, 0, sizeof(*VAR_17));


 VAR_21 = FUNC_4(VAR_16, &VAR_17->rsn_mcastkeylen, &VAR_17->rsn_mcastcipher);
 if (VAR_21 != 0) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "unknown mcast cipher suite %08X",
      FUNC_2(VAR_16));
  return VAR_8;
 }
 if (VAR_17->rsn_mcastcipher == VAR_2) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "invalid mcast cipher suite %d",
      VAR_17->rsn_mcastcipher);
  return VAR_8;
 }
 VAR_16 += 4, VAR_19 -= 4;


 VAR_22 = FUNC_1(VAR_16);
 VAR_16 += 2, VAR_19 -= 2;
 if (VAR_19 < VAR_22*4+2) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "ucast cipher data too short; len %u, n %u",
      VAR_19, VAR_22);
  return VAR_9;
 }
 VAR_20 = 0;

 for (; VAR_22 > 0; VAR_22--) {
  uint8_t VAR_23;

  VAR_21 = FUNC_4(VAR_16, &VAR_17->rsn_ucastkeylen, &VAR_23);
  if (VAR_21 == 0)
   VAR_20 |= 1 << VAR_23;

  VAR_16 += 4, VAR_19 -= 4;
 }
        if (VAR_20 & (1 << VAR_0))
                VAR_17->rsn_ucastcipher = VAR_0;
 else if (VAR_20 & (1 << VAR_1))
  VAR_17->rsn_ucastcipher = VAR_1;
 else if (VAR_20 & (1 << VAR_3))
  VAR_17->rsn_ucastcipher = VAR_3;
 else if ((VAR_20 & (1 << VAR_2)) &&
     (VAR_17->rsn_mcastcipher == VAR_4 ||
      VAR_17->rsn_mcastcipher == VAR_3))
  VAR_17->rsn_ucastcipher = VAR_2;
 else {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "no usable pairwise cipher suite found (w=%d)",
      VAR_20);
  return VAR_10;
 }


 VAR_22 = FUNC_1(VAR_16);
 VAR_16 += 2, VAR_19 -= 2;
 if (VAR_19 < VAR_22*4) {
  FUNC_0(VAR_15,
      VAR_6 | VAR_7,
      VAR_18, "RSN", "key mgmt alg data too short; len %u, n %u",
      VAR_19, VAR_22);
  return VAR_9;
 }
 VAR_20 = 0;
 for (; VAR_22 > 0; VAR_22--) {
  VAR_20 |= FUNC_5(VAR_16);
  VAR_16 += 4, VAR_19 -= 4;
 }
 if (VAR_20 & VAR_13)
  VAR_17->rsn_keymgmt = VAR_13;
 else
  VAR_17->rsn_keymgmt = VAR_12;


 if (VAR_19 > 2)
  VAR_17->rsn_caps = FUNC_1(VAR_16);


 return 0;
}
