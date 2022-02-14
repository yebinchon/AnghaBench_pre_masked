
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int ssl; int mschapv2_auth_response; int mschapv2_ident; scalar_t__ mschapv2_resp_ok; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wpabuf* FUNC_1 (struct eap_sm*,int *,struct wpabuf*) ;
 int * FUNC_2 (int *,int ,int ,int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,char*,struct wpabuf*) ;
 int FUNC_9 (char*,int,int ,int) ;
 int FUNC_10 (struct wpabuf*,int *,int) ;

__attribute__((used)) static struct wpabuf * FUNC_11(
 struct eap_sm *VAR_4, struct eap_ttls_data *VAR_5)
{
 struct wpabuf *VAR_6, VAR_7;
 u8 *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_9 = VAR_8 = FUNC_4(100);
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 VAR_10 = VAR_8 + 100;

 if (VAR_5->mschapv2_resp_ok) {
  VAR_9 = FUNC_2(VAR_9, VAR_1,
           VAR_3, 1, 43);
  *VAR_9++ = VAR_5->mschapv2_ident;
  VAR_11 = FUNC_6((char *) VAR_9, VAR_10 - VAR_9, "S=");
  if (!FUNC_7(VAR_10 - VAR_9, VAR_11))
   VAR_9 += VAR_11;
  VAR_9 += FUNC_9(
   (char *) VAR_9, VAR_10 - VAR_9, VAR_5->mschapv2_auth_response,
   sizeof(VAR_5->mschapv2_auth_response));
 } else {
  VAR_9 = FUNC_2(VAR_9, VAR_2,
           VAR_3, 1, 6);
  FUNC_5(VAR_9, "Failed", 6);
  VAR_9 += 6;
  FUNC_0(VAR_8, VAR_9);
 }

 FUNC_10(&VAR_7, VAR_8, VAR_9 - VAR_8);
 FUNC_8(VAR_0, "EAP-TTLS/MSCHAPV2: Encrypting Phase 2 "
       "data", &VAR_7);

 VAR_6 = FUNC_1(VAR_4, &VAR_5->ssl, &VAR_7);
 FUNC_3(VAR_8);

 return VAR_6;
}
