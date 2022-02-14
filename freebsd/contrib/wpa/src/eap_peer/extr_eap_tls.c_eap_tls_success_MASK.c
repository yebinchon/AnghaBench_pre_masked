
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ tls_v13; scalar_t__ tls_out; } ;
struct eap_tls_data {int id_len; scalar_t__ session_id; TYPE_1__ ssl; scalar_t__ key_data; } ;
struct eap_sm {int dummy; } ;
struct eap_method_ret {int decision; int methodState; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct eap_sm*,TYPE_1__*,char const*,int const*,size_t,scalar_t__) ;
 scalar_t__ FUNC_1 (struct eap_sm*,TYPE_1__*,int const,int *) ;
 int FUNC_2 (struct eap_tls_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__,int ) ;
 int FUNC_5 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_10, struct eap_tls_data *VAR_11,
       struct eap_method_ret *VAR_12)
{
 const char *VAR_13;
 const u8 VAR_14[] = { VAR_4 };
 const u8 *VAR_15 = ((void*)0);
 size_t VAR_16 = 0;

 FUNC_6(VAR_7, "EAP-TLS: Done");

 if (VAR_11->ssl.tls_out) {
  FUNC_6(VAR_7, "EAP-TLS: Fragment(s) remaining");
  return;
 }

 if (VAR_11->ssl.tls_v13) {
  VAR_13 = "EXPORTER_EAP_TLS_Key_Material";
  VAR_15 = VAR_14;
  VAR_16 = 1;



  VAR_12->methodState = VAR_6;
  VAR_12->decision = VAR_0;
 } else {
  VAR_13 = "client EAP encryption";

  VAR_12->methodState = VAR_5;
  VAR_12->decision = VAR_1;
 }

 FUNC_2(VAR_11);
 VAR_11->key_data = FUNC_0(VAR_10, &VAR_11->ssl, VAR_13,
       VAR_15, VAR_16,
       VAR_3 +
       VAR_2);
 if (VAR_11->key_data) {
  FUNC_5(VAR_7, "EAP-TLS: Derived key",
    VAR_11->key_data, VAR_3);
  FUNC_5(VAR_7, "EAP-TLS: Derived EMSK",
    VAR_11->key_data + VAR_3,
    VAR_2);
 } else {
  FUNC_6(VAR_9, "EAP-TLS: Failed to derive key");
 }

 FUNC_3(VAR_11->session_id);
 VAR_11->session_id = FUNC_1(VAR_10, &VAR_11->ssl,
         VAR_4,
                                     &VAR_11->id_len);
 if (VAR_11->session_id) {
  FUNC_4(VAR_7, "EAP-TLS: Derived Session-Id",
       VAR_11->session_id, VAR_11->id_len);
 } else {
  FUNC_6(VAR_8, "EAP-TLS: Failed to derive Session-Id");
 }
}
