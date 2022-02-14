
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mdstr ;
typedef int X509 ;
typedef int SSL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned char*,unsigned int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*,char*,unsigned char) ;
 scalar_t__ FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(SSL *VAR_3, const char *VAR_4)
{
 unsigned char VAR_5[VAR_0];
 char VAR_6[sizeof("SHA256=") - 1 + VAR_0 * 3];
 char *VAR_7;
 unsigned int VAR_8, VAR_9;
 X509 *VAR_10;

 if (VAR_4[0] == '\0') {
  FUNC_6(1, "No fingerprint verification requested.");
  return;
 }

 VAR_10 = FUNC_3(VAR_3);
 if (VAR_10 == ((void*)0))
  FUNC_7(VAR_2, "No peer certificate received.");

 if (FUNC_4(VAR_10, FUNC_0(), VAR_5, &VAR_9) != 1)
  FUNC_7(VAR_2, "X509_digest() failed.");
 FUNC_1(VAR_9 <= VAR_0);

 FUNC_5(VAR_10);

 (void)FUNC_10(VAR_6, "SHA256=", sizeof(VAR_6));
 VAR_7 = VAR_6 + FUNC_11(VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  FUNC_2(VAR_7 + 3 <= VAR_6 + sizeof(VAR_6));
  (void)FUNC_8(VAR_7, "%02hhX:", VAR_5[VAR_8]);
  VAR_7 += 3;
 }

 VAR_7[-1] = '\0';
 if (FUNC_9(VAR_6, VAR_4) != 0) {
  FUNC_7(VAR_1,
      "Finger print doesn't match. Received \"%s\", expected \"%s\"",
      VAR_6, VAR_4);
 }
}
