
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(SSL_CTX *VAR_1)
{
 SSL *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;

 FUNC_3(VAR_0,
     "OpenSSL: Enabled cipher suites in priority order");
 for (VAR_3 = 0; ; VAR_3++) {
  const char *VAR_4;

  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (!VAR_4)
   break;
  FUNC_3(VAR_0, "Cipher %d: %s", VAR_3, VAR_4);
 }

 FUNC_0(VAR_2);
}
