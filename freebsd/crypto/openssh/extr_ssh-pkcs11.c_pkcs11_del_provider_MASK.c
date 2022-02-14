
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs11_provider {int dummy; } ;


 int FUNC_0 (int *,struct pkcs11_provider*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pkcs11_provider*) ;
 struct pkcs11_provider* FUNC_2 (char*) ;
 int FUNC_3 (struct pkcs11_provider*) ;
 int VAR_1 ;

int
FUNC_4(char *VAR_2)
{
 struct pkcs11_provider *VAR_3;

 if ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
  FUNC_0(&VAR_1, VAR_3, VAR_0);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
  return (0);
 }
 return (-1);
}
