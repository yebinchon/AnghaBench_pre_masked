
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_pax_hdr {scalar_t__ op_code; int flags; scalar_t__ mac_id; scalar_t__ dh_group_id; scalar_t__ public_key_id; } ;
struct eap_pax_data {scalar_t__ state; scalar_t__ mac_id; int ick; scalar_t__ keys_set; } ;
struct eap_hdr {int dummy; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ,scalar_t__,int *,int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;

__attribute__((used)) static Boolean FUNC_8(struct eap_sm *VAR_17, void *VAR_18,
        struct wpabuf *VAR_19)
{
 struct eap_pax_data *VAR_20 = VAR_18;
 struct eap_pax_hdr *VAR_21;
 const u8 *VAR_22;
 size_t VAR_23, VAR_24;
 u8 VAR_25[VAR_4], *VAR_26;

 VAR_22 = FUNC_0(VAR_9, VAR_8, VAR_19, &VAR_23);
 if (VAR_22 == ((void*)0) || VAR_23 < sizeof(*VAR_21) + VAR_4) {
  FUNC_4(VAR_12, "EAP-PAX: Invalid frame");
  return VAR_16;
 }

 VAR_24 = sizeof(struct eap_hdr) + 1 + VAR_23;
 VAR_21 = (struct eap_pax_hdr *) VAR_22;

 FUNC_4(VAR_11, "EAP-PAX: received frame: op_code 0x%x "
     "flags 0x%x mac_id 0x%x dh_group_id 0x%x "
     "public_key_id 0x%x",
     VAR_21->op_code, VAR_21->flags, VAR_21->mac_id, VAR_21->dh_group_id,
     VAR_21->public_key_id);
 FUNC_3(VAR_13, "EAP-PAX: received payload",
      (u8 *) (VAR_21 + 1), VAR_23 - sizeof(*VAR_21) - VAR_4);

 if (VAR_20->state == VAR_14 &&
     VAR_21->op_code != VAR_6) {
  FUNC_4(VAR_11, "EAP-PAX: Expected PAX_STD-2 - "
      "ignore op %d", VAR_21->op_code);
  return VAR_16;
 }

 if (VAR_20->state == VAR_15 &&
     VAR_21->op_code != VAR_5) {
  FUNC_4(VAR_11, "EAP-PAX: Expected PAX-ACK - "
      "ignore op %d", VAR_21->op_code);
  return VAR_16;
 }

 if (VAR_21->op_code != VAR_6 &&
     VAR_21->op_code != VAR_5) {
  FUNC_4(VAR_11, "EAP-PAX: Unknown op_code 0x%x",
      VAR_21->op_code);
 }

 if (VAR_20->mac_id != VAR_21->mac_id) {
  FUNC_4(VAR_11, "EAP-PAX: Expected MAC ID 0x%x, "
      "received 0x%x", VAR_20->mac_id, VAR_21->mac_id);
  return VAR_16;
 }

 if (VAR_21->dh_group_id != VAR_0) {
  FUNC_4(VAR_12, "EAP-PAX: Expected DH Group ID 0x%x, "
      "received 0x%x", VAR_0,
      VAR_21->dh_group_id);
  return VAR_16;
 }

 if (VAR_21->public_key_id != VAR_7) {
  FUNC_4(VAR_12, "EAP-PAX: Expected Public Key ID 0x%x, "
      "received 0x%x", VAR_7,
      VAR_21->public_key_id);
  return VAR_16;
 }

 if (VAR_21->flags & VAR_2) {

  FUNC_4(VAR_12, "EAP-PAX: fragmentation not supported");
  return VAR_16;
 }

 if (VAR_21->flags & VAR_1) {
  FUNC_4(VAR_12, "EAP-PAX: Unexpected CE flag");
  return VAR_16;
 }

 if (VAR_20->keys_set) {
  if (VAR_23 - sizeof(*VAR_21) < VAR_4) {
   FUNC_4(VAR_12, "EAP-PAX: No ICV in the packet");
   return VAR_16;
  }
  VAR_26 = FUNC_7(VAR_19) + VAR_24 - VAR_4;
  FUNC_3(VAR_13, "EAP-PAX: ICV", VAR_26, VAR_4);
  if (FUNC_1(VAR_20->mac_id, VAR_20->ick, VAR_3,
    FUNC_6(VAR_19),
    FUNC_5(VAR_19) - VAR_4,
    ((void*)0), 0, ((void*)0), 0, VAR_25) < 0) {
   FUNC_4(VAR_12,
       "EAP-PAX: Failed to calculate ICV");
   return VAR_16;
  }

  if (FUNC_2(VAR_25, VAR_26, VAR_4) != 0) {
   FUNC_4(VAR_12, "EAP-PAX: Invalid ICV");
   FUNC_3(VAR_13, "EAP-PAX: Expected ICV",
        VAR_25, VAR_4);
   return VAR_16;
  }
 }

 return VAR_10;
}
