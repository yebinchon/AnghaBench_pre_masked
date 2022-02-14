
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char const*,int ) ;
 int FUNC_8 (int *,char const*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (char const*,int,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 () ;
 int FUNC_19 (int,int *) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_5, int VAR_6, const char *VAR_7,
    const char *VAR_8, int VAR_9)
{
 SSL_CTX *VAR_10;
 SSL *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_12(VAR_9);
 FUNC_14("[TLS sandbox] (server) ");




 VAR_12 = VAR_6;
 VAR_13 = VAR_6 + 1;

 FUNC_4();
 FUNC_3();

 VAR_10 = FUNC_0(FUNC_9());
 if (VAR_10 == ((void*)0))
  FUNC_13(VAR_1, "SSL_CTX_new() failed.");

 FUNC_1(VAR_10, VAR_3 | VAR_4);

 VAR_11 = FUNC_5(VAR_10);
 if (VAR_11 == ((void*)0))
  FUNC_13(VAR_1, "SSL_new() failed.");

 if (FUNC_7(VAR_11, VAR_7, VAR_2) != 1) {
  FUNC_18();
  FUNC_13(VAR_0,
      "SSL_use_RSAPrivateKey_file(%s) failed.", VAR_7);
 }

 if (FUNC_8(VAR_11, VAR_8, VAR_2) != 1) {
  FUNC_18();
  FUNC_13(VAR_0, "SSL_use_certificate_file(%s) failed.",
      VAR_8);
 }

 if (FUNC_15(VAR_5, 1, "proto_tls server") != 0)
  FUNC_13(VAR_0, "Unable to sandbox TLS server.");
 FUNC_11(1, "Privileges successfully dropped.");

 FUNC_10(VAR_12);
 FUNC_10(VAR_13);

 if (FUNC_6(VAR_11, VAR_13) != 1)
  FUNC_13(VAR_1, "SSL_set_fd() failed.");

 VAR_14 = FUNC_2(VAR_11);
 FUNC_17(VAR_11, VAR_14);

 FUNC_19(VAR_12, VAR_11);
}
