
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct teap_tlv_hdr {int dummy; } ;
struct eap_teap_data {int srv_id_len; int teap_version; int server_outer_tlvs; int srv_id; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wpabuf* FUNC_0 (int ,int ,int,int ,int ) ;
 int FUNC_1 (struct wpabuf*,int ,int ,int) ;
 int FUNC_2 (struct eap_teap_data*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (struct wpabuf*,int ) ;
 int FUNC_7 (struct wpabuf*,size_t) ;
 int FUNC_8 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_9(struct eap_sm *VAR_9,
         struct eap_teap_data *VAR_10, u8 VAR_11)
{
 struct wpabuf *VAR_12;
 size_t VAR_13 = sizeof(struct teap_tlv_hdr) + VAR_10->srv_id_len;
 const u8 *VAR_14, *VAR_15;

 VAR_12 = FUNC_0(VAR_4, VAR_3,
       1 + 4 + VAR_13, VAR_0, VAR_11);
 if (!VAR_12) {
  FUNC_3(VAR_6,
      "EAP-TEAP: Failed to allocate memory for request");
  FUNC_2(VAR_10, VAR_5);
  return ((void*)0);
 }

 FUNC_8(VAR_12, VAR_2 | VAR_1 |
        VAR_10->teap_version);
 FUNC_7(VAR_12, VAR_13);

 VAR_14 = FUNC_6(VAR_12, 0);


 FUNC_1(VAR_12, VAR_8,
    VAR_10->srv_id, VAR_10->srv_id_len);

 VAR_15 = FUNC_6(VAR_12, 0);
 FUNC_5(VAR_10->server_outer_tlvs);
 VAR_10->server_outer_tlvs = FUNC_4(VAR_14, VAR_15 - VAR_14);
 if (!VAR_10->server_outer_tlvs) {
  FUNC_2(VAR_10, VAR_5);
  return ((void*)0);
 }

 FUNC_2(VAR_10, VAR_7);

 return VAR_12;
}
