
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_data {int * ssl; } ;
typedef int SSL_CTX ;
typedef int DSA ;
typedef int DH ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_7 (int *,int *,int *,int *) ;
 int * FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static int FUNC_11(struct tls_data *VAR_3, const char *VAR_4)
{







 SSL_CTX *VAR_5 = VAR_3->ssl;
 DH *VAR_6;
 BIO *VAR_7;


 if (VAR_4 == ((void*)0))
  return 0;
 if (VAR_5 == ((void*)0))
  return -1;

 VAR_7 = FUNC_1(VAR_4, "r");
 if (VAR_7 == ((void*)0)) {
  FUNC_10(VAR_2, "TLS: Failed to open DH file '%s': %s",
      VAR_4, FUNC_5(FUNC_6(), ((void*)0)));
  return -1;
 }
 VAR_6 = FUNC_7(VAR_7, ((void*)0), ((void*)0), ((void*)0));
 FUNC_0(VAR_7);

 while (VAR_6 == ((void*)0)) {
  DSA *VAR_8;
  FUNC_10(VAR_0, "TLS: Failed to parse DH file '%s': %s -"
      " trying to parse as DSA params", VAR_4,
      FUNC_5(FUNC_6(), ((void*)0)));
  VAR_7 = FUNC_1(VAR_4, "r");
  if (VAR_7 == ((void*)0))
   break;
  VAR_8 = FUNC_8(VAR_7, ((void*)0), ((void*)0), ((void*)0));
  FUNC_0(VAR_7);
  if (!VAR_8) {
   FUNC_10(VAR_0, "TLS: Failed to parse DSA file "
       "'%s': %s", VAR_4,
       FUNC_5(FUNC_6(), ((void*)0)));
   break;
  }

  FUNC_10(VAR_0, "TLS: DH file in DSA param format");
  VAR_6 = FUNC_3(VAR_8);
  FUNC_4(VAR_8);
  if (VAR_6 == ((void*)0)) {
   FUNC_10(VAR_2, "TLS: Failed to convert DSA "
       "params into DH params");
   break;
  }
  break;
 }

 if (VAR_6 == ((void*)0)) {
  FUNC_10(VAR_2, "TLS: Failed to read/parse DH/DSA file "
      "'%s'", VAR_4);
  return -1;
 }

 if (FUNC_9(VAR_5, VAR_6) != 1) {
  FUNC_10(VAR_2, "TLS: Failed to set DH params from '%s': "
      "%s", VAR_4,
      FUNC_5(FUNC_6(), ((void*)0)));
  FUNC_2(VAR_6);
  return -1;
 }
 FUNC_2(VAR_6);
 return 0;

}
