
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_hdr {int ms_length; int mschapv2_id; int op_code; } ;
struct eap_mschapv2_data {int auth_response; int resp_mschapv2_id; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,size_t) ;
 struct wpabuf* FUNC_1 (int ,int ,size_t,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int *,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct eap_mschapv2_hdr*,int,int ,int) ;
 struct eap_mschapv2_hdr* FUNC_6 (struct wpabuf*,int) ;
 int FUNC_7 (struct wpabuf*,char*,int) ;
 int FUNC_8 (struct wpabuf*,char) ;

__attribute__((used)) static struct wpabuf * FUNC_9(
 struct eap_sm *VAR_7, struct eap_mschapv2_data *VAR_8, u8 VAR_9)
{
 struct wpabuf *VAR_10;
 struct eap_mschapv2_hdr *VAR_11;
 u8 *VAR_12;
 char *VAR_13 = "OK";
 size_t VAR_14;

 VAR_14 = sizeof(*VAR_11) + 2 + 2 * sizeof(VAR_8->auth_response) + 1 + 2 +
  FUNC_2(VAR_13);
 VAR_10 = FUNC_1(VAR_2, VAR_1, VAR_14,
       VAR_0, VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_5, "EAP-MSCHAPV2: Failed to allocate memory"
      " for request");
  VAR_8->state = VAR_3;
  return ((void*)0);
 }

 VAR_11 = FUNC_6(VAR_10, sizeof(*VAR_11));
 VAR_11->op_code = VAR_4;
 VAR_11->mschapv2_id = VAR_8->resp_mschapv2_id;
 FUNC_0(VAR_11->ms_length, VAR_14);
 VAR_12 = (u8 *) (VAR_11 + 1);

 FUNC_8(VAR_10, 'S');
 FUNC_8(VAR_10, '=');
 FUNC_5(
  FUNC_6(VAR_10, sizeof(VAR_8->auth_response) * 2),
  sizeof(VAR_8->auth_response) * 2 + 1,
  VAR_8->auth_response, sizeof(VAR_8->auth_response));
 FUNC_8(VAR_10, ' ');
 FUNC_8(VAR_10, 'M');
 FUNC_8(VAR_10, '=');
 FUNC_7(VAR_10, VAR_13, FUNC_2(VAR_13));

 FUNC_3(VAR_6, "EAP-MSCHAPV2: Success Request Message",
     VAR_12, VAR_14 - sizeof(*VAR_11));

 return VAR_10;
}
