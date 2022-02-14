
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs11_keyinfo {int key; struct pkcs11_keyinfo* providername; } ;


 struct pkcs11_keyinfo* FUNC_0 (int *) ;
 struct pkcs11_keyinfo* FUNC_1 (struct pkcs11_keyinfo*,int ) ;
 int FUNC_2 (int *,struct pkcs11_keyinfo*,int ) ;
 int FUNC_3 (struct pkcs11_keyinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pkcs11_keyinfo*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_2)
{
 struct pkcs11_keyinfo *VAR_3, *VAR_4;

 for (VAR_3 = FUNC_0(&VAR_1); VAR_3; VAR_3 = VAR_4) {
  VAR_4 = FUNC_1(VAR_3, VAR_0);
  if (!FUNC_5(VAR_3->providername, VAR_2)) {
   FUNC_2(&VAR_1, VAR_3, VAR_0);
   FUNC_3(VAR_3->providername);
   FUNC_4(VAR_3->key);
   FUNC_3(VAR_3);
  }
 }
}
