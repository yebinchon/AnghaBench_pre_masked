
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_tls_data {int ssl; struct eap_tls_data* session_id; } ;
struct eap_sm {int dummy; } ;


 scalar_t__ FUNC_0 (struct eap_sm*,int *) ;
 int FUNC_1 (struct eap_tls_data*) ;
 int FUNC_2 (struct eap_tls_data*) ;

__attribute__((used)) static void * FUNC_3(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_tls_data *VAR_2 = VAR_1;
 FUNC_1(VAR_2);
 FUNC_2(VAR_2->session_id);
 VAR_2->session_id = ((void*)0);
 if (FUNC_0(VAR_0, &VAR_2->ssl)) {
  FUNC_2(VAR_2);
  return ((void*)0);
 }
 return VAR_1;
}
