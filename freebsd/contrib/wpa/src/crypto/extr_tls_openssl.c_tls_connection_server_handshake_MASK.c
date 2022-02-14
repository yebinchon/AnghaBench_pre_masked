
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {int server; } ;


 struct wpabuf* FUNC_0 (struct tls_connection*,struct wpabuf const*,struct wpabuf**) ;

struct wpabuf * FUNC_1(void *VAR_0,
      struct tls_connection *VAR_1,
      const struct wpabuf *VAR_2,
      struct wpabuf **VAR_3)
{
 VAR_1->server = 1;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
