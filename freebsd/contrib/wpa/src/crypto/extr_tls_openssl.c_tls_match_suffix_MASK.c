
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;


 char* FUNC_0 (char const*,char*,char const**) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int) ;

__attribute__((used)) static int FUNC_2(X509 *VAR_0, const char *VAR_1, int VAR_2)
{




 const char *VAR_3, *VAR_4 = ((void*)0);


 while ((VAR_3 = FUNC_0(VAR_1, ";", &VAR_4))) {
  if (FUNC_1(VAR_0, VAR_3, VAR_4 - VAR_3, VAR_2))
   return 1;
 }

 return 0;

}
