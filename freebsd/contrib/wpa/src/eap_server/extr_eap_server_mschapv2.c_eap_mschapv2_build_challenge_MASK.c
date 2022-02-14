
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int server_id_len; int server_id; } ;
struct eap_mschapv2_hdr {int ms_length; int mschapv2_id; int op_code; } ;
struct eap_mschapv2_data {int auth_challenge; int auth_challenge_from_tls; void* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,size_t) ;
 struct wpabuf* FUNC_1 (int ,int ,size_t,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int ,int) ;
 int FUNC_4 (int ,char*) ;
 struct eap_mschapv2_hdr* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,int ,int) ;
 int FUNC_7 (struct wpabuf*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_8(
 struct eap_sm *VAR_8, struct eap_mschapv2_data *VAR_9, u8 VAR_10)
{
 struct wpabuf *VAR_11;
 struct eap_mschapv2_hdr *VAR_12;
 size_t VAR_13;

 if (!VAR_9->auth_challenge_from_tls &&
     FUNC_2(VAR_9->auth_challenge, VAR_0)) {
  FUNC_4(VAR_6, "EAP-MSCHAPV2: Failed to get random "
      "data");
  VAR_9->state = VAR_4;
  return ((void*)0);
 }

 VAR_13 = sizeof(*VAR_12) + 1 + VAR_0 + VAR_8->server_id_len;
 VAR_11 = FUNC_1(VAR_3, VAR_2, VAR_13,
       VAR_1, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_6, "EAP-MSCHAPV2: Failed to allocate memory"
      " for request");
  VAR_9->state = VAR_4;
  return ((void*)0);
 }

 VAR_12 = FUNC_5(VAR_11, sizeof(*VAR_12));
 VAR_12->op_code = VAR_5;
 VAR_12->mschapv2_id = VAR_10;
 FUNC_0(VAR_12->ms_length, VAR_13);

 FUNC_7(VAR_11, VAR_0);
 if (!VAR_9->auth_challenge_from_tls)
  FUNC_6(VAR_11, VAR_9->auth_challenge, VAR_0);
 else
  FUNC_5(VAR_11, VAR_0);
 FUNC_3(VAR_7, "EAP-MSCHAPV2: Challenge",
      VAR_9->auth_challenge, VAR_0);
 FUNC_6(VAR_11, VAR_8->server_id, VAR_8->server_id_len);

 return VAR_11;
}
