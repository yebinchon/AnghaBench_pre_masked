
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int *) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, const char *VAR_3)
{
 WOLFSSL_CTX *VAR_4 = VAR_2;

 if (VAR_3) {
  if (FUNC_0(VAR_4, VAR_3, ((void*)0)) != 1)
  {
   FUNC_1(VAR_1,
       "Failed to load root certificates");
   return -1;
  }

  FUNC_1(VAR_0,
      "TLS: Trusted root certificate(s) loaded");
 }

 return 0;
}
