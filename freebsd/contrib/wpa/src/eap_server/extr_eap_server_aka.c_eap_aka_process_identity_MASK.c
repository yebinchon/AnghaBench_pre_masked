
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {scalar_t__ identity_len; int * identity; } ;
struct eap_sim_attrs {scalar_t__ identity_len; int identity; scalar_t__ encr_data; scalar_t__ iv; scalar_t__ mac; } ;
struct eap_aka_data {int pending_id; void* notification; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_aka_data*,struct wpabuf*) ;
 int FUNC_1 (struct eap_sm*,struct eap_aka_data*) ;
 int FUNC_2 (struct eap_aka_data*,int ) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(struct eap_sm *VAR_4,
         struct eap_aka_data *VAR_5,
         struct wpabuf *VAR_6,
         struct eap_sim_attrs *VAR_7)
{
 u8 *VAR_8;

 FUNC_7(VAR_1, "EAP-AKA: Processing Identity");

 if (VAR_7->mac || VAR_7->iv || VAR_7->encr_data) {
  FUNC_7(VAR_2, "EAP-AKA: Unexpected attribute "
      "received in EAP-Response/AKA-Identity");
  VAR_5->notification = VAR_0;
  FUNC_2(VAR_5, VAR_3);
  return;
 }





 if (!VAR_7->identity || VAR_7->identity_len == 0) {
  FUNC_7(VAR_1, "EAP-AKA: Peer did not provide any "
      "identity");
  VAR_5->notification = VAR_0;
  FUNC_2(VAR_5, VAR_3);
  return;
 }

 VAR_8 = FUNC_5(VAR_7->identity_len);
 if (VAR_8 == ((void*)0)) {
  VAR_5->notification = VAR_0;
  FUNC_2(VAR_5, VAR_3);
  return;
 }
 FUNC_4(VAR_4->identity);
 VAR_4->identity = VAR_8;
 FUNC_6(VAR_4->identity, VAR_7->identity, VAR_7->identity_len);
 VAR_4->identity_len = VAR_7->identity_len;

 FUNC_1(VAR_4, VAR_5);
 if (FUNC_3(VAR_6) == VAR_5->pending_id) {
  VAR_5->pending_id = -1;
  FUNC_0(VAR_5, VAR_6);
 }
}
