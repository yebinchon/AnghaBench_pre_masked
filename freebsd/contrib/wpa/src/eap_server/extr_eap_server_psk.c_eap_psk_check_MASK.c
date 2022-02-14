
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_psk_hdr_4 {int dummy; } ;
struct eap_psk_hdr_2 {int dummy; } ;
struct eap_psk_data {scalar_t__ state; } ;
typedef int Boolean ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int* FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_3(struct eap_sm *VAR_8, void *VAR_9,
        struct wpabuf *VAR_10)
{
 struct eap_psk_data *VAR_11 = VAR_9;
 size_t VAR_12;
 u8 VAR_13;
 const u8 *VAR_14;

 VAR_14 = FUNC_1(VAR_1, VAR_0, VAR_10, &VAR_12);
 if (VAR_14 == ((void*)0) || VAR_12 < 1) {
  FUNC_2(VAR_4, "EAP-PSK: Invalid frame");
  return VAR_7;
 }
 VAR_13 = FUNC_0(*VAR_14);

 FUNC_2(VAR_3, "EAP-PSK: received frame: T=%d", VAR_13);

 if (VAR_11->state == VAR_5 && VAR_13 != 1) {
  FUNC_2(VAR_3, "EAP-PSK: Expected PSK-2 - "
      "ignore T=%d", VAR_13);
  return VAR_7;
 }

 if (VAR_11->state == VAR_6 && VAR_13 != 3) {
  FUNC_2(VAR_3, "EAP-PSK: Expected PSK-4 - "
      "ignore T=%d", VAR_13);
  return VAR_7;
 }

 if ((VAR_13 == 1 && VAR_12 < sizeof(struct eap_psk_hdr_2)) ||
     (VAR_13 == 3 && VAR_12 < sizeof(struct eap_psk_hdr_4))) {
  FUNC_2(VAR_3, "EAP-PSK: Too short frame");
  return VAR_7;
 }

 return VAR_2;
}
