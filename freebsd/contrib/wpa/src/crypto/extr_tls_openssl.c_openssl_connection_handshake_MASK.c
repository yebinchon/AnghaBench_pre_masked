
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {scalar_t__ invalid_hb_used; int ssl; scalar_t__ server; int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 struct wpabuf* FUNC_2 (struct tls_connection*,int ) ;
 struct wpabuf* FUNC_3 (struct tls_connection*,struct wpabuf const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (int ,struct tls_connection*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf const*) ;

__attribute__((used)) static struct wpabuf *
FUNC_10(struct tls_connection *VAR_2,
        const struct wpabuf *VAR_3,
        struct wpabuf **VAR_4)
{
 struct wpabuf *VAR_5;

 if (VAR_4)
  *VAR_4 = ((void*)0);

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 if (VAR_2->invalid_hb_used) {
  FUNC_7(VAR_1, "TLS: Heartbeat attack detected - do not send response");
  FUNC_8(VAR_5);
  return ((void*)0);
 }

 if (FUNC_1(VAR_2->ssl)) {
  FUNC_7(VAR_0,
      "OpenSSL: Handshake finished - resumed=%d",
      FUNC_6(VAR_2->ssl_ctx, VAR_2));
  if (VAR_2->server) {
   char *VAR_6;
   size_t VAR_7 = 2000;

   VAR_6 = FUNC_5(VAR_7);
   if (VAR_6) {
    if (FUNC_0(VAR_2->ssl, VAR_6,
          VAR_7)) {
     VAR_6[VAR_7 - 1] = '\0';
     FUNC_7(VAR_0,
         "OpenSSL: Shared ciphers: %s",
         VAR_6);
    }
    FUNC_4(VAR_6);
   }
  }
  if (VAR_4 && VAR_3)
   *VAR_4 = FUNC_2(VAR_2,
          FUNC_9(VAR_3));
 }

 if (VAR_2->invalid_hb_used) {
  FUNC_7(VAR_1, "TLS: Heartbeat attack detected - do not send response");
  if (VAR_4) {
   FUNC_8(*VAR_4);
   *VAR_4 = ((void*)0);
  }
  FUNC_8(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
