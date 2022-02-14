
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(SSL_CTX *VAR_3)
{
 FUNC_2(VAR_1) *VAR_2;

 FUNC_6(VAR_0, "OpenSSL: Configured certificate chain");
 if (FUNC_1(VAR_3, &VAR_2) == 1) {
  int VAR_4;

  for (VAR_4 = FUNC_4(VAR_2); VAR_4 > 0; VAR_4--)
   FUNC_3(VAR_4, FUNC_5(VAR_2,
         VAR_4 - 1));
 }
 FUNC_3(0, FUNC_0(VAR_3));
}
