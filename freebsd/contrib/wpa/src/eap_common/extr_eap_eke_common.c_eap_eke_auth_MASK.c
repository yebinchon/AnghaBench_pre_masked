
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_eke_session {int auth_len; int ka; int prf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int const*,int ,int ,int ,int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,struct wpabuf const*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;

int FUNC_7(struct eap_eke_session *VAR_2, const char *VAR_3,
   const struct wpabuf *VAR_4, u8 *VAR_5)
{
 FUNC_4(VAR_0, "EAP-EKE: Auth(%s)", VAR_3);
 FUNC_3(VAR_0, "EAP-EKE: Ka for Auth",
   VAR_2->ka, VAR_2->auth_len);
 FUNC_2(VAR_1, "EAP-EKE: Messages for Auth", VAR_4);
 return FUNC_0(VAR_2->prf, VAR_2->ka, VAR_2->auth_len,
      (const u8 *) VAR_3, FUNC_1(VAR_3),
      FUNC_5(VAR_4), FUNC_6(VAR_4), VAR_5);
}
