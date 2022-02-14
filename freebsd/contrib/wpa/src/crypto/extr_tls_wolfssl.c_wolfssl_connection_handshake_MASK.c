
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {int ssl; int input; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct tls_connection*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct wpabuf* FUNC_2 (struct tls_connection*,int ) ;
 struct wpabuf* FUNC_3 (struct tls_connection*,struct wpabuf const*,int) ;
 int FUNC_4 (int *,struct wpabuf const*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct wpabuf const*) ;

__attribute__((used)) static struct wpabuf *
FUNC_7(struct tls_connection *VAR_1,
        const struct wpabuf *VAR_2,
        struct wpabuf **VAR_3, int VAR_4)
{
 struct wpabuf *VAR_5;

 FUNC_4(&VAR_1->input, VAR_2);

 if (VAR_3)
  *VAR_3 = ((void*)0);

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_1(VAR_1->ssl)) {
  FUNC_5(VAR_0,
      "wolfSSL: Handshake finished - resumed=%d",
      FUNC_0(((void*)0), VAR_1));
  if (VAR_3 && VAR_2)
   *VAR_3 = FUNC_2(VAR_1,
          FUNC_6(VAR_2));
 }

 return VAR_5;
}
