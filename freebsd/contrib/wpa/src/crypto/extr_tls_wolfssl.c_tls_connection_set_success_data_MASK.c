
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct tls_connection {int success_data; int ssl; } ;
typedef int WOLFSSL_SESSION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wpabuf* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,struct wpabuf*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wpabuf*) ;

void FUNC_5(struct tls_connection *VAR_3,
         struct wpabuf *VAR_4)
{
 WOLFSSL_SESSION *VAR_5;
 struct wpabuf *VAR_6;

 FUNC_3(VAR_0, "wolfSSL: Set success data");

 VAR_5 = FUNC_2(VAR_3->ssl);
 if (!VAR_5) {
  FUNC_3(VAR_0,
      "wolfSSL: No session found for success data");
  goto fail;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (VAR_6) {
  FUNC_3(VAR_0, "wolfSSL: Replacing old success data %p",
      VAR_6);
  FUNC_4(VAR_6);
 }
 if (FUNC_1(VAR_5, VAR_2, VAR_4) != 1)
  goto fail;

 FUNC_3(VAR_0, "wolfSSL: Stored success data %p", VAR_4);
 VAR_3->success_data = 1;
 return;

fail:
 FUNC_3(VAR_1, "wolfSSL: Failed to store success data");
 FUNC_4(VAR_4);
}
