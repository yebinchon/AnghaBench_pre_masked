
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct teap_tlv_hdr {int dummy; } ;
struct eap_teap_data {int phase2_success; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct eap_sm*,size_t*) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 int FUNC_2 (struct wpabuf*,int ,size_t) ;
 struct wpabuf* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int *,size_t) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*) ;
 struct wpabuf* FUNC_7 (int) ;
 int FUNC_8 (struct wpabuf*,int const*,size_t) ;
 int FUNC_9 (struct wpabuf*,size_t) ;

__attribute__((used)) static struct wpabuf * FUNC_10(
 struct eap_sm *VAR_3, struct eap_teap_data *VAR_4,
 u8 *VAR_5, size_t VAR_6)
{
 const u8 *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 struct wpabuf *VAR_12;

 FUNC_4(VAR_0, "EAP-TEAP: Basic-Password-Auth-Req prompt",
     VAR_5, VAR_6);


 VAR_7 = FUNC_0(VAR_3, &VAR_9);
 VAR_8 = FUNC_1(VAR_3, &VAR_10);
 if (!VAR_7 || !VAR_8 ||
     VAR_9 > 255 || VAR_10 > 255) {
  FUNC_6(VAR_0,
      "EAP-TEAP: No username/password suitable for Basic-Password-Auth");
  return FUNC_3(0, VAR_1);
 }

 VAR_11 = 1 + VAR_9 + 1 + VAR_10;
 VAR_12 = FUNC_7(sizeof(struct teap_tlv_hdr) + VAR_11);
 if (!VAR_12)
  return ((void*)0);
 FUNC_2(VAR_12, VAR_2, VAR_11);
 FUNC_9(VAR_12, VAR_9);
 FUNC_8(VAR_12, VAR_7, VAR_9);
 FUNC_9(VAR_12, VAR_10);
 FUNC_8(VAR_12, VAR_8, VAR_10);
 FUNC_5(VAR_0, "EAP-TEAP: Basic-Password-Auth-Resp",
       VAR_12);



 VAR_4->phase2_success = 1;

 return VAR_12;
}
