
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int ttls_version; int ssl; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int *,int ,int ,int ,struct wpabuf*,struct wpabuf**) ;
 int FUNC_1 (int ,char*,struct wpabuf*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_4(struct eap_sm *VAR_3,
         struct eap_ttls_data *VAR_4,
         struct wpabuf *VAR_5, u8 VAR_6,
         struct wpabuf **VAR_7)
{
 if (VAR_5 == ((void*)0))
  return 0;

 FUNC_1(VAR_1, "EAP-TTLS: Encrypting Phase 2 data",
       VAR_5);
 if (FUNC_0(VAR_3, &VAR_4->ssl, VAR_0,
     VAR_4->ttls_version, VAR_6,
     VAR_5, VAR_7)) {
  FUNC_2(VAR_2, "EAP-TTLS: Failed to encrypt a Phase 2 "
      "frame");
  FUNC_3(VAR_5);
  return -1;
 }
 FUNC_3(VAR_5);

 return 0;
}
