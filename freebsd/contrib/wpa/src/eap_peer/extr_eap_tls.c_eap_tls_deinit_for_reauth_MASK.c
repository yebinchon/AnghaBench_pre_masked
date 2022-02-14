
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_tls_data {int * pending_resp; } ;
struct eap_sm {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct eap_sm *VAR_0, void *VAR_1)
{
 struct eap_tls_data *VAR_2 = VAR_1;

 FUNC_0(VAR_2->pending_resp);
 VAR_2->pending_resp = ((void*)0);
}
