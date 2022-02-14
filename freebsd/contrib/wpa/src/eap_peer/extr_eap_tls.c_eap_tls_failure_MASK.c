
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_tls_data {int eap_type; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_2(struct eap_sm *VAR_3,
           struct eap_tls_data *VAR_4,
           struct eap_method_ret *VAR_5, int VAR_6,
           struct wpabuf *VAR_7, u8 VAR_8)
{
 FUNC_1(VAR_2, "EAP-TLS: TLS processing failed");

 VAR_5->methodState = VAR_1;
 VAR_5->decision = VAR_0;

 if (VAR_7) {




  return VAR_7;
 }

 return FUNC_0(VAR_8, VAR_4->eap_type, 0);
}
