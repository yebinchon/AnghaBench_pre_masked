
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_connection {int ssl; } ;
typedef int WOLFSSL_CIPHER ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

int FUNC_4(void *VAR_0, struct tls_connection *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 WOLFSSL_CIPHER *VAR_4;
 const char *VAR_5;

 if (!VAR_1 || !VAR_1->ssl)
  return -1;

 VAR_4 = FUNC_3(VAR_1->ssl);
 if (!VAR_4)
  return -1;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return -1;

 if (FUNC_0(VAR_5, "SSL_RSA_WITH_RC4_128_SHA") == 0)
  FUNC_1(VAR_2, "RC4-SHA", VAR_3);
 else if (FUNC_0(VAR_5, "TLS_RSA_WITH_AES_128_CBC_SHA") == 0)
  FUNC_1(VAR_2, "AES128-SHA", VAR_3);
 else if (FUNC_0(VAR_5, "TLS_DHE_RSA_WITH_AES_128_CBC_SHA") == 0)
  FUNC_1(VAR_2, "DHE-RSA-AES128-SHA", VAR_3);
 else if (FUNC_0(VAR_5, "TLS_DH_anon_WITH_AES_128_CBC_SHA") == 0)
  FUNC_1(VAR_2, "ADH-AES128-SHA", VAR_3);
 else if (FUNC_0(VAR_5, "TLS_DHE_RSA_WITH_AES_256_CBC_SHA") == 0)
  FUNC_1(VAR_2, "DHE-RSA-AES256-SHA", VAR_3);
 else if (FUNC_0(VAR_5, "TLS_RSA_WITH_AES_256_CBC_SHA") == 0)
  FUNC_1(VAR_2, "AES256-SHA", VAR_3);
 else
  FUNC_1(VAR_2, VAR_5, VAR_3);

 return 0;
}
