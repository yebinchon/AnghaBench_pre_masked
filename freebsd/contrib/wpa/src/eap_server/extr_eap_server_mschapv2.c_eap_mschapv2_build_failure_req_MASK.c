
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_mschapv2_hdr {int ms_length; int mschapv2_id; int op_code; } ;
struct eap_mschapv2_data {int resp_mschapv2_id; int state; } ;


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
 int FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ,char*) ;
 struct eap_mschapv2_hdr* FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,char*,int) ;

__attribute__((used)) static struct wpabuf * FUNC_7(
 struct eap_sm *VAR_7, struct eap_mschapv2_data *VAR_8, u8 VAR_9)
{
 struct wpabuf *VAR_10;
 struct eap_mschapv2_hdr *VAR_11;
 char *VAR_12 = "E=691 R=0 C=00000000000000000000000000000000 V=3 "
  "M=FAILED";
 size_t VAR_13;

 VAR_13 = sizeof(*VAR_11) + FUNC_2(VAR_12);
 VAR_10 = FUNC_1(VAR_2, VAR_1, VAR_13,
       VAR_0, VAR_9);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_5, "EAP-MSCHAPV2: Failed to allocate memory"
      " for request");
  VAR_8->state = VAR_3;
  return ((void*)0);
 }

 VAR_11 = FUNC_5(VAR_10, sizeof(*VAR_11));
 VAR_11->op_code = VAR_4;
 VAR_11->mschapv2_id = VAR_8->resp_mschapv2_id;
 FUNC_0(VAR_11->ms_length, VAR_13);

 FUNC_6(VAR_10, VAR_12, FUNC_2(VAR_12));

 FUNC_3(VAR_6, "EAP-MSCHAPV2: Failure Request Message",
     (u8 *) VAR_12, FUNC_2(VAR_12));

 return VAR_10;
}
