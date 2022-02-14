
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {int ssl; } ;
typedef int SSL_SESSION ;


 struct wpabuf const* FUNC_0 (int *,scalar_t__) ;
 int * FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

const struct wpabuf *
FUNC_2(struct tls_connection *VAR_1)
{
 SSL_SESSION *VAR_2;

 if (VAR_0 < 0 ||
     !(VAR_2 = FUNC_1(VAR_1->ssl)))
  return ((void*)0);
 return FUNC_0(VAR_2, VAR_0);
}
