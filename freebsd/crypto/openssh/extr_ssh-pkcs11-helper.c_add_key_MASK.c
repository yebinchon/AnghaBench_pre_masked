
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;
struct pkcs11_keyinfo {struct sshkey* key; int providername; } ;


 int FUNC_0 (int *,struct pkcs11_keyinfo*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pkcs11_keyinfo* FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(struct sshkey *VAR_2, char *VAR_3)
{
 struct pkcs11_keyinfo *VAR_4;

 VAR_4 = FUNC_1(1, sizeof(*VAR_4));
 VAR_4->providername = FUNC_2(VAR_3);
 VAR_4->key = VAR_2;
 FUNC_0(&VAR_1, VAR_4, VAR_0);
}
