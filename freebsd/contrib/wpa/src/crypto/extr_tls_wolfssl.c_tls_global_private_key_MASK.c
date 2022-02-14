
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WOLFSSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int * VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, const char *VAR_6,
      const char *VAR_7)
{
 WOLFSSL_CTX *VAR_8 = VAR_5;
 char *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (!VAR_6)
  return 0;

 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_7);
  if (!VAR_9)
   return -1;
 }

 FUNC_2(VAR_8, VAR_4);
 FUNC_3(VAR_8, VAR_9);

 if (FUNC_4(VAR_8, VAR_6,
         VAR_2) != 1 &&
     FUNC_4(VAR_8, VAR_6,
         VAR_3) != 1) {
  FUNC_5(VAR_1, "Failed to load private key");
  VAR_10 = -1;
 }

 FUNC_5(VAR_0, "SSL: Loaded global private key");

 FUNC_0(VAR_9);
 FUNC_2(VAR_8, ((void*)0));

 return VAR_10;
}
