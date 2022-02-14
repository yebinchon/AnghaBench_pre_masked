
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_hdr {scalar_t__ op_code; } ;
struct eap_mschapv2_data {scalar_t__ state; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static Boolean FUNC_2(struct eap_sm *VAR_12, void *VAR_13,
      struct wpabuf *VAR_14)
{
 struct eap_mschapv2_data *VAR_15 = VAR_13;
 struct eap_mschapv2_hdr *VAR_16;
 const u8 *VAR_17;
 size_t VAR_18;

 VAR_17 = FUNC_0(VAR_2, VAR_1, VAR_14,
          &VAR_18);
 if (VAR_17 == ((void*)0) || VAR_18 < 1) {
  FUNC_1(VAR_9, "EAP-MSCHAPV2: Invalid frame");
  return VAR_11;
 }

 VAR_16 = (struct eap_mschapv2_hdr *) VAR_17;
 if (VAR_15->state == VAR_0 &&
     VAR_16->op_code != VAR_6) {
  FUNC_1(VAR_8, "EAP-MSCHAPV2: Expected Response - "
      "ignore op %d", VAR_16->op_code);
  return VAR_11;
 }

 if (VAR_15->state == VAR_10 &&
     VAR_16->op_code != VAR_7 &&
     VAR_16->op_code != VAR_5) {
  FUNC_1(VAR_8, "EAP-MSCHAPV2: Expected Success or "
      "Failure - ignore op %d", VAR_16->op_code);
  return VAR_11;
 }

 if (VAR_15->state == VAR_3 &&
     VAR_16->op_code != VAR_5) {
  FUNC_1(VAR_8, "EAP-MSCHAPV2: Expected Failure "
      "- ignore op %d", VAR_16->op_code);
  return VAR_11;
 }

 return VAR_4;
}
