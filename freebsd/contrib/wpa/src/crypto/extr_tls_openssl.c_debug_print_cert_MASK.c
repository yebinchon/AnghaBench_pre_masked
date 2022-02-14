
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (scalar_t__,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_9(X509 *VAR_2, const char *VAR_3)
{

 BIO *VAR_4;
 size_t VAR_5;
 char *VAR_6;
 int VAR_7;

 if (VAR_1 > VAR_0)
  return;

 VAR_4 = FUNC_2(FUNC_4());
 if (!VAR_4)
  return;

 FUNC_5(VAR_4, VAR_2);
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_7(VAR_5 + 1);
 if (!VAR_6) {
  FUNC_1(VAR_4);
  return;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_5);
 if (VAR_7 > 0) {
  VAR_6[VAR_7] = '\0';
  FUNC_8(VAR_0, "OpenSSL: %s\n%s", VAR_3, VAR_6);
 }
 FUNC_6(VAR_6);

 FUNC_1(VAR_4);

}
