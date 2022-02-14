
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sta_info {int dummy; } ;
struct hostapd_data {int dummy; } ;
struct eap_hdr {int code; int identifier; int length; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hostapd_data*,struct sta_info*,struct eap_hdr*,int) ;
 int FUNC_2 (struct hostapd_data*,struct sta_info*,struct eap_hdr*,int) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct hostapd_data *VAR_2, struct sta_info *VAR_3,
         u8 *VAR_4, size_t VAR_5)
{
 struct eap_hdr *VAR_6;
 u16 VAR_7;

 if (VAR_5 < sizeof(*VAR_6)) {
  FUNC_3(VAR_1, "   too short EAP packet");
  return;
 }

 VAR_6 = (struct eap_hdr *) VAR_4;

 VAR_7 = FUNC_0(VAR_6->length);
 FUNC_3(VAR_0, "EAP: code=%d identifier=%d length=%d",
     VAR_6->code, VAR_6->identifier, VAR_7);
 if (VAR_7 < sizeof(*VAR_6)) {
  FUNC_3(VAR_0, "   Invalid EAP length");
  return;
 } else if (VAR_7 > VAR_5) {
  FUNC_3(VAR_0, "   Too short frame to contain this EAP "
      "packet");
  return;
 } else if (VAR_7 < VAR_5) {
  FUNC_3(VAR_0, "   Ignoring %lu extra bytes after EAP "
      "packet", (unsigned long) VAR_5 - VAR_7);
 }

 switch (VAR_6->code) {
 case 130:
  FUNC_3(VAR_0, " (request)");
  return;
 case 129:
  FUNC_3(VAR_0, " (response)");
  FUNC_2(VAR_2, VAR_3, VAR_6, VAR_7);
  break;
 case 128:
  FUNC_3(VAR_0, " (success)");
  return;
 case 133:
  FUNC_3(VAR_0, " (failure)");
  return;
 case 131:
  FUNC_3(VAR_0, " (initiate)");
  FUNC_1(VAR_2, VAR_3, VAR_6, VAR_7);
  break;
 case 132:
  FUNC_3(VAR_0, " (finish)");
  break;
 default:
  FUNC_3(VAR_0, " (unknown code)");
  return;
 }
}
