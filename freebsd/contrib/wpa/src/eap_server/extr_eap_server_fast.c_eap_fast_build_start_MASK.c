
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct pac_tlv_hdr {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_fast_data {int fast_version; scalar_t__ srv_id_len; int srv_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct wpabuf*,int ,int ,scalar_t__) ;
 int FUNC_1 (struct eap_fast_data*,int ) ;
 struct wpabuf* FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_5(struct eap_sm *VAR_8,
         struct eap_fast_data *VAR_9, u8 VAR_10)
{
 struct wpabuf *VAR_11;

 VAR_11 = FUNC_2(VAR_3, VAR_2,
       1 + sizeof(struct pac_tlv_hdr) + VAR_9->srv_id_len,
       VAR_0, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(VAR_5, "EAP-FAST: Failed to allocate memory for"
      " request");
  FUNC_1(VAR_9, VAR_4);
  return ((void*)0);
 }

 FUNC_4(VAR_11, VAR_1 | VAR_9->fast_version);


 FUNC_0(VAR_11, VAR_6, VAR_9->srv_id, VAR_9->srv_id_len);

 FUNC_1(VAR_9, VAR_7);

 return VAR_11;
}
