
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_1__* user; } ;
struct eap_pax_hdr {int op_code; } ;
struct eap_pax_data {int state; } ;
struct TYPE_2__ {int * password; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_1 (struct eap_sm*,struct eap_pax_data*,struct wpabuf*) ;
 int FUNC_2 (struct eap_sm*,struct eap_pax_data*,struct wpabuf*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_4, void *VAR_5,
       struct wpabuf *VAR_6)
{
 struct eap_pax_data *VAR_7 = VAR_5;
 struct eap_pax_hdr *VAR_8;
 const u8 *VAR_9;
 size_t VAR_10;

 if (VAR_4->user == ((void*)0) || VAR_4->user->password == ((void*)0)) {
  FUNC_3(VAR_3, "EAP-PAX: Plaintext password not "
      "configured");
  VAR_7->state = VAR_2;
  return;
 }

 VAR_9 = FUNC_0(VAR_1, VAR_0, VAR_6, &VAR_10);
 if (VAR_9 == ((void*)0) || VAR_10 < sizeof(*VAR_8))
  return;

 VAR_8 = (struct eap_pax_hdr *) VAR_9;

 switch (VAR_8->op_code) {
 case 128:
  FUNC_2(VAR_4, VAR_7, VAR_6);
  break;
 case 129:
  FUNC_1(VAR_4, VAR_7, VAR_6);
  break;
 }
}
