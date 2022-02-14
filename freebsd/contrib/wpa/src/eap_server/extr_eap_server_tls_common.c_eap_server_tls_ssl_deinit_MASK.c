
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ssl_data {int * tls_out; int conn; } ;
struct eap_sm {int ssl_ctx; } ;


 int FUNC_0 (struct eap_ssl_data*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct eap_sm *VAR_0, struct eap_ssl_data *VAR_1)
{
 FUNC_1(VAR_0->ssl_ctx, VAR_1->conn);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->tls_out);
 VAR_1->tls_out = ((void*)0);
}
