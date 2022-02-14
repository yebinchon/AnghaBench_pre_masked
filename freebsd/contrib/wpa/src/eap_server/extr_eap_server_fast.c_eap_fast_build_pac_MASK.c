
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct pac_tlv_hdr {void* len; void* type; } ;
struct os_time {scalar_t__ sec; } ;
struct eap_tlv_result_tlv {int status; int length; int tlv_type; } ;
struct eap_tlv_hdr {void* length; void* tlv_type; } ;
struct eap_sm {int identity_len; int * identity; } ;
struct eap_fast_data {int srv_id_len; int * srv_id_info; int * srv_id; scalar_t__ pac_key_lifetime; int pac_opaque_encr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int,size_t,int *,int *) ;
 int FUNC_3 (struct wpabuf*,int ,int *,size_t) ;
 int FUNC_4 (struct wpabuf*,int ,int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct os_time*) ;
 int * FUNC_8 (size_t) ;
 int FUNC_9 (int *,int *,int) ;
 size_t FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int ,char*,int *,size_t) ;
 int FUNC_13 (int ,char*,int *,int) ;
 int FUNC_14 (int ,char*) ;
 struct wpabuf* FUNC_15 (size_t) ;
 void* FUNC_16 (struct wpabuf*,int) ;
 int FUNC_17 (struct wpabuf*,int ) ;
 int FUNC_18 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_19(struct eap_sm *VAR_19,
       struct eap_fast_data *VAR_20)
{
 u8 VAR_21[VAR_0];
 u8 *VAR_22, *VAR_23;
 struct wpabuf *VAR_24;
 u8 *VAR_25;
 size_t VAR_26, VAR_27, VAR_28;
 struct eap_tlv_hdr *VAR_29;
 struct pac_tlv_hdr *VAR_30;
 struct eap_tlv_result_tlv *VAR_31;
 struct os_time VAR_32;

 if (FUNC_11(VAR_21, VAR_0) < 0 ||
     FUNC_7(&VAR_32) < 0)
  return ((void*)0);
 FUNC_13(VAR_5, "EAP-FAST: Generated PAC-Key",
   VAR_21, VAR_0);

 VAR_28 = (2 + VAR_0) + (2 + 4) +
  (2 + VAR_19->identity_len) + 8;
 VAR_22 = FUNC_8(VAR_28);
 if (VAR_22 == ((void*)0))
  return ((void*)0);

 VAR_27 = FUNC_10(VAR_20->srv_id_info);

 VAR_25 = VAR_22;
 *VAR_25++ = VAR_7;
 *VAR_25++ = VAR_0;
 FUNC_9(VAR_25, VAR_21, VAR_0);
 VAR_25 += VAR_0;

 *VAR_25++ = VAR_8;
 *VAR_25++ = 4;
 FUNC_1(VAR_25, VAR_32.sec + VAR_20->pac_key_lifetime);
 VAR_25 += 4;

 if (VAR_19->identity) {
  *VAR_25++ = VAR_6;
  *VAR_25++ = VAR_19->identity_len;
  FUNC_9(VAR_25, VAR_19->identity, VAR_19->identity_len);
  VAR_25 += VAR_19->identity_len;
 }

 VAR_28 = VAR_25 - VAR_22;
 while (VAR_28 % 8) {
  *VAR_25++ = VAR_9;
  VAR_28++;
 }

 VAR_23 = FUNC_8(VAR_28 + 8);
 if (VAR_23 == ((void*)0)) {
  FUNC_6(VAR_22);
  return ((void*)0);
 }
 if (FUNC_2(VAR_20->pac_opaque_encr, sizeof(VAR_20->pac_opaque_encr),
       VAR_28 / 8, VAR_22, VAR_23) < 0) {
  FUNC_6(VAR_22);
  FUNC_6(VAR_23);
  return ((void*)0);
 }
 FUNC_6(VAR_22);

 VAR_28 += 8;
 FUNC_12(VAR_5, "EAP-FAST: PAC-Opaque",
      VAR_23, VAR_28);

 VAR_26 = sizeof(*VAR_29) +
  sizeof(struct pac_tlv_hdr) + VAR_0 +
  sizeof(struct pac_tlv_hdr) + VAR_28 +
  VAR_20->srv_id_len + VAR_27 + 100 + sizeof(*VAR_31);
 VAR_24 = FUNC_15(VAR_26);
 if (VAR_24 == ((void*)0)) {
  FUNC_6(VAR_23);
  return ((void*)0);
 }


 FUNC_14(VAR_5, "EAP-FAST: Add Result TLV (status=SUCCESS)");
 VAR_31 = FUNC_16(VAR_24, sizeof(*VAR_31));
 FUNC_0((u8 *) &VAR_31->tlv_type,
       VAR_4 | VAR_3);
 FUNC_0((u8 *) &VAR_31->length, 2);
 FUNC_0((u8 *) &VAR_31->status, VAR_2);


 FUNC_14(VAR_5, "EAP-FAST: Add PAC TLV");
 VAR_29 = FUNC_16(VAR_24, sizeof(*VAR_29));
 VAR_29->tlv_type = FUNC_5(VAR_4 |
      VAR_1);


 FUNC_3(VAR_24, VAR_15, VAR_21, VAR_0);


 FUNC_3(VAR_24, VAR_16, VAR_23, VAR_28);
 FUNC_6(VAR_23);


 VAR_30 = FUNC_16(VAR_24, sizeof(*VAR_30));
 VAR_30->type = FUNC_5(VAR_14);


 FUNC_4(VAR_24, VAR_12, 4);
 FUNC_18(VAR_24, VAR_32.sec + VAR_20->pac_key_lifetime);


 FUNC_3(VAR_24, VAR_10, VAR_20->srv_id, VAR_20->srv_id_len);



 if (VAR_19->identity) {
  FUNC_3(VAR_24, VAR_13, VAR_19->identity,
     VAR_19->identity_len);
 }


 FUNC_3(VAR_24, VAR_11, VAR_20->srv_id_info,
    VAR_27);


 FUNC_4(VAR_24, VAR_17, 2);
 FUNC_17(VAR_24, VAR_18);


 VAR_25 = FUNC_16(VAR_24, 0);
 VAR_30->len = FUNC_5(VAR_25 - (u8 *) (VAR_30 + 1));
 VAR_29->length = FUNC_5(VAR_25 - (u8 *) (VAR_29 + 1));

 return VAR_24;
}
