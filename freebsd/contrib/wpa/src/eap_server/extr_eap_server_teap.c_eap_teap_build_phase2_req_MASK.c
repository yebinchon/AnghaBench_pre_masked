
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct teap_tlv_hdr {int dummy; } ;
struct eap_teap_data {int phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int eap_teap_auth; } ;
struct TYPE_2__ {struct wpabuf* (* buildReq ) (struct eap_sm*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpabuf*,int ,int ) ;
 struct wpabuf* FUNC_1 (struct wpabuf*) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,int ,int ) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*) ;
 struct wpabuf* FUNC_5 (int) ;

__attribute__((used)) static struct wpabuf * FUNC_6(struct eap_sm *VAR_3,
       struct eap_teap_data *VAR_4,
       u8 VAR_5)
{
 struct wpabuf *VAR_6;

 if (VAR_3->eap_teap_auth == 1) {
  FUNC_4(VAR_0, "EAP-TEAP: Initiate Basic-Password-Auth");
  VAR_6 = FUNC_5(sizeof(struct teap_tlv_hdr));
  if (!VAR_6)
   return ((void*)0);
  FUNC_0(VAR_6, VAR_2, 0);
  return VAR_6;
 }

 FUNC_4(VAR_0, "EAP-TEAP: Initiate inner EAP method");
 if (!VAR_4->phase2_priv) {
  FUNC_4(VAR_0,
      "EAP-TEAP: Phase 2 method not initialized");
  return ((void*)0);
 }

 VAR_6 = VAR_4->phase2_method->buildReq(VAR_3, VAR_4->phase2_priv, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 FUNC_3(VAR_1, "EAP-TEAP: Phase 2 EAP-Request", VAR_6);
 return FUNC_1(VAR_6);
}
