
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ssl_data {int * tls_in; int tmpbuf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct eap_ssl_data *VAR_0)
{
 if (VAR_0->tls_in != &VAR_0->tmpbuf)
  FUNC_0(VAR_0->tls_in);
 VAR_0->tls_in = ((void*)0);
}
