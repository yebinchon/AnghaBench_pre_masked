
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int ssl_ctx; int ssl; } ;
typedef int SSL_SESSION ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct tls_connection *VAR_1)
{
 SSL_SESSION *VAR_2;

 VAR_2 = FUNC_1(VAR_1->ssl);
 if (!VAR_2)
  return;

 if (FUNC_0(VAR_1->ssl_ctx, VAR_2) != 1)
  FUNC_2(VAR_0,
      "OpenSSL: Session was not cached");
 else
  FUNC_2(VAR_0,
      "OpenSSL: Removed cached session to disable session resumption");
}
