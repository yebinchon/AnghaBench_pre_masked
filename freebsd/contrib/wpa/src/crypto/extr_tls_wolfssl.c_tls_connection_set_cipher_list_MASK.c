
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; } ;
typedef int buf ;


 int VAR_0 ;



 int VAR_1 ;



 int FUNC_0 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;

int FUNC_4(void *VAR_2, struct tls_connection *VAR_3,
       u8 *VAR_4)
{
 char VAR_5[128], *VAR_6, *VAR_7;
 u8 *VAR_8;
 int VAR_9;

 if (!VAR_3 || !VAR_3->ssl || !VAR_4)
  return -1;

 VAR_5[0] = '\0';
 VAR_6 = VAR_5;
 VAR_7 = VAR_6 + sizeof(VAR_5);

 VAR_8 = VAR_4;
 while (*VAR_8 != VAR_1) {
  const char *VAR_10;

  switch (*VAR_8) {
  case 130:
   VAR_10 = "RC4-SHA";
   break;
  case 133:
   VAR_10 = "AES128-SHA";
   break;
  case 129:
   VAR_10 = "DHE-RSA-AES128-SHA";
   break;
  case 131:
   VAR_10 = "ADH-AES128-SHA";
   break;
  case 128:
   VAR_10 = "DHE-RSA-AES256-SHA";
   break;
  case 132:
   VAR_10 = "AES256-SHA";
   break;
  default:
   FUNC_3(VAR_0,
       "TLS: Unsupported cipher selection: %d", *VAR_8);
   return -1;
  }
  VAR_9 = FUNC_0(VAR_6, VAR_7 - VAR_6, ":%s", VAR_10);
  if (FUNC_1(VAR_7 - VAR_6, VAR_9))
   break;
  VAR_6 += VAR_9;

  VAR_8++;
 }

 FUNC_3(VAR_0, "wolfSSL: cipher suites: %s", VAR_5 + 1);

 if (FUNC_2(VAR_3->ssl, VAR_5 + 1) != 1) {
  FUNC_3(VAR_0, "Cipher suite configuration failed");
  return -1;
 }

 return 0;
}
