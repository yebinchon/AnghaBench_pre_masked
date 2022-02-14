
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int ssl; } ;
typedef int WOLFSSL_SESSION ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(void *VAR_1, struct tls_connection *VAR_2)
{
 WOLFSSL_SESSION *VAR_3;

 if (!VAR_2)
  return -1;

 FUNC_5(VAR_0, "SSL: connection shutdown");


 FUNC_2(VAR_2->ssl, 1);
 FUNC_4(VAR_2->ssl);

 VAR_3 = FUNC_1(VAR_2->ssl);
 if (FUNC_0(VAR_2->ssl) != 1)
  return -1;
 FUNC_3(VAR_2->ssl, VAR_3);

 return 0;
}
