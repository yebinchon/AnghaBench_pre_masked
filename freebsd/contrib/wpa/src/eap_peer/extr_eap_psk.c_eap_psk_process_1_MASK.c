
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_psk_hdr_2 {int * mac_p; int * rand_p; int * rand_s; int flags; } ;
struct eap_psk_hdr_1 {int * rand_s; int flags; } ;
struct eap_psk_data {size_t id_s_len; int id_p_len; int state; int * id_p; int ak; int * rand_p; int * id_s; int * rand_s; } ;
struct eap_method_ret {void* ignore; int decision; int methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_2 (struct wpabuf const*) ;
 int * FUNC_3 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_4 (int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,size_t,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (size_t) ;
 int FUNC_8 (int *,int *,int) ;
 int * FUNC_9 (struct eap_psk_hdr_1 const*,size_t) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int ,char*,int *,int) ;
 int FUNC_12 (int ,char*,int *,size_t) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (struct wpabuf*) ;
 struct eap_psk_hdr_2* FUNC_15 (struct wpabuf*,int) ;
 int FUNC_16 (struct wpabuf*,int *,int) ;

__attribute__((used)) static struct wpabuf * FUNC_17(struct eap_psk_data *VAR_12,
      struct eap_method_ret *VAR_13,
      const struct wpabuf *VAR_14)
{
 const struct eap_psk_hdr_1 *VAR_15;
 struct eap_psk_hdr_2 *VAR_16;
 struct wpabuf *VAR_17;
 u8 *VAR_18, *VAR_19;
 size_t VAR_20, VAR_21;
 const u8 *VAR_22;

 FUNC_13(VAR_7, "EAP-PSK: in INIT state");

 VAR_22 = FUNC_3(VAR_5, VAR_4, VAR_14, &VAR_21);
 VAR_15 = (const struct eap_psk_hdr_1 *) VAR_22;
 if (VAR_22 == ((void*)0) || VAR_21 < sizeof(*VAR_15)) {
  FUNC_13(VAR_9, "EAP-PSK: Invalid first message "
      "length (%lu; expected %lu or more)",
      (unsigned long) VAR_21,
      (unsigned long) sizeof(*VAR_15));
  VAR_13->ignore = VAR_11;
  return ((void*)0);
 }
 FUNC_13(VAR_7, "EAP-PSK: Flags=0x%x", VAR_15->flags);
 if (FUNC_0(VAR_15->flags) != 0) {
  FUNC_13(VAR_9, "EAP-PSK: Unexpected T=%d (expected 0)",
      FUNC_0(VAR_15->flags));
  VAR_13->methodState = VAR_6;
  VAR_13->decision = VAR_0;
  return ((void*)0);
 }
 FUNC_11(VAR_7, "EAP-PSK: RAND_S", VAR_15->rand_s,
      VAR_3);
 FUNC_8(VAR_12->rand_s, VAR_15->rand_s, VAR_3);
 FUNC_6(VAR_12->id_s);
 VAR_12->id_s_len = VAR_21 - sizeof(*VAR_15);
 VAR_12->id_s = FUNC_9(VAR_15 + 1, VAR_12->id_s_len);
 if (VAR_12->id_s == ((void*)0)) {
  FUNC_13(VAR_8, "EAP-PSK: Failed to allocate memory for "
      "ID_S (len=%lu)", (unsigned long) VAR_12->id_s_len);
  VAR_13->ignore = VAR_11;
  return ((void*)0);
 }
 FUNC_12(VAR_7, "EAP-PSK: ID_S",
     VAR_12->id_s, VAR_12->id_s_len);

 if (FUNC_10(VAR_12->rand_p, VAR_3)) {
  FUNC_13(VAR_8, "EAP-PSK: Failed to get random data");
  VAR_13->ignore = VAR_11;
  return ((void*)0);
 }

 VAR_17 = FUNC_4(VAR_5, VAR_4,
        sizeof(*VAR_16) + VAR_12->id_p_len, VAR_1,
        FUNC_2(VAR_14));
 if (VAR_17 == ((void*)0))
  return ((void*)0);
 VAR_16 = FUNC_15(VAR_17, sizeof(*VAR_16));
 VAR_16->flags = FUNC_1(1);
 FUNC_8(VAR_16->rand_s, VAR_15->rand_s, VAR_3);
 FUNC_8(VAR_16->rand_p, VAR_12->rand_p, VAR_3);
 FUNC_16(VAR_17, VAR_12->id_p, VAR_12->id_p_len);

 VAR_20 = VAR_12->id_p_len + VAR_12->id_s_len + 2 * VAR_3;
 VAR_18 = FUNC_7(VAR_20);
 if (VAR_18 == ((void*)0)) {
  FUNC_14(VAR_17);
  return ((void*)0);
 }
 FUNC_8(VAR_18, VAR_12->id_p, VAR_12->id_p_len);
 VAR_19 = VAR_18 + VAR_12->id_p_len;
 FUNC_8(VAR_19, VAR_12->id_s, VAR_12->id_s_len);
 VAR_19 += VAR_12->id_s_len;
 FUNC_8(VAR_19, VAR_15->rand_s, VAR_3);
 VAR_19 += VAR_3;
 FUNC_8(VAR_19, VAR_12->rand_p, VAR_3);
 if (FUNC_5(VAR_12->ak, VAR_18, VAR_20, VAR_16->mac_p)) {
  FUNC_6(VAR_18);
  FUNC_14(VAR_17);
  return ((void*)0);
 }
 FUNC_6(VAR_18);
 FUNC_11(VAR_7, "EAP-PSK: RAND_P", VAR_16->rand_p,
      VAR_3);
 FUNC_11(VAR_7, "EAP-PSK: MAC_P", VAR_16->mac_p, VAR_2);
 FUNC_12(VAR_7, "EAP-PSK: ID_P",
     VAR_12->id_p, VAR_12->id_p_len);

 VAR_12->state = VAR_10;

 return VAR_17;
}
