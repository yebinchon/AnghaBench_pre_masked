
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct TYPE_2__ {struct wpabuf* tls_out; scalar_t__ tls_out_pos; } ;
struct eap_teap_data {TYPE_1__ ssl; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct eap_sm*,TYPE_1__*,struct wpabuf*) ;
 int FUNC_1 (int ,char*,struct wpabuf*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf**,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_2,
       struct eap_teap_data *VAR_3,
       struct wpabuf *VAR_4, int VAR_5)
{
 struct wpabuf *VAR_6;

 FUNC_1(VAR_0, "EAP-TEAP: Encrypting Phase 2 TLVs",
       VAR_4);
 VAR_6 = FUNC_0(VAR_2, &VAR_3->ssl, VAR_4);
 FUNC_3(VAR_4);

 if (!VAR_6)
  return -1;

 if (VAR_3->ssl.tls_out && VAR_5) {
  FUNC_2(VAR_0,
      "EAP-TEAP: Piggyback Phase 2 data (len=%d) with last Phase 1 Message (len=%d used=%d)",
      (int) FUNC_4(VAR_6),
      (int) FUNC_4(VAR_3->ssl.tls_out),
      (int) VAR_3->ssl.tls_out_pos);
  if (FUNC_6(&VAR_3->ssl.tls_out, FUNC_4(VAR_6)) < 0) {
   FUNC_2(VAR_1,
       "EAP-TEAP: Failed to resize output buffer");
   FUNC_3(VAR_6);
   return -1;
  }
  FUNC_5(VAR_3->ssl.tls_out, VAR_6);
  FUNC_3(VAR_6);
 } else {
  FUNC_3(VAR_3->ssl.tls_out);
  VAR_3->ssl.tls_out_pos = 0;
  VAR_3->ssl.tls_out = VAR_6;
 }

 return 0;
}
