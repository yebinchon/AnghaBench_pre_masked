
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int ssl; int context; int output; int input; } ;
typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (struct tls_connection*) ;
 struct tls_connection* FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,struct tls_connection*) ;
 int FUNC_10 (int ,char*) ;

struct tls_connection * FUNC_11(void *VAR_1)
{
 WOLFSSL_CTX *VAR_2 = VAR_1;
 struct tls_connection *VAR_3;

 FUNC_10(VAR_0, "SSL: connection init");

 VAR_3 = FUNC_1(sizeof(*VAR_3));
 if (!VAR_3)
  return ((void*)0);
 VAR_3->ssl = FUNC_8(VAR_2);
 if (!VAR_3->ssl) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 FUNC_5(VAR_3->ssl, &VAR_3->input);
 FUNC_6(VAR_3->ssl, &VAR_3->output);
 FUNC_9(VAR_3->ssl, 0, VAR_3);
 VAR_3->context = FUNC_2(VAR_2, 0);



 FUNC_3(VAR_3->ssl);
 FUNC_4(VAR_3->ssl);
 FUNC_7(VAR_3->ssl);

 return VAR_3;
}
