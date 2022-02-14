
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {int ssl; } ;
typedef int WOLFSSL_SESSION ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf const* FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

const struct wpabuf *
FUNC_3(struct tls_connection *VAR_2)
{
 WOLFSSL_SESSION *VAR_3;

 FUNC_2(VAR_0, "wolfSSL: Get success data");

 VAR_3 = FUNC_1(VAR_2->ssl);
 if (!VAR_3)
  return ((void*)0);
 return FUNC_0(VAR_3, VAR_1);
}
