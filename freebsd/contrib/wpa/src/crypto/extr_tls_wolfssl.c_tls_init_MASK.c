
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int dummy; } ;
struct tls_config {char* openssl_ciphers; int tls_session_lifetime; } ;
typedef void WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tls_context*) ;
 int VAR_3 ;
 struct tls_context* FUNC_1 (struct tls_config const*) ;
 int FUNC_2 (void*) ;
 struct tls_context* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,char const*) ;
 int FUNC_6 (void*,int ,struct tls_context*) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (void*,int ) ;
 int FUNC_14 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int ,char*,char const*) ;

void * FUNC_16(const struct tls_config *VAR_8)
{
 WOLFSSL_CTX *VAR_9;
 struct tls_context *VAR_10;
 const char *VAR_11;





 VAR_10 = FUNC_1(VAR_8);
 if (!VAR_10)
  return ((void*)0);

 if (VAR_5 == 0) {
  VAR_4 = VAR_10;

  if (FUNC_11() < 0)
   return ((void*)0);

 }

 VAR_5++;


 VAR_9 = FUNC_3(FUNC_14());
 if (!VAR_9) {
  VAR_5--;
  if (VAR_10 != VAR_4)
   FUNC_0(VAR_10);
  if (VAR_5 == 0) {
   FUNC_0(VAR_4);
   VAR_4 = ((void*)0);
  }
 }
 FUNC_12(VAR_9, VAR_6);
 FUNC_13(VAR_9, VAR_7);
 FUNC_6(VAR_9, 0, VAR_10);

 if (VAR_8->tls_session_lifetime > 0) {
  FUNC_7(VAR_9, 1);
  FUNC_8(VAR_9,
         VAR_2);
  FUNC_9(VAR_9, VAR_8->tls_session_lifetime);
  FUNC_4(VAR_9, VAR_3);
 } else {
  FUNC_8(VAR_9,
         VAR_1);
 }

 if (VAR_8 && VAR_8->openssl_ciphers)
  VAR_11 = VAR_8->openssl_ciphers;
 else
  VAR_11 = "ALL";
 if (FUNC_5(VAR_9, VAR_11) != 1) {
  FUNC_15(VAR_0,
      "wolfSSL: Failed to set cipher string '%s'",
      VAR_11);
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
