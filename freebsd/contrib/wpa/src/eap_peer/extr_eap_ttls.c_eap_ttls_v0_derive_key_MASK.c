
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ttls_data {int id_len; scalar_t__ session_id; int ssl; scalar_t__ key_data; } ;
struct eap_sm {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int *,char*,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct eap_sm*,int *,int ,int *) ;
 int FUNC_2 (struct eap_ttls_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(struct eap_sm *VAR_6,
      struct eap_ttls_data *VAR_7)
{
 FUNC_2(VAR_7);
 VAR_7->key_data = FUNC_0(VAR_6, &VAR_7->ssl,
       "ttls keying material",
       ((void*)0), 0,
       VAR_1 +
       VAR_0);
 if (!VAR_7->key_data) {
  FUNC_6(VAR_5, "EAP-TTLS: Failed to derive key");
  return -1;
 }

 FUNC_5(VAR_3, "EAP-TTLS: Derived key",
   VAR_7->key_data, VAR_1);
 FUNC_5(VAR_3, "EAP-TTLS: Derived EMSK",
   VAR_7->key_data + VAR_1,
   VAR_0);

 FUNC_3(VAR_7->session_id);
 VAR_7->session_id = FUNC_1(VAR_6, &VAR_7->ssl,
         VAR_2,
                                                   &VAR_7->id_len);
 if (VAR_7->session_id) {
  FUNC_4(VAR_3, "EAP-TTLS: Derived Session-Id",
       VAR_7->session_id, VAR_7->id_len);
 } else {
  FUNC_6(VAR_4, "EAP-TTLS: Failed to derive Session-Id");
 }

 return 0;
}
