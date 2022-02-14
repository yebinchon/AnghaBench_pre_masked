
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_tls_data {int ssl; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (struct eap_sm*,int *) ;
 int FUNC_1 (struct eap_tls_data*) ;

__attribute__((used)) static void FUNC_2(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_tls_data *VAR_2 = VAR_1;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_0, &VAR_2->ssl);
 FUNC_1(VAR_2);
}
