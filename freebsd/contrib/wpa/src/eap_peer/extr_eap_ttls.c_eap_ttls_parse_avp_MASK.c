
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ttls_parse_avp {int* mschapv2; int mschapv2_error; } ;
struct ttls_avp {int avp_length; int avp_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int*,size_t,struct ttls_parse_avp*) ;
 int FUNC_3 (int ,char*,int*,size_t) ;
 int FUNC_4 (int ,char*,int*,size_t) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(u8 *VAR_9, size_t VAR_10,
         struct ttls_parse_avp *VAR_11)
{
 struct ttls_avp *VAR_12;
 u32 VAR_13, VAR_14, VAR_15 = 0;
 u8 VAR_16, *VAR_17;
 size_t VAR_18;

 VAR_12 = (struct ttls_avp *) VAR_9;
 VAR_13 = FUNC_1(VAR_12->avp_code);
 VAR_14 = FUNC_1(VAR_12->avp_length);
 VAR_16 = (VAR_14 >> 24) & 0xff;
 VAR_14 &= 0xffffff;
 FUNC_5(VAR_2, "EAP-TTLS: AVP: code=%d flags=0x%02x "
     "length=%d", (int) VAR_13, VAR_16,
     (int) VAR_14);

 if (VAR_14 > VAR_10) {
  FUNC_5(VAR_3, "EAP-TTLS: AVP overflow "
      "(len=%d, left=%lu) - dropped",
      (int) VAR_14, (unsigned long) VAR_10);
  return -1;
 }

 if (VAR_14 < sizeof(*VAR_12)) {
  FUNC_5(VAR_3, "EAP-TTLS: Invalid AVP length %d",
      VAR_14);
  return -1;
 }

 VAR_17 = (u8 *) (VAR_12 + 1);
 VAR_18 = VAR_14 - sizeof(*VAR_12);
 if (VAR_16 & VAR_1) {
  if (VAR_18 < 4) {
   FUNC_5(VAR_3, "EAP-TTLS: Vendor AVP "
       "underflow");
   return -1;
  }
  VAR_15 = FUNC_0(VAR_17);
  FUNC_5(VAR_2, "EAP-TTLS: AVP vendor_id %d",
      (int) VAR_15);
  VAR_17 += 4;
  VAR_18 -= 4;
 }

 FUNC_3(VAR_2, "EAP-TTLS: AVP data", VAR_17, VAR_18);

 if (VAR_15 == 0 && VAR_13 == VAR_4) {
  if (FUNC_2(VAR_17, VAR_18, VAR_11) < 0)
   return -1;
 } else if (VAR_15 == 0 && VAR_13 == VAR_7) {


  FUNC_4(VAR_2, "EAP-TTLS: AVP - Reply-Message",
      VAR_17, VAR_18);
 } else if (VAR_15 == VAR_8 &&
     VAR_13 == VAR_5) {
  FUNC_4(VAR_2, "EAP-TTLS: MS-CHAP2-Success",
      VAR_17, VAR_18);
  if (VAR_18 != 43) {
   FUNC_5(VAR_3, "EAP-TTLS: Unexpected "
       "MS-CHAP2-Success length "
       "(len=%lu, expected 43)",
       (unsigned long) VAR_18);
   return -1;
  }
  VAR_11->mschapv2 = VAR_17;
 } else if (VAR_15 == VAR_8 &&
     VAR_13 == VAR_6) {
  FUNC_4(VAR_2, "EAP-TTLS: MS-CHAP-Error",
      VAR_17, VAR_18);
  VAR_11->mschapv2_error = 1;
 } else if (VAR_16 & VAR_0) {
  FUNC_5(VAR_3, "EAP-TTLS: Unsupported mandatory AVP "
      "code %d vendor_id %d - dropped",
      (int) VAR_13, (int) VAR_15);
  return -1;
 } else {
  FUNC_5(VAR_2, "EAP-TTLS: Ignoring unsupported AVP "
      "code %d vendor_id %d",
      (int) VAR_13, (int) VAR_15);
 }

 return VAR_14;
}
