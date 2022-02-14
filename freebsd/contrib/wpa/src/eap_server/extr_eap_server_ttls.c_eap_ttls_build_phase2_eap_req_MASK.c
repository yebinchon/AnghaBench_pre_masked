
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ttls_data {int ssl; int phase2_priv; TYPE_1__* phase2_method; } ;
struct eap_sm {int dummy; } ;
struct TYPE_2__ {struct wpabuf* (* buildReq ) (struct eap_sm*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,int *,struct wpabuf*) ;
 struct wpabuf* FUNC_1 (struct wpabuf*,int ,int) ;
 struct wpabuf* FUNC_2 (struct eap_sm*,int ,int ) ;
 int FUNC_3 (int ,char*,struct wpabuf*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_6(
 struct eap_sm *VAR_2, struct eap_ttls_data *VAR_3, u8 VAR_4)
{
 struct wpabuf *VAR_5, *VAR_6;


 VAR_5 = VAR_3->phase2_method->buildReq(VAR_2, VAR_3->phase2_priv, VAR_4);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 FUNC_3(VAR_0,
       "EAP-TTLS/EAP: Encapsulate Phase 2 data", VAR_5);

 VAR_5 = FUNC_1(VAR_5, VAR_1, 1);
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_0, "EAP-TTLS/EAP: Failed to encapsulate "
      "packet");
  return ((void*)0);
 }

 FUNC_3(VAR_0, "EAP-TTLS/EAP: Encrypt encapsulated "
       "Phase 2 data", VAR_5);

 VAR_6 = FUNC_0(VAR_2, &VAR_3->ssl, VAR_5);
 FUNC_5(VAR_5);

 return VAR_6;
}
