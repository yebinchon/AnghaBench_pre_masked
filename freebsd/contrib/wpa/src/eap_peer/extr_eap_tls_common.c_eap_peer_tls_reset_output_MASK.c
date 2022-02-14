
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ssl_data {int * tls_out; scalar_t__ tls_out_pos; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct eap_ssl_data *VAR_0)
{
 VAR_0->tls_out_pos = 0;
 FUNC_0(VAR_0->tls_out);
 VAR_0->tls_out = ((void*)0);
}
