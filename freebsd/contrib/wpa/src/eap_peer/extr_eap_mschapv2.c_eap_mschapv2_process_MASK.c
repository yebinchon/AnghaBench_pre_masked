
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {scalar_t__ mschapv2_retry; } ;
struct eap_mschapv2_hdr {int op_code; int mschapv2_id; } ;
struct eap_mschapv2_data {scalar_t__ prev_error; struct wpabuf* prev_challenge; } ;
struct eap_method_ret {void* ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;
 int FUNC_1 (struct wpabuf const*) ;
 int * FUNC_2 (int ,int ,struct wpabuf const*,size_t*) ;
 struct wpabuf* FUNC_3 (struct eap_sm*,struct eap_mschapv2_data*,struct eap_method_ret*,struct eap_mschapv2_hdr const*,size_t,int ) ;
 scalar_t__ FUNC_4 (struct eap_sm*) ;
 scalar_t__ FUNC_5 (struct eap_sm*,size_t,struct eap_mschapv2_hdr const*) ;
 int FUNC_6 (struct eap_mschapv2_data*,struct wpabuf const*) ;
 struct wpabuf* FUNC_7 (struct eap_sm*,struct eap_mschapv2_data*,struct eap_method_ret*,struct eap_mschapv2_hdr const*,size_t,int ) ;
 struct wpabuf* FUNC_8 (struct eap_sm*,struct eap_mschapv2_data*,struct eap_method_ret*,struct eap_mschapv2_hdr const*,size_t,int ) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static struct wpabuf * FUNC_10(struct eap_sm *VAR_6, void *VAR_7,
         struct eap_method_ret *VAR_8,
         const struct wpabuf *VAR_9)
{
 struct eap_mschapv2_data *VAR_10 = VAR_7;
 struct eap_peer_config *VAR_11 = FUNC_0(VAR_6);
 const struct eap_mschapv2_hdr *VAR_12;
 int VAR_13 = 0;
 const u8 *VAR_14;
 size_t VAR_15;
 u8 VAR_16;

 if (FUNC_4(VAR_6)) {
  VAR_8->ignore = VAR_5;
  return ((void*)0);
 }

 if (VAR_11->mschapv2_retry && VAR_10->prev_challenge &&
     VAR_10->prev_error == VAR_2) {
  FUNC_9(VAR_3, "EAP-MSCHAPV2: Replacing pending packet "
      "with the previous challenge");

  VAR_9 = VAR_10->prev_challenge;
  VAR_13 = 1;
  VAR_11->mschapv2_retry = 0;
 }

 VAR_14 = FUNC_2(VAR_1, VAR_0, VAR_9,
          &VAR_15);
 if (VAR_14 == ((void*)0) || VAR_15 < sizeof(*VAR_12) + 1) {
  VAR_8->ignore = VAR_5;
  return ((void*)0);
 }

 VAR_12 = (const struct eap_mschapv2_hdr *) VAR_14;
 if (FUNC_5(VAR_6, VAR_15, VAR_12)) {
  VAR_8->ignore = VAR_5;
  return ((void*)0);
 }

 VAR_16 = FUNC_1(VAR_9);
 FUNC_9(VAR_3, "EAP-MSCHAPV2: RX identifier %d mschapv2_id %d",
     VAR_16, VAR_12->mschapv2_id);

 switch (VAR_12->op_code) {
 case 130:
  if (!VAR_13)
   FUNC_6(VAR_10, VAR_9);
  return FUNC_3(VAR_6, VAR_10, VAR_8, VAR_12, VAR_15, VAR_16);
 case 128:
  return FUNC_8(VAR_6, VAR_10, VAR_8, VAR_12, VAR_15, VAR_16);
 case 129:
  return FUNC_7(VAR_6, VAR_10, VAR_8, VAR_12, VAR_15, VAR_16);
 default:
  FUNC_9(VAR_4, "EAP-MSCHAPV2: Unknown op %d - ignored",
      VAR_12->op_code);
  VAR_8->ignore = VAR_5;
  return ((void*)0);
 }
}
