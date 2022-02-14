
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct wpabuf const wpabuf ;
struct tls_connection {int ssl; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,struct wpabuf const*) ;
 int FUNC_2 (int ,char*,...) ;
 struct wpabuf const* FUNC_3 (int) ;
 int FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*,int) ;
 int FUNC_8 (struct wpabuf const*) ;

struct wpabuf * FUNC_9(void *VAR_2,
           struct tls_connection *VAR_3,
           const struct wpabuf *VAR_4)
{
 int VAR_5;
 struct wpabuf *VAR_6;

 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_0, "SSL: decrypt");

 FUNC_1(&VAR_3->input, VAR_4);
 VAR_6 = FUNC_3((FUNC_5(VAR_4) + 500) * 3);
 if (!VAR_6)
  return ((void*)0);
 VAR_5 = FUNC_0(VAR_3->ssl, FUNC_6(VAR_6), FUNC_8(VAR_6));
 if (VAR_5 < 0) {
  FUNC_2(VAR_1, "Decryption failed - SSL_read");
  FUNC_4(VAR_6);
  return ((void*)0);
 }
 FUNC_7(VAR_6, VAR_5);

 FUNC_2(VAR_0, "SSL: decrypt: %ld bytes", FUNC_5(VAR_6));

 return VAR_6;
}
