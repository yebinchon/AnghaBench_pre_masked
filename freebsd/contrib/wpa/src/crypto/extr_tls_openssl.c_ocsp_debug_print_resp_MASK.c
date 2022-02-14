
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OCSP_RESPONSE ;
typedef int BIO ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 () ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (scalar_t__,char*,char*) ;

__attribute__((used)) static void FUNC_9(OCSP_RESPONSE *VAR_2)
{

 BIO *VAR_3;
 size_t VAR_4;
 char *VAR_5;
 int VAR_6;

 if (VAR_1 > VAR_0)
  return;

 VAR_3 = FUNC_2(FUNC_4());
 if (!VAR_3)
  return;

 FUNC_5(VAR_3, VAR_2, 0);
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_7(VAR_4 + 1);
 if (!VAR_5) {
  FUNC_1(VAR_3);
  return;
 }

 VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_4);
 if (VAR_6 > 0) {
  VAR_5[VAR_6] = '\0';
  FUNC_8(VAR_0, "OpenSSL: OCSP Response\n%s", VAR_5);
 }
 FUNC_6(VAR_5);
 FUNC_1(VAR_3);

}
