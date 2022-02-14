
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs11_provider {int dummy; } ;


 struct pkcs11_provider* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct pkcs11_provider*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pkcs11_provider*) ;
 int FUNC_3 (struct pkcs11_provider*) ;
 int VAR_1 ;

void
FUNC_4(void)
{
 struct pkcs11_provider *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1)) != ((void*)0)) {
  FUNC_1(&VAR_1, VAR_2, VAR_0);
  FUNC_2(VAR_2);
  FUNC_3(VAR_2);
 }
}
