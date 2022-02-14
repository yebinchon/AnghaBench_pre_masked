
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int dummy; } ;
struct eap_eke_data {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sm*,struct eap_eke_data*,struct wpabuf*,int const*,int) ;
 int FUNC_1 (struct eap_sm*,struct eap_eke_data*,struct wpabuf*,int const*,int) ;
 int FUNC_2 (struct eap_sm*,struct eap_eke_data*,struct wpabuf*,int const*,int) ;
 int FUNC_3 (struct eap_sm*,struct eap_eke_data*,struct wpabuf*,int const*,int) ;
 int* FUNC_4 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_5 (int ,char*,int const*,int) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_3, void *VAR_4,
        struct wpabuf *VAR_5)
{
 struct eap_eke_data *VAR_6 = VAR_4;
 u8 VAR_7;
 size_t VAR_8;
 const u8 *VAR_9, *VAR_10;

 VAR_9 = FUNC_4(VAR_1, VAR_0, VAR_5, &VAR_8);
 if (VAR_9 == ((void*)0) || VAR_8 < 1)
  return;

 VAR_7 = *VAR_9;
 VAR_10 = VAR_9 + VAR_8;
 VAR_9++;

 FUNC_5(VAR_2, "EAP-EKE: Received payload", VAR_9, VAR_10 - VAR_9);

 switch (VAR_7) {
 case 128:
  FUNC_3(VAR_3, VAR_6, VAR_5, VAR_9, VAR_10 - VAR_9);
  break;
 case 131:
  FUNC_0(VAR_3, VAR_6, VAR_5, VAR_9, VAR_10 - VAR_9);
  break;
 case 130:
  FUNC_1(VAR_3, VAR_6, VAR_5, VAR_9, VAR_10 - VAR_9);
  break;
 case 129:
  FUNC_2(VAR_3, VAR_6, VAR_5, VAR_9, VAR_10 - VAR_9);
  break;
 }
}
