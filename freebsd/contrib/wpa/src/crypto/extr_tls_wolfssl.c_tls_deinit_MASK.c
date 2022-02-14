
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int dummy; } ;
typedef int WOLFSSL_CTX ;


 int FUNC_0 (struct tls_context*) ;
 struct tls_context* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 struct tls_context* FUNC_2 (void*,int ) ;
 int FUNC_3 () ;

void FUNC_4(void *VAR_2)
{
 struct tls_context *VAR_3 = FUNC_2(VAR_2, 0);

 if (VAR_3 != VAR_0)
  FUNC_0(VAR_3);

 FUNC_1((WOLFSSL_CTX *) VAR_2);

 VAR_1--;
 if (VAR_1 == 0) {
  FUNC_3();
  FUNC_0(VAR_0);
  VAR_0 = ((void*)0);
 }
}
