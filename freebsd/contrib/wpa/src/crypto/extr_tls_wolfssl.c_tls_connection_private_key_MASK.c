
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int ssl; } ;
typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int * VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int ,int const*,size_t,int ) ;
 scalar_t__ FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_5,
          struct tls_connection *VAR_6,
          const char *VAR_7,
          const char *VAR_8,
          const u8 *VAR_9,
          size_t VAR_10)
{
 WOLFSSL_CTX *VAR_11 = VAR_5;
 char *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 if (!VAR_7 && !VAR_9)
  return 0;

 if (VAR_8) {
  VAR_12 = FUNC_1(VAR_8);
  if (!VAR_12)
   return -1;
 }

 FUNC_2(VAR_11, VAR_4);
 FUNC_3(VAR_11, VAR_12);

 if (VAR_9) {
  if (FUNC_4(VAR_6->ssl,
        VAR_9, VAR_10,
        VAR_2) < 0) {
   FUNC_6(VAR_1,
       "SSL: use private DER blob failed");
  } else {
   FUNC_6(VAR_0, "SSL: use private key blob OK");
   VAR_13 = 1;
  }
 }

 if (!VAR_13 && VAR_7) {
  if (FUNC_5(VAR_6->ssl, VAR_7,
      VAR_3) < 0) {
   FUNC_6(VAR_1,
       "SSL: use private key PEM file failed");
   if (FUNC_5(VAR_6->ssl, VAR_7,
       VAR_2) < 0)
   {
    FUNC_6(VAR_1,
        "SSL: use private key DER file failed");
   } else {
    VAR_13 = 1;
   }
  } else {
   VAR_13 = 1;
  }

  if (VAR_13)
   FUNC_6(VAR_0, "SSL: use private key file OK");
 }

 FUNC_2(VAR_11, ((void*)0));
 FUNC_0(VAR_12);

 if (!VAR_13)
  return -1;

 return 0;
}
