
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peap_data {int peap_version; scalar_t__ tlv_request; scalar_t__ crypto_binding; int recv_version; int crypto_binding_sent; int ssl; int const* cmk; int binding_nonce; struct wpabuf* soh_response; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 struct wpabuf* FUNC_0 (int ,int ,size_t,int ,int const) ;
 scalar_t__ FUNC_1 (struct eap_sm*,struct eap_peap_data*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,int *,struct wpabuf*) ;
 int FUNC_3 (int const*,int,int,int const**,size_t*,int const*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int const*,size_t) ;
 int FUNC_6 (int ,char*,struct wpabuf*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wpabuf*) ;
 int const* FUNC_10 (struct wpabuf*,int) ;
 int FUNC_11 (struct wpabuf*,int) ;
 int FUNC_12 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_13 (struct wpabuf*,int ,int) ;
 int FUNC_14 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_15(struct eap_sm *VAR_13,
       struct eap_peap_data *VAR_14,
       u8 VAR_15)
{
 struct wpabuf *VAR_16, *VAR_17;
 size_t VAR_18;

 VAR_18 = 6;
 if (VAR_14->peap_version == 0 && VAR_14->tlv_request == VAR_12 &&
     VAR_14->crypto_binding != VAR_10) {
  VAR_18 += 60;




 }

 VAR_16 = FUNC_0(VAR_7, VAR_6, VAR_18,
       VAR_0, VAR_15);
 if (VAR_16 == ((void*)0))
  return ((void*)0);

 FUNC_14(VAR_16, 0x80);
 FUNC_14(VAR_16, VAR_4);

 FUNC_11(VAR_16, 2);

 FUNC_11(VAR_16, VAR_14->tlv_request == VAR_12 ?
   VAR_3 : VAR_2);

 if (VAR_14->peap_version == 0 && VAR_14->tlv_request == VAR_12 &&
     VAR_14->crypto_binding != VAR_10) {
  u8 *VAR_19;
  u8 VAR_20 = VAR_5;
  const u8 *VAR_21[2];
  size_t VAR_22[2];
  u16 VAR_23;
  if (FUNC_1(VAR_13, VAR_14) < 0 ||
      FUNC_4(VAR_14->binding_nonce, 32)) {
   FUNC_8(VAR_16);
   return ((void*)0);
  }


  VAR_21[0] = FUNC_10(VAR_16, 0);
  VAR_22[0] = 60;
  VAR_21[1] = &VAR_20;
  VAR_22[1] = 1;

  VAR_23 = VAR_1;
  FUNC_11(VAR_16, VAR_23);
  FUNC_11(VAR_16, 56);

  FUNC_14(VAR_16, 0);
  FUNC_14(VAR_16, VAR_14->peap_version);
  FUNC_14(VAR_16, VAR_14->recv_version);
  FUNC_14(VAR_16, 0);
  FUNC_13(VAR_16, VAR_14->binding_nonce, 32);
  VAR_19 = FUNC_10(VAR_16, 20);
  FUNC_5(VAR_9, "EAP-PEAP: Compound_MAC CMK",
       VAR_14->cmk, 20);
  FUNC_5(VAR_9, "EAP-PEAP: Compound_MAC data 1",
       VAR_21[0], VAR_22[0]);
  FUNC_5(VAR_9, "EAP-PEAP: Compound_MAC data 2",
       VAR_21[1], VAR_22[1]);
  FUNC_3(VAR_14->cmk, 20, 2, VAR_21, VAR_22, VAR_19);
  FUNC_5(VAR_9, "EAP-PEAP: Compound_MAC",
       VAR_19, VAR_11);
  VAR_14->crypto_binding_sent = 1;
 }

 FUNC_6(VAR_8, "EAP-PEAP: Encrypting Phase 2 TLV data",
       VAR_16);

 VAR_17 = FUNC_2(VAR_13, &VAR_14->ssl, VAR_16);
 FUNC_8(VAR_16);

 return VAR_17;
}
