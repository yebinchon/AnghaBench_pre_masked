
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int * FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static SSL_CTX*
FUNC_3(void)
{
 SSL_CTX* VAR_1 = FUNC_0(FUNC_1());
 if(!VAR_1) {
  if(VAR_0) FUNC_2("SSL_CTX_new error\n");
  return ((void*)0);
 }
 return VAR_1;
}
