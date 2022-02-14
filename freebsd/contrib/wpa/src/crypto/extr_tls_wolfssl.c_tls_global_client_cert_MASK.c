
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(void *VAR_4, const char *VAR_5)
{
 WOLFSSL_CTX *VAR_6 = VAR_4;

 if (!VAR_5)
  return 0;

 if (FUNC_1(VAR_6, VAR_5,
         VAR_2) !=
     VAR_3 &&
     FUNC_0(VAR_6, VAR_5) !=
     VAR_3) {
  FUNC_2(VAR_1, "Failed to load client certificate");
  return -1;
 }

 FUNC_2(VAR_0, "SSL: Loaded global client certificate: %s",
     VAR_5);

 return 0;
}
